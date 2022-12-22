alert("Wesołych świąt\nNaciśnij gdziekolwiek, aby puścić muzyczke");


const audio = document.getElementById('song'); const p = document.querySelector('p'); window.onclick = function(){ audio.volume = 1; audio.play(); p.style.display = "none"; }


function openNav() {
    document.getElementById("mySidebar").style.width = "250px";
    document.getElementById("main").style.marginLeft = "250px";
  }
  
  function closeNav() {
    document.getElementById("mySidebar").style.width = "0";
    document.getElementById("main").style.marginLeft= "0";
  }

  