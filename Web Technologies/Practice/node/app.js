var http=require('http');

http.createServer(
    (req,res) => {
        res.writeHead(200,{'Content-Type': 'html/text'});
        res.write('<h1>Hello World</h1>');
    }
).listen(8000);