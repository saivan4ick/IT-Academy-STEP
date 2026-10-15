const burger = document.querySelector('.burger');
const menu = document.querySelector('.header_menu');
const closeButton = document.querySelector('.menu_close');

burger.addEventListener('click', () => {
    menu.classList.add('active');
});

closeButton.addEventListener('click', () => {
    menu.classList.remove('active');
});