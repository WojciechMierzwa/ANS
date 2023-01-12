function parseJsonAndInsertImages(text) {
    const obj = JSON.parse(text);
    let text1="";
  
    


    for(let i=0; i<9; i++)
    {
        if(i==0)
        text1="<table>";
        if(i%3==0)
        {
            text1=text1+"<tr>";
        }

        text1=text1+"<td><img src="+obj.produkcje[i].Obraz+">"+"</td>";

    
        if((i%3-2)==0)
        {
            text1=text1+"</tr>";
        }

        
        
    }
    text1=text1+"</table>";
    document.getElementById("demo").innerHTML =
     text1;
  }
  
  let text = '{"produkcje":[' +
   '{"Typ":"Film","Nazwa":"Titanic","Gatunek":"Romans","Obraz":"images/titanic.jpg" },' +
   '{"Typ":"Film","Nazwa":"Przeminelo z wiatrem","Gatunek":"Romans","Obraz":"images/przeminelozwiatrem.jpg" },' +
   '{"Typ":"Film","Nazwa":"Tożsamość Bournea","Gatunek":"Akcja","Obraz":"images/tozsamoscbournea.jpg" },'+
   '{"Typ":"Film","Nazwa":"Pianista","Gatunek":"Dramat","Obraz":"images/pianista.jpg" },'+
   '{"Typ":"Serial","Nazwa":"Simpsonowie","Gatunek":"Animowany","Obraz":"images/simpsonowie.jpg" },'+
   '{"Typ":"Serial","Nazwa":"Wenesday","Gatunek":"Komedia","Obraz":"images/wednesday.jpg" },'+
   '{"Typ":"Film","Nazwa":"Mój sąsiad Totoro","Gatunek":"Animowany","Obraz":"images/moj-sasiad-totoro.jpg" },'+
   '{"Typ":"Serial","Nazwa":"M jak miłość","Gatunek":"Romans","Obraz":"images/m.jpg" },'+
   '{"Typ":"Serial","Nazwa":"Cobra Kai","Gatunek":"Akcja","Obraz":"images/cobrakai.jpg" }]}';
  
  parseJsonAndInsertImages(text);
  