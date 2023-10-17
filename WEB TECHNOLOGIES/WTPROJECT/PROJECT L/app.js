// const a=27
// if (a==24){
//     console.log(a)
// }
// else{
//     console.log(a+""+1)
// }
var http=require('http');
var file=require('fs');
// var dt=require('./sample')
http.createServer(function(req,res){
    file.readFile('hello.html',function(err,data){
    res.writeHead(200,{'Content-Type':'text/html'});
    res.write(data);
    res.end();});
}).listen(8080);