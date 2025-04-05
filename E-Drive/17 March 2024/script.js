document.querySelector('.icon').addEventListener('click',() =>
{
  myFunction();
});
document.getElementById('discord-server').addEventListener('click', function() {
  window.location.href = 'https://discord.gg/AeQWRsrtqg';
});
function myFunction() {
    var x = document.getElementById("myLinks");
    if (x.style.display === "block") {
      x.style.display = "none";
    } else {
      x.style.display = "block";
    }
}
