function validate() 
{
    var name = document.f1.uname.value;
    var email = document.f1.email.value;
    var pass = document.f1.pass.value;
    if(name == "mayank")
    {
        if(pass.length > 5)
            return true;
        else
            alert("Password should be greater than 5 characters");
    }
    else
        alert("Name Should Be 'mayank' ");    
}