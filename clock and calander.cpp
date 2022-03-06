# include "iGraphics.h"
#include<time.h>
time_t current=time(NULL);
int c1=current%3600,c2=c1/10,c3=c1/60,c4=c1/600,c5=(current/3600)+6; /* In my pc,
																	 the timer return UTC time;
																	 to set current time of bd,
																	 I have added 6*/

char str[10], str2[2],stm[10],std[10],stp[31],sts[3];
int len;
int len2;
int mode;
int i;
int y;
int m;
int q=1;
int h;
int posx;
int posy;
int day;
int p;

void drawTextBox()
{
	iSetColor(255, 2, 200);
	iRectangle(700,500, 50, 30);
	iRectangle(790,500, 30, 30);
}

void p10()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iRectangle(500, 200, 50, 100);
}
void p11()
{
		iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
}
void p12()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 500,200);
	iLine(500, 200, 500,250);
	iLine(500, 250, 550,250);
	iLine(550,300, 550,250);
	iLine(550,300, 500,300);
}
void p13()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
}
void p14()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
	iLine(500, 300, 500,250);
	iLine(500, 250, 550,250);
}
void p15()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 500,200);
	iLine(500, 300, 500,250);
	iLine(500, 250, 550,250);
	iLine(550,200, 550,250);
	iLine(550,300, 500,300);
}
void p16()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 500,200);
	iLine(500, 200, 500,300);
	iLine(500, 250, 550,250);
	iLine(550,200, 550,250);
	iLine(550,300, 500,300);
}
void p17()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
	iLine(550,300, 500,300);
}
void p18()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
}
void p19()
{
	iSetColor(0,0,0);
	iLine(550, 200, 550,300);
	iLine(500, 200, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
	iSetColor(0,0,200);
	iLine(550, 200, 550,300);
	iLine(500, 250, 500,300);
	iLine(500, 200, 550,200);
	iLine(500, 250, 550,250);
	iLine(550,300, 500,300);
}



void p20()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iRectangle(440, 200, 50, 100);
}
void p21()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iLine(490, 200, 490,300);
}
void p22()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iLine(490, 200, 440,200);
	iLine(440, 200, 440,250);
	iLine(440, 250, 490,250);
	iLine(490,300, 490,250);
	iLine(490,300, 440,300);
}
void p23()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iLine(490, 200, 490,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
}
void p24()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iLine(490, 200, 490,300);
	iLine(440, 300, 440,250);
	iLine(440, 250, 490,250);
}
void p25()
{
	iSetColor(0,0,0);
	iLine(490, 200, 490,300);
	iLine(440, 200, 440,300);
	iLine(440, 200, 490,200);
	iLine(440, 250, 490,250);
	iLine(490,300, 440,300);
	iSetColor(0,0,200);
	iLine(490, 200, 440,200);
	iLine(440, 300, 440,250);
	iLine(440, 250, 490,250);
	iLine(490,200, 490,250);
	iLine(490,300, 440,300);
}


void p30()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iRectangle(370, 200, 50, 100);
}
void p31()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
}
void p32()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 370,200);
	iLine(370, 200, 370,250);
	iLine(370, 250, 420,250);
	iLine(420,300, 420,250);
	iLine(420,300, 370,300);
}
void p33()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
}
void p34()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
	iLine(370, 300, 370,250);
	iLine(370, 250, 420,250);
}
void p35()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 370,200);
	iLine(370, 300, 370,250);
	iLine(370, 250, 420,250);
	iLine(420,200, 420,250);
	iLine(420,300, 370,300);
}
void p36()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 370,200);
	iLine(370, 200, 370,300);
	iLine(370, 250, 420,250);
	iLine(420,200, 420,250);
	iLine(420,300, 370,300);
}
void p37()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
	iLine(420,300, 370,300);
}
void p38()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
}
void p39()
{
	iSetColor(0,0,0);
	iLine(420, 200, 420,300);
	iLine(370, 200, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
	iSetColor(0,0,200);
	iLine(420, 200, 420,300);
	iLine(370, 250, 370,300);
	iLine(370, 200, 420,200);
	iLine(370, 250, 420,250);
	iLine(420,300, 370,300);
}


void p40()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iRectangle(310, 200, 50, 100);
}
void p41()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iLine(360, 200, 360,300);
}
void p42()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iLine(360, 200, 310,200);
	iLine(310, 200, 310,250);
	iLine(310, 250, 360,250);
	iLine(360,300, 360,250);
	iLine(360,300, 310,300);
}
void p43()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iLine(360, 200, 360,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
}
void p44()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iLine(360, 200, 360,300);
	iLine(310, 300, 310,250);
	iLine(310, 250, 360,250);
}
void p45()
{
	iSetColor(0,0,0);
	iLine(360, 200, 360,300);
	iLine(310, 200, 310,300);
	iLine(310, 200, 360,200);
	iLine(310, 250, 360,250);
	iLine(360,300, 310,300);
	iSetColor(0,0,200);
	iLine(360, 200, 310,200);
	iLine(310, 300, 310,250);
	iLine(310, 250, 360,250);
	iLine(360,200, 360,250);
	iLine(360,300, 310,300);
}



