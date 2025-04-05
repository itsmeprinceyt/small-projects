let score = JSON.parse(localStorage.getItem('score')) || {
    wins: 0,
    losses: 0,
    ties: 0
};
function scoreLoad(){
    document.querySelector('.js-score').innerHTML = `Wins: ${score.wins} Losses: ${score.losses} Ties: ${score.ties}`;
}
function displayNone(){
    document.querySelector('.reset-message').style.display= 'none';
}
function scoreReset(){
    document.querySelector('.reset-message').style.display ='flex';
    document.querySelector('.yes').addEventListener('click',() => {
        displayNone();
        score.wins = 0;
        score.losses = 0;
        score.ties = 0;
        scoreLoad();
        localStorage.remove('score');
    });
    document.querySelector('.no').addEventListener('click',()=> {
        displayNone();
    });
}
let toggleB = false;
let intervalID;
let AutoPlay = document.querySelector('.noti');
let AutoPlayButton = document.querySelector('.auto-play');
function autoPlay() {
    if (!toggleB) {
        toggleB = true;
        AutoPlay.style.color = 'red';
        AutoPlay.innerHTML = 'Autoplay is on!';
        AutoPlayButton.innerHTML = 'Stop Autplay';
        setTimeout(() => {
            AutoPlay.style.opacity = 1;
        }, 1500);
        intervalID = setInterval(() => {
            const playerMove = generateComputerMove();
            gamePlay(playerMove);
        }, 1500);
    } else {
        clearInterval(intervalID);
        toggleB = false;
        AutoPlay.style.color = 'yellow';
        AutoPlay.innerHTML = 'Autoplay is off!';
        AutoPlayButton.innerHTML = 'Auto Play';
        setTimeout(() => {
            AutoPlay.style.opacity = 0;
        }, 5000);
    }
}
document.querySelector('.auto-play').addEventListener('click', autoPlay);
function gamePlay(playerMove){
    const ComputerMove = generateComputerMove();
    let result ='';
    if (playerMove === 'scissors'){
        if (ComputerMove === 'rock'){
            result ='You lose.';
        } else if (ComputerMove === 'paper'){
            result ='You win.';
        }else if (ComputerMove === 'scissors'){
            result ='Tie';
        }
    } else if (playerMove === 'paper'){
        if (ComputerMove === 'rock'){
            result ='You win';
        } else if (ComputerMove === 'paper'){
            result ='Tie';
        } else if (ComputerMove === 'scissors'){
            result ='You lose.';
        }
    } else if (playerMove === 'rock'){
        if (ComputerMove === 'rock'){
            result ='Tie';
        } else if (ComputerMove === 'paper'){
            result ='You lose.';
        } else if (ComputerMove === 'scissors'){
            result ='You win.';
        }
    }
    if ( result === 'You win.'){
        score.wins +=1;
    } else if (result === 'You lose.'){
        score.losses +=1;
    } else if (result === 'Tie'){
        score.ties +=1;
    }
    console.log(score);
    localStorage.setItem('score',JSON.stringify(score));
    document.querySelector('.js-result').innerHTML = result;
    document.querySelector('.js-moves').innerHTML= `You
    <img src="images/${playerMove}.png">
    <img src="images/${ComputerMove}.png">
    Computer`;
    scoreLoad();
}
function generateComputerMove(){
    const NumberRandom = Math.random();
    let ComputerMove ='';
    if ( NumberRandom >=  0 && NumberRandom < 1/3){
        ComputerMove = 'rock';
    } else if ( NumberRandom >= 1/3 && NumberRandom < 2/3){
        ComputerMove = 'paper'
    } else if (NumberRandom >= 2/3 && NumberRandom <1){
        ComputerMove = 'scissors';
    }
    return ComputerMove;
}
function openURL() {
    window.open('https://github.com/itsmeprinceyt/rock-paper-scissors', '_blank');
}
document.querySelector('.github').addEventListener('click',() =>{
    openURL();
})
document.querySelector('.js-paper').addEventListener('click',() => {
    gamePlay('paper');
})
document.querySelector('.js-rock').addEventListener('click',() => {
    gamePlay('rock');
})
document.querySelector('.js-scissors').addEventListener('click',() => {
    gamePlay('scissors');
})
document.querySelector('.reset-button').addEventListener('click',() =>{
    scoreReset();
})
document.body.addEventListener('keydown', (event) => {
    if(event.key === 'r')
    {
        gamePlay('rock');
    } else if(event.key ==='s')
    {
        gamePlay('scissors');
    } else if(event.key === 'p')
    {
        gamePlay('scissors');
    }else if(event.key === 'a')
    {
        autoPlay();
    }else if(event.key==='Backspace')
    {
        scoreReset();
    }
})
