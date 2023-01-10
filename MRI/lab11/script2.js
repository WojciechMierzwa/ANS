
function openNav() {
    document.getElementById("mySidebar").style.width = "250px";
    document.getElementById("main").style.marginLeft = "250px";
  }
  
  function closeNav() {
    document.getElementById("mySidebar").style.width = "0";
    document.getElementById("main").style.marginLeft= "0";
  }
let text="";

  var zero = document.getElementById("0");
  var one = document.getElementById("1");
  var add = document.getElementById("+");
  var subtract = document.getElementById("-");
  var AC = document.getElementById("AC");
  var DEL = document.getElementById("DEL");
  var sum = document.getElementById("sum");
  var textarea = document.getElementById("textarea");
  

  zero.addEventListener("click", function() {
    textarea.value += "0";
  });
  one.addEventListener("click", function() {
    textarea.value += "1";
  });
  add.addEventListener("click", function() {
    textarea.value += "+";
  });
  subtract.addEventListener("click", function() {
    textarea.value += "-";
  });
  AC.addEventListener("click", function() {
    textarea.value = "";
  });
  DEL.addEventListener("click", function() {
    textarea.value = textarea.value.substring(0, textarea.value.length - 1);
  });
  var xd = "+";
  sum.addEventListener("click", function() {
    
    var myString = textarea.value;
    var requiredChar = "+";
    var requiredChar2 = "-";
    var result;

if (myString.indexOf(requiredChar) !== -1) {
  var temp=textarea.value.split("+");
  result = Number(parseInt(temp[0], 2)) + Number(parseInt(temp[1], 2));
  textarea.value=result.toString(2);

} 
if (myString.indexOf(requiredChar2) !== -1) {
    var temp=textarea.value.split("-");
  result = Number(parseInt(temp[0], 2)) - Number(parseInt(temp[1], 2));
  textarea.value=result.toString(2);
  } 
    
  });

