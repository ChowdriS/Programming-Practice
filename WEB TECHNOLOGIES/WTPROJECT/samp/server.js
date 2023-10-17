var module = require('./dbmodule');
var url = require('url');
var querystring = require('querystring');
var http = require('http');
var data1 = '';
http.createServer(function(request, response) {
	request.on('data',(chunk)=> { data1 += chunk; });
        request.on('end', function() {
            var qs=querystring.parse(data1);
            var name = qs['username'];
            console.log(name);
            var email = qs['email'];
            console.log(email);
            if (request.url == '/login') {
                module.authenticateUser(name, email, response);
            } else if (request.url == '/save') {
                module.saveUser(name, email);
            }
            else if (request.url == '/update') {
                module.updateUser(name, email,response);
            }            
            else if (request.url == '/delete') {
                module.deleteUser(name, email,response);
            }            
        });
   
}).listen(3000);
console.log("Server started");