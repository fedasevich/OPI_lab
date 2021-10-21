  const cursor = document.querySelector(".cursor");
    const ham = document.querySelector(".navbar-toggler");
  var stopFlag = false;
  const cursor2 = document.querySelector(".cursor2");
 
    document.addEventListener("mousemove",function(e){
       var X = e.clientX;
  var Y = e.clientY;
      if (!stopFlag) {
      cursor.style.cssText  = "transform:translate(-50%, -50%) matrix(1, 0, 0, 1, " + X + ", " + Y +");";

}
cursor2.style.cssText = "transform:translate(-50%, -50%) matrix(1, 0, 0, 1, " + e.clientX + ", " + e.clientY +");";
      }) 





var a = document.querySelectorAll(".magic-hover");

    a.forEach((item, i) => {
      item.addEventListener("mouseenter", event => {
item.style.color = "red";
 if(item) {
   var hover = item.getBoundingClientRect();
   var hoverHeight = hover.height ;
   var hoverWidth = hover.width;
   var hoverTop = hover.top + hover.height/2;
   var hoverLeft = hover.left + hover.width/2;
}
stopFlag = true;
  cursor.style.cssText  = "transform:translate(-50%, -50%) matrix(1, 0, 0, 1, " + hoverLeft + ", " + hoverTop +");";
  cursor.style.width  = hoverWidth + "px";
  cursor.style.height  = hoverHeight + "px";
  cursor.style.borderRadius  = "0%";

})

 document.body.onmousedown = function() { 
 cursor2.style.display="none";
 cursor.style.backgroundColor="grey";
}
document.body.onmouseup = function() {
 cursor2.style.display="";
 cursor.style.backgroundColor="";
}

item.addEventListener("mouseleave", event => {
      item.style.color = "black";
 cursor.style.top =  "0px";
  cursor.style.left = "0px";
  cursor.style.transition = "1s";
stopFlag = false;
      });
    });


  const ham2 = document.querySelector("#nav-mhweb-hamburger");
  var after = document.querySelector(".after");
   var colapse = document.querySelector(".navbar_nav");
   var  clheight = document.documentElement.clientHeight;
    var open0 = 0;
   var open = 0;
    var open2 = 0;
ham.addEventListener("click", event => {
 if (open0==0) {
     after.style.width   = "1395px";
     colapse.style.display   = "block";
     open0++
  }
 else if (open==1) {
  setTimeout(function(){
   after.style.width  = "125px";
   colapse.style.display   = "none";
   open0--
 }, 2000);
 }


setTimeout(function(){
  if (open==0) {
     after.style.top  = clheight + "px";
        colapse.style.height  = clheight-80 + "px";
     open++
  }
 else if (open==1) {
     colapse.style.height  = "0px";
   after.style.top  = "80px";
   open--
 }
}, 1000);
      });




const section = document.querySelectorAll(".section");
window.onload = function() {
    section.forEach((item, i) => {
 item.style.height  = clheight-80 + "px";
})
};

const fullPage = document.querySelector(".fullpage");
    section.forEach((item, i) => {
document.addEventListener('mousewheel', event => {
     item.style.height  = clheight + "px";

        onWheel()

});
    
var clHeight = clheight;
var stopFlag2 = false;
var stopFlag3 = false;
var scrollpos = 1;
    function onWheel(e) {
      e = e || window.event;
      var delta = e.deltaY;
       if (delta==100) {
    console.log(delta);  
          

            if (stopFlag2==false) {
            fullPage.style.transform = "translate3d(0px, "+ -clHeight*scrollpos +"px, 0px";
      scrollpos++;  
        console.log(scrollpos);
      stopFlag2=true;
            }  

    
       setTimeout(function(){
          stopFlag2=false;  
}, 1500);
       }

       else if (delta==-100) {

            if (stopFlag3==false) {
            scrollpos--;
            scrollpos--;
           console.log(delta);  
                console.log(scrollpos);
                    fullPage.style.transform = "translate3d(0px, "+ -clHeight*scrollpos +"px, 0px";
      stopFlag3=true;
      console.log(stopFlag3);
         scrollpos++;
            }  
    
       setTimeout(function(){

          stopFlag3=false;  
          console.log(stopFlag3);
}, 1500);



    
    
       }
    }
})

