function logicCalc(x1, x2, x3, x4) {
    let x1 = Boolean(Number(p1));
    let x2 = Boolean(Number(p2));
    let x3 = Boolean(Number(p3));
    let x4 = Boolean(Number(p4));

    let x1x2 = (x1 || x2);
    let y1 = !(x1x2 & x3);
    let y2 = !(y1 || (!x4))
    alert(y1);
    alert(y2);
    return [y1, y2];

  }
