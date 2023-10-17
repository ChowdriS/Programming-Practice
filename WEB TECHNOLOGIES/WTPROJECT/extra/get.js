var http=require('http');
var url=require('url');
var query=require('querystring');

http.createServer((req,res)=>{
    var path=url.parse(req.url).pathname;
    res.write('<h1>Path given is '+path+'</h1><br>');
    var data = url.parse(req.url).query;
    var name=query.parse(data)['name'];
    var email=query.parse(data)['email'];
    res.write('<h1>Your Name is '+name+'<br>Your email is '+email+'</h1><br>');
}).listen(8000);
console.log("Server Started");