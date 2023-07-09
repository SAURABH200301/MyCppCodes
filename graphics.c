#include<graphics.h>
#include<conio.h>
main()
{
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   rectangle(left, top, right, bottom);
   circle(x, y, radius);
   bar(left + 300, top, right + 300,	 bottom);
   line(left - 10, top + 150, left + 410, top + 150);
   ellipse(x, y + 200, 0, 360, 100, 50);
   outtextxy(left + 100, top + 325, "My first C graphics program");

   getch();
   closegraph();
   return 0;
}
//#include<stdio.h>  
//#include<conio.h>  
//#include<graphics.h>  
//#include<dos.h>  
//main()  
//{     
//    int gd=DETECT,gm;  
//    initgraph(&gd,&gm,"c:\\tc\\bgi");  
//    setbkcolor(9);  
//    line(130,100,290,100);  
//      
//    line(165,100,165,155);  
//    arc(150,155,100,0,15);  
//    line(180,100,180,170);
//	line(190,100,190,170);  
//  
//    circle(220,140,10);  
//    line(220,130,255,130);  
//    line(255,100,255,170);  
//    line(265,100,265,170);  
//
//    getch();  
//}
