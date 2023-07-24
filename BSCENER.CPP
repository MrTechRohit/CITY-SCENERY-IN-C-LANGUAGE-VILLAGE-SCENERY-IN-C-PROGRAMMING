//_____/_____ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____\________//

//---------------------- C++ PROGRAM TO DRAW SCENERY -----------------\\
/*________________________________________________________________________*/


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

//_______GRASS
setfillstyle(1,10);
floodfill(20,295,15);

//______FLOWERS
setfillstyle(1,2);
line(350,470,390,470);
line(350,470,340,445);
line(340,445,360,470);
line(360,470,370,435);
line(370,435,372,470);
line(372,470,400,440);
line(400,440,390,470);
floodfill(351,465,15);
floodfill(366,468,15);
floodfill(395,450,15);

setfillstyle(1,13);
line(362,470,352,430);
circle(350,420,8);
line(360,460,330,425);
circle(327,418,9);
floodfill(351,421,15);
floodfill(328,419,15);

line(372,470,380,420);
line(372,470,390,430);
circle(380,413,8);
circle(394,425,6);
floodfill(381,415,15);
floodfill(395,426,15);

//.....STONE
setfillstyle(1,8);
ellipse(300,490,0,180,15,35);
floodfill(309,479,15);

setfillstyle(1,8);
ellipse(320,490,0,135,18,47);
floodfill(323,479,15);

setfillstyle(1,7);
ellipse(299,463,26,202,15,30);
floodfill(310,450,15);

//------LAKE
setfillstyle(1,1);
arc(600,470,60,50,175);
floodfill(601,472,15);


//_________BOAT___________//
setfillstyle(1,6);
line(500,380,590,380);
line(510,400,580,400);
line(500,380,510,400);
line(590,380,580,400);
floodfill(511,382,15);


//..........BOAT FLAG ..........
setfillstyle(1,4);
line(520,380,520,340);
line(520,340,550,370);
line(550,370,520,370);
floodfill(523,365,WHITE);

//,,,,,,,,WALL,,,,,,,,
line(0,430,70,430);
line(80,430,170,430);
line(180,430,270,430);
line(0,450,70,450);
line(80,450,170,450);
line(180,450,270,450);
line(20,410,20,480);
line(48,410,48,480);
line(148,410,148,480);
line(125,410,125,480);
line(100,410,100,480);
line(200,410,200,480);
line(225,410,225,480);
line(250,410,250,480);

// 1 TREE
setfillstyle(1,6);
rectangle(70,390,80,480);
floodfill(72,395,15);

setfillstyle(9,2);
circle(75,350,40);
floodfill(76,351,15);


// 2 TREE
setfillstyle(1,6);
rectangle(170,390,180,480);
floodfill(171,395,15);

setfillstyle(9,2);
circle(173,350,40);
floodfill(174,351,15);


// 3 TREE
setfillstyle(1,6);
rectangle(270,390,280,480);
floodfill(273,394,15);

setfillstyle(9,2);
line(240,390,310,390);
line(240,390,253,370);
line(310,390,293,370);
line(293,370,310,370);
line(253,370,235,370);
line(235,370,252,350);
line(310,370,295,350);
line(295,350,310,350);
line(252,350,235,350);
line(235,350,272,310);
line(272,310,310,350);
floodfill(255,389,15);

//----- PARK CHAIR
setfillstyle(2,6);
rectangle(360,330,410,350);
floodfill(361,331,15);

setfillstyle(2,6);
line(360,350,345,360);
line(345,360,397,360);
line(397,360,410,350);
floodfill(398,358,15);

setfillstyle(1,6);
rectangle(352,360,355,375);
rectangle(360,360,363,367);
rectangle(389,360,392,375);
rectangle(407,353,410,368);
floodfill(353,365,15);
floodfill(390,366,15);
floodfill(408,357,15);
floodfill(361,362,15);

//________ROAD
setfillstyle(1,8);
line(0,200,690,200);
line(0,290,690,290);
floodfill(10,215,15);
rectangle(30,242,85,244);
rectangle(145,242,195,244);
rectangle(255,242,305,244);
rectangle(370,242,420,244);
rectangle(480,242,530,244);
rectangle(590,242,630,244);

//---- Light1
setfillstyle(1,4);
rectangle(118,290,120,230);
floodfill(119,240,15);

setfillstyle(1,14);
circle(119,223,6);
floodfill(120,224,15);

//------ Light 2
setfillstyle(1,4);
rectangle(334,290,336,230);
floodfill(335,250,15);

setfillstyle(1,14);
circle(335,223,6);
floodfill(336,224,15);


