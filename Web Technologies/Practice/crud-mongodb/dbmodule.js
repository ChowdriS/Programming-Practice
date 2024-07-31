
var databaseUrl = "mongodb://127.0.0.1:27017/mydb";
var mongojs = require("./node_modules/mongojs");
var db = mongojs(databaseUrl);

console.log("Connected");

exports.authenticateUser = function(username, email, response) 
{
    console.log(username);
    console.log(email);
    db.users.find({ "username": username, "email": email },
        function(err, op) {
            
            if (err || !op) {
                response.write("..Not authorized user" || err);
                response.end();
            } else if (op.length == 0) {
                response.write("Not authorized user");
                response.end();
            } else {
                response.write("Authorized user");
                response.end();
            }

        });
}

exports.saveUser = async function(username, email) 
{
    console.log('Saving user to mongo');
    db.users.insert({"username": username, "email": email },
        function(err, saved) {
            if (err || !saved)
                console.log(err);
            else
                console.log("User saved");
            
        });
}

exports.deleteUser = function (username, email, response) {
    db.users.remove({ username: username, email: email }, function (err, del) {
      console.log(del);
      if (del.deletedCount == 0) {
        response.end("error in delete of the user");
      } else {
        response.end("user successfully deleted");
      }
    });
  };
  
exports.updateUser = function (username,email, res) {
    console.log("email_update");
    db.users.update(
      { email: email },
      { $set: { username: username } },
      function (err, data) {
        console.log(data);
        if (data.nModified > 0) res.end("Your Username has been changed");
        else res.end("Your Username has not been changed");
      }
    );
  };
