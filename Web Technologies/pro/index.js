function formvalidation(){
    var name = document.forms.RegForm.Name.value;
    var email = document.forms.RegForm.EMail.value;
    var phone = document.forms.RegForm.Telephone.value;
    var password = document.forms.RegForm.Password.value;
    var password = document.forms.RegForm.Password.value;
    var address = document.forms.RegForm.Address.value;
    var regEmail=/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/g;  
    var regPhone=/^\d{10}$/;                                        
    var regName = /\d+$/g;                                    
  
    if (name == "" || regName.test(name)) 
    {
        window.alert("Please enter your name properly.");
        console.log("ew");
        name.focus();
        console.log("hew");
        return false;
    }
  
    if (address == "") 
    {
        window.alert("Please enter your address.");
        address.focus();
        return false;
    }
      
    if (email == "" || !regEmail.test(email))
    {
        window.alert("Please enter a valid e-mail address.");
        email.focus();
        return false;
    }
       
    if (password == "") 
    {
        alert("Please enter your password");
        password.focus();
        return false;
    }
  
    if(password.length <8)
    {
        alert("Password should be atleast 8 character long");
        password.focus();
        return false;
    }

    if (password == "") 
    {
        alert("Please enter your password");
        password.focus();
        return false;
    }
  
    if(password.length <8)
    {
        alert("Password should be atleast 8 character long");
        password.focus();
        return false;
    }

    if (phone == "" || !regPhone.test(phone)) 
    {
        alert("Please enter valid phone number.");
        phone.focus();
        return false;
    }
    return true;
} 
