var databaseUrl = "mongodb://127.0.0.1:27017/mydb";
var mongojs = require("./node_modules/mongojs");
var db = mongojs(databaseUrl);
//var collections = db.collection("users");
console.log("Connected");



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
  
  exports.updateUser = function (username,email,res) {
    console.log(email);
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
