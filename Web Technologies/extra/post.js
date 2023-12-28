var http=require('http');
var url=require('url');
var query=require('querystring');
var qs, name, email;

http.createServer ((
        req, res) => {
        var data1= '';
        req.on('data', function(chunk) { 
            data1 += chunk;
        });

        req.on('end', 
        ()=> {
        qs=query.parse(data1);
        console.log(qs);
        name=qs['name'];
        email=qs['email'];
        res.write('<h1>Your Name is '+name+'<br>Your email is '+email+'</h1><br>');
        });
}).listen(7000);
console.log("Server Started");