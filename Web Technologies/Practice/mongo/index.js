var express=require("express");
var bodyparse=require("body-parser");
var mongoose=require("mongoose");

var app=express();  

app.use(bodyparse.json());
app.use(express.static("public"));
app.use(bodyparse.urlencoded({
    extended:true
}));

mongoose.connect('mongodb://127.0.0.1//sample',{
    useNewUrlParser: true,
    useUnifiedTopology: true
});

var db=mongoose.connection;

db.on('error',()=>{
    console.log("Error in db connection");
});
db.once('open',()=>{
    console.log("db connected");
});



app.post("/signup",(req,res)=>{
    var name=req.body.name;
    var email=req.body.email;
    var password=req.body.password;

    var data={
        "name":name,
        "email":email,
        "password":password
    };

    db.collections('users').insertOne(data,(err,collection)=>{
        if(err){
            throw err;
        }
        console.log("Record Inserted");
    });

    return res.redirect('signup_success.html');
})

app.get("/",(req,res)=>{
    res.set({
        "Allow-access-allow-origin" : '*'
    });
    return res.redirect('index.html');
}).listen(8000);

console.log("Server Running");