//........Light3
setfillstyle(1,4);
rectangle(540,290,542,230);
floodfill(541,260,15);

setfillstyle(1,14);
circle(541,223,6);
floodfill(542,224,15);

//_______Light 4
setfillstyle(1,4);
rectangle(200,200,202,150);
floodfill(201,160,15);

setfillstyle(1,14);
circle(201,144,6);
floodfill(201,145,15);

//__________Light 5
setfillstyle(1,4);
rectangle(437,200,439,150);
floodfill(438,160,15);

setfillstyle(1,14);
circle(438,144,6);
floodfill(439,145,15);

//______HOUSES_______//

//---------1th HOUSE----------//
setfillstyle(1,9);
line(20,200,20,90);
line(20,90,90,90);
line(90,90,90,200);
floodfill(23,198,15);
line(20,169,90,169);
line(20,128,90,128);

//___1th HOUSE windows
setfillstyle(9,4);
rectangle(30,180,39,190);
rectangle(49,180,58,190);
rectangle(66,180,75,190);

rectangle(30,145,39,155);
rectangle(49,145,58,155);
rectangle(66,145,75,155);

rectangle(30,105,39,115);
rectangle(49,105,58,115) ;
rectangle(66,105,75,115);

floodfill(31,181,15);
floodfill(50,181,15);
floodfill(67,181,15);
floodfill(31,146,15);
floodfill(50,146,15);
floodfill(67,146,15);
floodfill(31,106,15);
floodfill(50,106,15);
floodfill(67,106,15);

setfillstyle(1,12);
rectangle(20,80,90,90);
rectangle(30,70,80,80);
rectangle(40,60,70,70);
rectangle(50,50,60,60);
floodfill(27,81,15);
floodfill(32,71,15);
floodfill(42,61,15);
floodfill(51,51,15);

//________House no.2
setfillstyle(1,4);
line(90,100,150,100);
line(150,100,150,200);
floodfill(91,120,15);

//____House 2 windows
setfillstyle(1,3);
line(90,153,150,153);
line(90,156,150,156);
floodfill(92,154,15);

setfillstyle(2,8);
rectangle(98,170,113,185);
floodfill(99,171,15);
setfillstyle(2,8);
rectangle(121,170,137,185);
floodfill(122,171,15);

setfillstyle(2,8);
rectangle(98,118,113,132);
floodfill(99,119,15);
setfillstyle(2,8);
rectangle(121,118,137,132);
floodfill(122,119,15);

//HOUSE 3
setfillstyle(1,14);
line(520,200,520,80);
line(520,80,590,80);
line(590,80,590,200);
floodfill(521,90,15);

// HOUSE 3 Windows
line(520,160,590,160);
setfillstyle(1,1);
rectangle(530,170,540,185);
floodfill(531,172,15);

setfillstyle(1,1);
rectangle(560,165,580,200);
floodfill(561,166,15);

line(520,120,590,120);
setfillstyle(1,1);
rectangle(530,135,540,148);
floodfill(531,136,15);

setfillstyle(1,1);
rectangle(550,135,560,148);
floodfill(551,136,15);

setfillstyle(1,1);
rectangle(570,135,580,148);
floodfill(571,136,15);

setfillstyle(1,1);
rectangle(530,90,540,103);
floodfill(531,91,15);

setfillstyle(1,1);
rectangle(550,90,560,103);
floodfill(551,91,15);

setfillstyle(1,1);
rectangle(570,90,580,103);
floodfill(571,91,15);

// Text (Banner)
setfillstyle(1,15);
rectangle(360,170,362,200);
floodfill(361,173,15);

setfillstyle(1,15);
rectangle(400,170,402,200);
floodfill(401,171,15);

setfillstyle(1,1);
rectangle(340,130,420,170);
floodfill(341,131,15);

outtextxy(350,135,"ROHIT");
outtextxy(353,148,"TECH");
outtextxy(350,159,"STUDY");

//_________ Mountain 1
setcolor(15);
setfillstyle(1,7);
line(0,200,20,180);
floodfill(5,199,15);

setfillstyle(1,7);
line(90,100,130,60);
line(130,60,290,200);
floodfill(153,198,15);

//________Mountain 2
setfillstyle(1,10);
line(271,183,380,70);
line(380,70,520,200);
floodfill(500,195,15);

//______Sky
setfillstyle(1,3);
floodfill(0,170,15);

//______Clouds
ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);

ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);

//______SUN______///
setfillstyle(1,14);
circle(323,40,25);
floodfill(311,51,15);

getch();
closegraph();
return 0;
}


/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/
