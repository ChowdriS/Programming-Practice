document.addEventListener('DOMContentLoaded', () => {
    const loginPage = document.getElementById('login-page');
    const formPage = document.getElementById('form-page');
    const viewPage = document.getElementById('view-page');
    
    const loginForm = document.getElementById('login-form');
    const loginError = document.getElementById('login-error');
    
    const patientForm = document.getElementById('patient-form');
    
    const viewName = document.getElementById('view-name');
    const viewId = document.getElementById('view-id');
    const viewPicture = document.getElementById('view-picture');
    const viewPercentage = document.getElementById('view-percentage');
    const metric1 = document.getElementById('metric-1');
    const metric2 = document.getElementById('metric-2');
    const viewPhone = document.getElementById('view-phone');
    const viewEmail =

 document.getElementById('view-email');
    const viewAffectedSide = document.getElementById('view-affected-side');
    const viewCondition = document.getElementById('view-condition');
    const viewSpecialty = document.getElementById('view-specialty');
    const viewMedicalHistory = document.getElementById('view-medical-history');
    
    loginForm.addEventListener('submit', (event) => {
        event.preventDefault();
        
        const username = document.getElementById('username').value;
        const password = document.getElementById('password').value;
        
        if (username === 'user' && password === 'password') {
            loginPage.classList.add('hidden');
            formPage.classList.remove('hidden');
        } else {
            loginError.classList.remove('hidden');
        }
    });
    
    patientForm.addEventListener('submit', (event) => {
        event.preventDefault();
        
        const name = document.getElementById('name').value;
        const age = document.getElementById('age').value;
        const gender = document.getElementById('gender').value;
        const phone = document.getElementById('phone').value;
        const email = document.getElementById('email').value;
        const affectedSide = document.getElementById('affected-side').value;
        const condition = document.getElementById('condition').value;
        const specialty = document.getElementById('specialty').value;
        const medicalHistory = document.getElementById('medical-history').value;
        
        viewName.textContent = `${name}, ${gender}/${age}`;
        viewId.textContent = `Patient ID: B7 ${new Date().toISOString().replace(/[-:]/g, '').slice(0, 14)}`;
        viewPhone.textContent = phone;
        viewEmail.textContent = email;
        viewAffectedSide.textContent = affectedSide;
        viewCondition.textContent = condition;
        viewSpecialty.textContent = specialty;
        viewMedicalHistory.textContent = medicalHistory;
        
        formPage.classList.add('hidden');
        viewPage.classList.remove('hidden');
    });
    
    document.querySelector('.back-button').addEventListener('click', (event) => {
        event.preventDefault();
        viewPage.classList.add('hidden');
        formPage.classList.remove('hidden');
    });
});