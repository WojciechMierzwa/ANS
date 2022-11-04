
  function logic(a, b, c, d) {

    let x1 = Boolean(Number(a));
    let x2 = Boolean(Number(b));
    let x3 = Boolean(Number(c));
    let x4 = Boolean(Number(d));

    let y1 = ((x2&&x3&&x4)||(x1&&x3&&x4));
    let y2 = ((!x3)||((!x1)&&(!x2)));

      if(a>1 || a<0)
      {
        alert("Prosze podac 0 albo 1");
      }
      else if(b>1 || b<0)
      {
        alert("Prosze podac 0 albo 1");
      }
      else if(c>1 || c<0)
      {
        alert("Prosze podac 0 albo 1");
      }
      else if(d>1 || d<0)
      {
        alert("Prosze podac 0 albo 1");
      }
      else
      {
        //alert("y1= " +y1 + ", y2 =" +y2);
        document.getElementById("Y1").innerHTML=Number(y2);
        document.getElementById("Y2").innerHTML=Number(y1);
        
        return [y1, y2];
      }

    
  }