#include<graphics.h>
#include<iostream>
#include<math.h>
#include<ctime>
#include<conio.h>
#define PI 3.1415
using namespace std;
 int main(){
 	int gd=DETECT,gm,i;
    initgraph(&gd,&gm,(char*)"C:\\TURBOC2\\BGI");
 	initwindow(500,500,"ANALOG CLOCK");
 	int page=0;
	 while(1){
	 	setactivepage(page);
	 	setactivepage(1-page);
	    cleardevice();
	 	setcolor(WHITE);
 	circle(250,250,200);
 	circle(250,250,5);
 	outtextxy(250+180*sin(PI/6)-5,250-180*cos(PI/6),(char*)"1");
 	outtextxy(250+180*sin(2*PI/6)-5,250-180*cos(2*PI/6),(char*)"2");
 	outtextxy(250+180*sin(3*PI/6)-5,250-180*cos(3*PI/6),(char*)"3");
 	outtextxy(250+180*sin(4*PI/6)-5,250-180*cos(4*PI/6),(char*)"4");
 	outtextxy(250+180*sin(5*PI/6)-5,250-180*cos(5*PI/6),(char*)"5");
 	outtextxy(250+180*sin(6*PI/6)-5,250-180*cos(6*PI/6),(char*)"6");
 	outtextxy(250+180*sin(7*PI/6)-5,250-180*cos(7*PI/6),(char*)"7");
 	outtextxy(250+180*sin(8*PI/6)-5,250-180*cos(8*PI/6),(char*)"8");
 	outtextxy(250+180*sin(9*PI/6)-5,250-180*cos(9*PI/6),(char*)"9");
 	outtextxy(250+180*sin(10*PI/6)-5,250-180*cos(10*PI/6),(char*)"10");
 	outtextxy(250+180*sin(11*PI/6)-5,250-180*cos(11*PI/6),(char*)"11");
 	outtextxy(250+180*sin(12*PI/6)-5,250-180*cos(12*PI/6),(char*)"12");
 	
 	time_t now = time(0);
 	tm*ltm = localtime(&now);
 	system("cls");
 	cout<<ltm->tm_hour<<" "<<ltm->tm_min;
 	
// 	Hour Hand
 	setcolor(RED);
 	line(250,250,250+150*sin(ltm->tm_hour*(PI/6)),250-150*cos(ltm->tm_hour*(PI/6)));
 	
// 	Minute Hand
    setcolor(GREEN);
    line(250,250,250+170*sin(ltm->tm_min*(PI/30)),250-170*cos(ltm->tm_min*(PI/30)));
    
//    Second Hand
    setcolor(WHITE);
    line(250,251,251+150*sin(ltm->tm_sec*(PI/30)),250-150*cos(ltm->tm_sec*(PI/30)));
    
    if(GetAsyncKeyState(VK_RETURN))
      break;
      delay(10);
      page = 1-page;
    
	 }
 		
		 
		 
		 
//		 circle(250,250,200);
// 		circle(250,250,5);
	 
	 getch();
	 closegraph();
	 return 0;
}

