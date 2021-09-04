#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(int i=5;i<300;i+=5){
setcolor(YELLOW);
circle(100+i,100,100);
fillellipse(145+i,70,10,16);
fillellipse(55+i,70,10,16);
ellipse(100+i,120,200,360,58,35);
ellipse(100+i,120,200,360,58,36);
ellipse(100+i,120,200,360,58,37);
delay(100);
cleardevice();
}

for(int j=5;j<300;j+=5){
setcolor(RED);
circle(100+j,300,100);
fillellipse(145+j,270,10,16);
fillellipse(55+j,270,10,16);
ellipse(100+j,360,0,180,58,35);
ellipse(100+j,360,0,180,58,36);
ellipse(100+j,360,0,180,58,37);
delay(200);
cleardevice();
}






getch();
closegraph();
return 0;
}







/*Additionaly can be added for more formatting purpose

setcolor(YELLOW);
circle(100,50,40);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(100,50,YELLOW);
fillellipse(110,35,2,6);
fillellipse(90,35,2,6);
ellipse(100,50,205,335,10,9);
ellipse(100,50,205,335,10,10);
ellipse(100,50,205,335,10,11);

setcolor(RED);
circle(60,300,40);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(60,300,YELLOW);
fillellipse(70,300,2,6);
fillellipse(50,300,2,6);
ellipse(60,300,205,335,20,9);
ellipse(60,300,205,335,20,10);
ellipse(60,300,205,335,20,11);




getch();
closegraph();
return 0;

}
*/
