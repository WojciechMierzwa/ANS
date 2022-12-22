
var sg= new Image();
sg.src="kociak.jpg";


function initcanvas(){
    var ctx = document.getElementById("canvas").getContext("2d");
    var w = ctx.canvas.width;
    var h = ctx.canvas.height;
    var flakes = [];
    function addflake(){
        var x = Math.floor(Math.random()*w) + 1;
       var y = 0;
       var s =  Math.floor(Math.random()*1) + 1;
       flakes.push({"x":x, "y":y, "s":s});
    }
    
function snow(){
    addflake();
    for(var i=0; i< flakes.length; i++){
        ctx.fillStyle = "rgba(255,255,255,.75)";
        ctx.beginPath();
        ctx.arc(flakes[i].x, flakes[i].y += flakes[i].s * 5, flakes[i].s * 5, 0, Math.PI * 2, false );
        ctx.fill();
        if(flakes[i].y > h){
            flakes.splice(i,1);
        }
    }
}

function animate(){
    ctx.save();
    ctx.clearRect(0,0,w,h);
 ctx.drawImage(sg,0,0);
    ctx.rotate(-.1);
    snow();
    ctx.restore();
}

var animateInterval= setInterval(animate , 50);
}

window.addEventListener('load',function(event){
    initcanvas();
});

function openNav() {
    document.getElementById("mySidebar").style.width = "250px";
    document.getElementById("main").style.marginLeft = "250px";
  }
  
  function closeNav() {
    document.getElementById("mySidebar").style.width = "0";
    document.getElementById("main").style.marginLeft= "0";
  }


  // time

  function calculateChristmasCountdown(){
    
    //Get today's date.
    var now = new Date();

    //Get the current month. Add a +1 because
    //getMonth starts at 0 for January.
    var currentMonth = (now.getMonth() + 1);

    //Get the current day of the month.
    var currentDay = now.getDate();

    //Work out the year that the next Christmas
    //day will occur on.
    var nextChristmasYear = now.getFullYear();
    if(currentMonth == 12 && currentDay > 24){
        //This year's Christmas Day has already passed.
        nextChristmasYear = nextChristmasYear + 1;
    }

    var nextChristmasDate = nextChristmasYear + '-12-24T00:00:00.000Z';
    var christmasDay = new Date(nextChristmasDate);

    //Get the difference in seconds between the two days.
    var diffSeconds = Math.floor((christmasDay.getTime() - now.getTime()) / 1000);

    var days = 0;
    var hours = 0;
    var minutes = 0;
    var seconds = 0;

    //Don't calculate the time left if it is Christmas day.
    if(currentMonth != 12 || (currentMonth == 12 && currentDay != 24)){
        //Convert these seconds into days, hours, minutes, seconds.
        days = Math.floor(diffSeconds / (3600*24));
        diffSeconds  -= days * 3600 * 24;
        hours   = Math.floor(diffSeconds / 3600);
        diffSeconds  -= hours * 3600;
        minutes = Math.floor(diffSeconds / 60);
        diffSeconds  -= minutes * 60;
        seconds = diffSeconds;
    }

    //Add our counts to their corresponding HTML elements.
    document.getElementById('days').innerHTML = days + ' Dzien';
    document.getElementById('hours').innerHTML = hours + ' Godzin';
    document.getElementById('minutes').innerHTML = minutes + ' Minut';
    document.getElementById('seconds').innerHTML = seconds + ' Sekund';

    //Recursive call after 1 second using setTimeout
    setTimeout(calculateChristmasCountdown, 1000);
}

calculateChristmasCountdown();
  

  