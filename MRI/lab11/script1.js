
function openNav() {
    document.getElementById("mySidebar").style.width = "250px";
    document.getElementById("main").style.marginLeft = "250px";
  }
  
  function closeNav() {
    document.getElementById("mySidebar").style.width = "0";
    document.getElementById("main").style.marginLeft= "0";
  }


  function decimalToOctal() {

  }

  function decimalToHex() {

  }

  function generateASCI() {
    let text="<table><tr><th>Znak ASCI</th><th>Binary Number</th><th>Octal Number</th><th>Decimal Number</th><th>Hexadecimal Number</th></tr>";
    let bNumber;
    for(let i=33; i<=126; i++)
    {
      text=text+"<tr><td>"+String.fromCharCode(i)+"</td>"+"<td>"+i.toString(2)+"</td>"+"<td>"+i+"</td>"+"<td>"+i.toString(8)+"</td>"+"<td>"+i.toString(16)+"</td></tr>";
    }
    text = text + "</table>";
    document.getElementById("demo").innerHTML = text;
  }
  