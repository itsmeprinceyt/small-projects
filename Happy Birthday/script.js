document.addEventListener('DOMContentLoaded', function () {
    const heart = document.querySelector('.heart');
    heart.style.opacity = '1';

    setTimeout(() => {
        heart.style.opacity = '0';
    }, 3000); 
    setTimeout(() => {
        const hiddenText = document.getElementById('hiddenText');
        hiddenText.style.display = 'block';
        hiddenText.style.opacity = '1';

        const button = document.querySelector('.button');
        button.style.display = 'inline-block';
        button.addEventListener('click', function () {
            window.location.href = 'happy_birthday.html';
        });
    }, 5500);
});
