function validateForm(e) {
    e.preventDefault();

    const name = document.getElementById("name").value;
    const address = document.getElementById("address").value;
    const email = document.getElementById("email").value;
    const password = document.getElementById("password").value;
    const subject = document.getElementById("subject").value;
    const agree = document.getElementById("agree").checked;
    const nameError = document.getElementById("name-error");

    const pwdRegExp = /^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!%*#?&]{6,10}$/
    const emailRegExp = /^[^\W_]+\w*(?:[.-]\w*)*[^\W_]+@[^\W_]+(?:[.-]?\w*[^\W_]+)*(?:\.[^\W_]{2,})$/        

    const addressError = document.getElementById(
        "address-error"
    );
    const emailError = document.getElementById(
        "email-error"
    );
    const passwordError = document.getElementById(
        "password-error"
    );
    const subjectError = document.getElementById(
        "subject-error"
    );
    const agreeError = document.getElementById(
        "agree-error"
    );

    nameError.textContent = "";
    addressError.textContent = "";
    emailError.textContent = "";
    passwordError.textContent = "";
    subjectError.textContent = "";
    agreeError.textContent = "";

    let isValid = true;

    if (name === "" || /\d/.test(name)) {
        nameError.textContent =
            "Please enter your name properly.";
        isValid = false;
    }

    if (address === "") {
        addressError.textContent =
            "Please enter your address.";
        isValid = false;
    }

    /* if (email === "" || !email.includes("@")) {
        emailError.textContent =
            "Please enter a valid email address.";
        isValid = false;
    } */

    if(!email.match(emailRegExp)) {
        emailError.textContent =
            "Please enter a valid email address.";
        isValid = false;
    }

    /* if (password === "" || password.length < 6) {
        passwordError.textContent =
            "Please enter a password with at least 6 characters.";
        isValid = false;
    } */

    if(!password.match(pwdRegExp)) {
        passwordError.textContent =
            "Please enter a password with at least 6 characters with atleast one capital leter, one small letter, one number and one special character.";
        isValid = false;
    }

    if (subject === "") {
        subjectError.textContent =
            "Please select your course.";
        isValid = false;
    }

    if (!agree) {
        agreeError.textContent =
            "Please agree to the above information.";
        isValid = false;
    }

    const userDetails = {
        name,
        address,
        email,
        password,
        subject,
        agree
    }

    // document.getElementById("form-data").innerHTML = userDetails;
    console.log("USER:", userDetails)
    return isValid;
}