void p50()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iRectangle(240, 200, 50, 100);
}
void p51()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
}
void p52()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 240,200);
	iLine(240, 200, 240,250);
	iLine(240, 250, 290,250);
	iLine(290,300, 290,250);
	iLine(290,300, 240,300);
}
void p53()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
}
void p54()
{   iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
	iLine(240, 300, 240,250);
	iLine(240, 250, 290,250);
}
void p55()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 240,200);
	iLine(240, 300, 240,250);
	iLine(240, 250, 290,250);
	iLine(290,200, 290,250);
	iLine(290,300, 240,300);
}
void p56()
{
    iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);	
	iLine(290, 200, 240,200);
	iLine(240, 200, 240,300);
	iLine(240, 250, 290,250);
	iLine(290,200, 290,250);
	iLine(290,300, 240,300);
}
void p57()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
	iLine(290,300, 240,300);
}
void p58()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
}
void p59()
{
	iSetColor(0,0,0);
	iLine(290, 200, 290,300);
	iLine(240, 200, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
	iSetColor(0,0,200);
	iLine(290, 200, 290,300);
	iLine(240, 250, 240,300);
	iLine(240, 200, 290,200);
	iLine(240, 250, 290,250);
	iLine(290,300, 240,300);
}



void p60()
{
	iSetColor(0,0,0);
	iLine(230, 200, 230,300);
	iLine(180, 200, 180,300);
	iLine(180, 200, 230,200);
	iLine(180, 250, 230,250);
	iLine(230,300, 180,300);
	iSetColor(0,0,200);
	iRectangle(180, 200, 50, 100);
}
void p61()
{
	iSetColor(0,0,0);
	iLine(230, 200, 230,300);
	iLine(180, 200, 180,300);
	iLine(180, 200, 230,200);
	iLine(180, 250, 230,250);
	iLine(230,300, 180,300);
	iSetColor(0,0,200);
	iLine(230, 200, 230,300);
}
void p62()
{
	iSetColor(0,0,0);
	iLine(230, 200, 230,300);
	iLine(180, 200, 180,300);
	iLine(180, 200, 230,200);
	iLine(180, 250, 230,250);
	iLine(230,300, 180,300);
	iSetColor(0,0,200);
	iLine(230, 200, 180,200);
	iLine(180, 200, 180,250);
	iLine(180, 250, 230,250);
	iLine(230,300, 230,250);
	iLine(230,300, 180,300);
}




void iDraw()
{
	iSetColor(0,0,200);
	iPoint(430, 210,3);
	iPoint(430, 290,3);
	iPoint(300, 290,3);
	iPoint(300, 210,3);

	if(c1%10==0)
	p10();
	if(c1%10==1)
	p11();
	if(c1%10==2)
	p12();
	if(c1%10==3)
	p13();
	if(c1%10==4)
	p14();
	if(c1%10==5)
	p15();
	if(c1%10==6)
	p16();
	if(c1%10==7)
	p17();
	if(c1%10==8)
	p18();
	if(c1%10==9)
	p19();

	if(c2%6==0)
	p20();
	if(c2%6==1)
	p21();
	if(c2%6==2)
	p22();
	if(c2%6==3)
	p23();
	if(c2%6==4)
	p24();
	if(c2%6==5)
	p25();

	if(c3%10==0)
	p30();
	if(c3%10==1)
	p31();
	if(c3%10==2)
	p32();
	if(c3%10==3)
	p33();
	if(c3%10==4)
	p34();
	if(c3%10==5)
	p35();
	if(c3%10==6)
	p36();
	if(c3%10==7)
	p37();
	if(c3%10==8)
	p38();
	if(c3%10==9)
	p39();

	
	if(c4%6==0)
	p40();
	if(c4%6==1)
	p41();
	if(c4%6==2)
	p42();
	if(c4%6==3)
	p43();
	if(c4%6==4)
	p44();
	if(c4%6==5)
	p45();


	if((c5%24)%10==0)
	p50();
	if((c5%24)%10==1)
	p51();
	if((c5%24)%10==2)
	p52();
	if((c5%24)%10==3)
	p53();
	if((c5%24)%10==4)
	p54();
	if((c5%24)%10==5)
	p55();
	if((c5%24)%10==6)
	p56();
	if((c5%24)%10==7)
	p57();
	if((c5%24)%10==8)
	p58();
	if((c5%24)%10==9)
	p59();


	if((c5%24)/10==0)
	p60();
	if((c5%24)/10==1)
	p61();
	if((c5%24)/10==2)
	p62();


	
	drawTextBox();
	if(mode == 1)
	{
		iSetColor(0, 0, 0);
		iFilledRectangle(700, 500, 50, 30);
		drawTextBox();
		iSetColor(0, 0, 200);
		iText(700, 515, str);
	}
	if(mode == 2)
	{
		iSetColor(0, 0, 0);
		iFilledRectangle(790, 500, 30, 30);
		drawTextBox();
		iSetColor(0, 0, 255);
		iText(790, 515, str2);
	}

	iText(700, 540, "Year");
	iText(760, 540, "Month(1-12)");
	iSetColor(100, 0, 200);
	iText(660, 580, "**CLICK ON THE BOX TO ENTER**",GLUT_BITMAP_8_BY_13);
	iText(680, 560, "**PRESS ENTER TO ESCAPE**",GLUT_BITMAP_8_BY_13);
	iText(220, 320, "DIGITAL CLOCK(24-hr Format)",GLUT_BITMAP_9_BY_15);
	if(len!=0&&len2!=0&&mode==0)
	{
		iSetColor(255, 2, 200);
		iRectangle(600,50, 350,350);
		iLine(750, 50, 750, 400);
		iLine(800, 50, 800, 400);
		iLine(850, 50 ,850,400);
		iLine(900, 50,900, 400);
		iLine(650, 50, 650, 400);
		iLine(700, 50, 700, 400);


		iLine(600, 100, 950, 100);
		iLine(600, 150, 950, 150);
		iLine(600, 200, 950, 200);
		iLine(600, 250, 950, 250);
		iLine(600, 300, 950, 300);
		iLine(600, 350, 950, 350);
		if(m==1)
        strcpy(stm,"January  ");
    else if(m==2)
        strcpy(stm,"February  ");
    else if(m==3)
        strcpy(stm,"March  ");
    else if(m==4)
        strcpy(stm,"April  ");
    else if(m==5)
        strcpy(stm,"May  ");
    else if(m==6)
        strcpy(stm,"June  ");
    else if(m==7)
        strcpy(stm,"July  ");
    else if(m==8)
        strcpy(stm,"August  ");
    else if(m==9)
        strcpy(stm,"September  ");
    else if(m==10)
        strcpy(stm,"October  ");
    else if(m==11)
        strcpy(stm,"November  ");
    else if(m==12)
        strcpy(stm,"December  ");
		iText(600, 450, "Calender For:",GLUT_BITMAP_9_BY_15);
		iText(600, 420, stm,GLUT_BITMAP_8_BY_13);
		iText(680, 420, str,GLUT_BITMAP_8_BY_13);

		posx=605;
		posy=370;
		for(i=0;i<7;i++)
		{
			if(i==0)
			   strcpy(std,"Sat");
			else if(i==1)
			   strcpy(std,"Sun");
			else if(i==2)
				strcpy(std,"Mon");
			else if(i==3)
				strcpy(std,"Tue");
			else if(i==4)
				strcpy(std,"Wed");
			else if(i==5)
				strcpy(std,"Thu");
			else if(i==6)
				strcpy(std,"Fri");
			iSetColor(255, 0, 255);
			iText(posx, posy, std,GLUT_BITMAP_8_BY_13);
			posx=posx+50;

		}
		if(m==1)
			day=31;
		if(m==2)
		{
			if(y%400==0||((y%4==0)&&(y%100!=0)))
				day=29;
			else
				day=28;
		}
		if(m==3)
			day=31;
		if(m==4)
			day=30;
		if(m==5)
			day=31;
		if(m==6)
			day=30;
		if(m==7)
			day=31;
		if(m==8)
			day=31;
		if(m==9)
			day=30;
		if(m==10)
			day=31;
		if(m==11)
			day=30;
		if(m==12)
			day=31;

		if(m==1||m==2)
		{
			m=m+12;
			y--;
		}
		h=(q+((26*(m+1))/10)+y+(y/4)+(6*(y/100))+(y/400))%7;
		posy=320;
		posx=610+(h*50);

		for(i=1;i<=day;i++)
		{
			iSetColor(0, 100, 200);
			if(i==1)
				strcpy(stp,"1");
			else if(i==2)
				strcpy(stp,"2");
			else if(i==3)
				strcpy(stp,"3");
			else if(i==4)
				strcpy(stp,"4");
			else if(i==5)
				strcpy(stp,"5");
			else if(i==6)
				strcpy(stp,"6");
			else if(i==7)
				strcpy(stp,"7");
			else if(i==8)
				strcpy(stp,"8");
			else if(i==9)
				strcpy(stp,"9");
			else if(i==10)
				strcpy(stp,"10");
			else if(i==11)
				strcpy(stp,"11");
			else if(i==12)
				strcpy(stp,"12");
			else if(i==13)
				strcpy(stp,"13");
			else if(i==14)
				strcpy(stp,"14");
			else if(i==15)
				strcpy(stp,"15");
			else if(i==16)
				strcpy(stp,"16");
			else if(i==17)
				strcpy(stp,"17");
			else if(i==18)
				strcpy(stp,"18");
			else if(i==19)
				strcpy(stp,"19");
			else if(i==20)
				strcpy(stp,"20");
			else if(i==21)
				strcpy(stp,"21");
			else if(i==22)
				strcpy(stp,"22");
			else if(i==23)
				strcpy(stp,"23");
			else if(i==24)
				strcpy(stp,"24");
			else if(i==25)
				strcpy(stp,"25");
			else if(i==26)
				strcpy(stp,"26");
			else if(i==27)
				strcpy(stp,"27");
			else if(i==28)
				strcpy(stp,"28");
			else if(i==29)
				strcpy(stp,"29");
			else if(i==30)
				strcpy(stp,"30");
			else if(i==31)
				strcpy(stp,"31");

			iText(posx, posy, stp,GLUT_BITMAP_8_BY_13);
			posx=posx+50;
			if(posx>950)
			{
				posx=610;
				posy=posy-50;
			}
		}
		if(str[0]=='-'||m>14||(m>12&&(stm[0]!='J'&&stm[0]!='F'))||m==0)
		{	iSetColor(0, 0, 0);
			iFilledRectangle(599,20, 500,460);
			iSetColor(100, 0, 200);
			iText(700, 400, "**PLEASE ENTER VALID INPUT**",GLUT_BITMAP_9_BY_15);

		}





	}
	else
	{
		iSetColor(0, 0, 0);
		iFilledRectangle(599,20, 500,460);
			m=p;
			stm[0]=0;
		
	}





}

void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >= 700 && mx <= 750 && my >= 500 && my <= 530 && mode == 0)
		{
				mode = 1;
			for(i=0;i<len;i++)
				str[i]=0;
			len = 0;
		}
		if(mx >= 790 && mx <= 820 && my >= 500 && my <= 530 && mode == 0)
		{
				mode = 2;
			for(i=0;i<len2;i++)
				str2[i]=0;
			len2 = 0;
		}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}


void iKeyboard(unsigned char key)
{
	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode=0;
			y=0;
			for(i=0;i<len;i++)
			{
				 y=(y*10)+(str[i]%48);
			}
		}
		else
		{
			if(key == '\b')
			{
				str[len-1]=0;
				len--;
			}
			else
			{
			str[len] = key;
			len++;
			}
		}
	}
	if(mode == 2)
	{
        if(key == '\r')
		{
			mode=0;
			p=0;
			for(i=0;i<len2;i++)
			{
				 p=(p*10)+(str2[i]%48);
			}
			m=p;
	
		}
		else
		{
			if(key == '\b')
			{
				str2[len2-1]=0;
				len2--;
			}
			else
			{
			str2[len2] = key;
			len2++;
			}
		}
	}

}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

}


void f1(void){
	c1++;
	if(c1%10==0)
		c2++;
	if(c1%60==0)
		c3++;
	if(c1%600==0)
		c4++;
	if(c1%3600==0)
		c5++;

}


int main() {
	iSetTimer(1000,f1);
	mode = 0;

	iInitialize(1000, 600, "Digital Clock & Calander");
	return 0;
}





