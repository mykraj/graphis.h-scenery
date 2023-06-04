#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>
#define PI 3.14
void fan(int a,int b,int i){
    line(a,b,a+100*sin(i*PI/236),b-100*cos(i*PI/236)) ;
    line(a,b,a+100*sin((i*PI/236)+2*PI/3),b-100*cos((i*PI/236)+2*PI/3)) ;
    line(a,b,a+100*sin((i*PI/236)+4*PI/3),b-100*cos((i*PI/236)+4*PI/3)) ;
    //line(a,b,a+100*sin((i*PI/6)+3*PI/2),b-100*cos((i*PI/6)+3*PI/2)) ;
}

int main()
{
    int gm=GetSystemMetrics(SM_CYSCREEN);
    int gd=GetSystemMetrics(SM_CXSCREEN);
    initwindow(gd,gm,"",-3,-3);
    int page =0;    
    
    while(1){
    for(int i=0;i<1700;i=i+10){
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();

    rectangle(1,1,1535,863);//border
    line(-3,700,10000,700);//road
    line(-4,350,10000,350);//grass
    //house
    rectangle(710,490,1120,350);
    rectangle(1030,490,1070,399);
    rectangle(800,445,900,385);
    line(850,445,850,385);
    line(800,415,900,415);
    line(1120,350,1050,290);
    line(1050,290,985,350);
    line(985,350,985,490);
    line(710,350,775,290);
    line(775,290,1050,290);

    line(1350,700,1000,490);//road
    line(1550,700,1100,490);//road
    
    //sky colour
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(2,2,WHITE);
    //grass colour
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(3,353,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1520,353,WHITE);
    //road colour
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(1080,500,WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(2,861,WHITE);
    //house colour
    setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
    floodfill(720,480,WHITE);
    setfillstyle(SLASH_FILL,YELLOW);
    floodfill(720,345,WHITE);
    setfillstyle(INTERLEAVE_FILL,WHITE);
    floodfill(990,480,WHITE);
    //girl
    setcolor(BLACK);
    circle(1400,500,22);
    line(1355,533,1445,533);
    line(1445,533,1355,660);
    line(1355,533,1445,660);
    line(1355,660,1445,660);
    rectangle(1375,660,1390,720);
    rectangle(1410,660,1425,720);
    line(1355,533,1330,555);
    line(1365,550,1330,572);
    line(1330,555,1300,550);
    line(1330,572,1296,566);
    circle(1298,558,10);
    line(1445,533,1475,615);
    line(1435,550,1467,629);
    circle(1471,622,9);
    setcolor(WHITE);
    //girl colour
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(1400,500,BLACK);
    setfillstyle(HATCH_FILL,RED);
    floodfill(1370,550,BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(1370,650,BLACK);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(1380,670,BLACK);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(1415,670,BLACK);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(1350,538,BLACK);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(1445,539,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1298,558,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1471,622,BLACK);
    //car
    setcolor(BLUE);
    line(2+i,750,2+i,690);
    line(2+i,750,100+i,750);
    arc(140+i,750,0,180,40);
    line(180+i,750,350+i,750);
    arc(390+i,750,0,180,40);
    line(430+i ,750,550+i,750);
    line(550+i,750,550+i,690);
    line(2+i,690,100+i,650);
    line(390+i,650,550+i,690);
    line(390+i,650,300+i,590);
    line(300+i,590,150+i,590);
    line(150+i,590,100+i,650);
    line(120+i,650,150+i,605);
    line(150+i,605,225+i,605);
    line(225+i,605,225+i,650);
    line(225+i,650,120+i,650);
    line(235+i,650,370+i,650);
    line(370+i,650,300+i,605);
    line(300+i,605,235+i,605);
    line(235+i,605,235+i,650);
    circle(140+i,750,35);
    circle(390+i,750,35);
    //car colour
    setfillstyle(SOLID_FILL,RED);
    floodfill(3+i,700,BLUE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(106+i,750,BLUE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(356+i,750,BLUE);
    setfillstyle(LINE_FILL,BROWN);
    floodfill(127+i,648,BLUE);
    setfillstyle(LINE_FILL,BROWN);
    floodfill(240+i,648,BLUE);
    
    //windmill base
    setcolor(BLACK);
    rectangle(148,200,159,430);
    rectangle(550,200,559,430);
    rectangle(353,200,362,430);
    rectangle(1306,200,1315,430);
    rectangle(1503,200,1512,430);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(149,201,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(552,403,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(354,403,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(1504,403,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(1307,403,BLACK);
    setcolor(WHITE);
    fan(150,200,i);
    fan(151,200,i);
    fan(152,200,i);
    fan(153,200,i);
    fan(154,200,i);
    fan(155,200,i);
    fan(355,200,i);
    fan(356,200,i);
    fan(358,200,i);
    fan(357,200,i);
    fan(359,200,i);
    fan(360,200,i);
    fan(552,200,i);
    fan(553,200,i);
    fan(554,200,i);
    fan(555,200,i);
    fan(556,200,i); 
    fan(557,200,i);
    fan(1308,200,i);
    fan(1309,200,i);
    fan(1310,200,i);
    fan(1311,200,i);
    fan(1312,200,i);
    fan(1505,200,i);
    fan(1506,200,i);
    fan(1507,200,i);
    fan(1508,200,i); 
    fan(1509,200,i);
    //balloon
    setcolor(YELLOW);
    circle(1250,400-i,40);
    setcolor(WHITE);
    line(1250,440-i,1298,558-i);
    setcolor(YELLOW);
    circle(1300,440-i,22);
    setcolor(WHITE);
    line(1300,463-i,1300,558-i);
    //balloon color
    setfillstyle(INTERLEAVE_FILL,BLUE   );
    floodfill(1250,400+30-i,YELLOW);
    setfillstyle(INTERLEAVE_FILL,WHITE);
    floodfill(1300,440+20-i,YELLOW);
    delay(10);

    page=1-page;
    }
    }
    getch();
}    