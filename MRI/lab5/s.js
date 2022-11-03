function logicCalc(x1, x2, x3, x4) {
   /* let x1 = Boolean(Number(p1));
    let x2 = Boolean(Number(p2));
    let x3 = Boolean(Number(p3));
    let x4 = Boolean(Number(p4));

    let x1x2 = (x1 || x2);
    let y1 = !(x1x2 & x3);
    let y2 = !(y1 || (!x4))
    alert(y1);
    alert(y2);
    return [y1, y2];
*/
    const x1x2 = new Boolean(x1 || x2);
    const y1 = new Boolean(!(x1x2 & x3));
    const y2 = new Boolean(!((!x4) || y1));
    alert(y1);
    alert(y2);

  }
  /*function add(a,b) {
    const logic = new Boolean(a & b);
    alert(logic);
  }*/
  function logic(a, b, c, d) {
    //var sum = parseInt(a, 10) + parseInt(b, 10) + parseInt(c, 10) + parseInt(d, 10);
    let x1 = Boolean(Number(a));
    let x2 = Boolean(Number(b));
    let x3 = Boolean(Number(c));
    let x4 = Boolean(Number(d));

    let x1x2 = (x1 || x2);
    let y1 = !(x1x2 & x3);
    let y2 = !(y1 || (!x4))

      alert("y1= " +y1 + ", y2 =" +y2);

    
  }