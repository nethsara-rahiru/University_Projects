document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault();
    
    const phone = document.getElementById('phone').value;
    const firstName = document.getElementById('firstName').value;
    const lastName = document.getElementById('lastName').value;
    const password = document.getElementById('password').value;

    // Validate phone number: must be a number and exactly 10 digits long
    const phonePattern = /^[0-9]{10}$/;

    if (!phonePattern.test(phone)) {
        document.getElementById('message').textContent = "Phone number must be exactly 10 digits.";
        document.getElementById('message').style.color = "red";
        return;
    }

    // Check if other fields are filled
    if (firstName && lastName && password) {
        document.getElementById('message').textContent = "Login successful!";
        document.getElementById('message').style.color = "green";
    } else {
        document.getElementById('message').textContent = "Please fill all the fields!";
        document.getElementById('message').style.color = "red";
    }
});
