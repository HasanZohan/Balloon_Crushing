# include "iGraphics.h"

int b1x=10;
int b1y=200;

int b2x=170;
int b2y=130;

int b3x=270;
int b3y=320;

int b4x=430;
int b4y=370;

int b5x=530;
int b5y=100;

int b6x=630;
int b6y=400;

int b7x=110;
int b7y=-550;

int b8x=730;
int b8y=-440;

int b9x=370;
int b9y=400;

int bs1x=200;
int bs1y=-360;

int bs2x=500;
int bs2y=-360;

int gunx;
int guny;
int gun=0;

int score=0;
char scoreText[30];    //because test is a charecter

int play=0;    //modified

void iDraw()
{
	iClear();

	if(play==0)
	{
		iShowBMP(0,0,"white.bmp");

		iShowBMP(200,500,"bs1.bmp");

		iShowBMP(200,200,"bs2.bmp");

		iSetColor(0,0,255);
		iText(310,500,"Shoot for bonus 5 ",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(255,0,0);
		iText(310,200,"Avoid...Else -5 ",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(0,0,0);
		iText(450,50,"Press (s) for balloon crushing... ",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if(play==1)
	{
		iShowBMP(0,0,"white.bmp");


		iShowBMP(b1x,b1y,"b1.bmp");

		iShowBMP(b2x,b2y,"b2.bmp");

		iShowBMP(b3x,b3y,"b3.bmp");

		iShowBMP(b4x,b4y,"b4.bmp");

		iShowBMP(b5x,b5y,"b5.bmp");

		iShowBMP(b6x,b6y,"b6.bmp");

		iShowBMP(b7x,b7y,"b7.bmp");

		iShowBMP(b8x,b8y,"b8.bmp");

		iShowBMP(b9x,b9y,"b9.bmp");

		iShowBMP(bs1x,bs1y,"bs1.bmp");

		iShowBMP(bs2x,bs2y,"bs2.bmp");

		

		iSetColor(0,0,0);
		
		iText(670,780,"SCORE: ",GLUT_BITMAP_TIMES_ROMAN_24);

		itoa(score,scoreText,10);
		iText(760,780,scoreText,GLUT_BITMAP_TIMES_ROMAN_24);


		//gun drawing
		if(gun==1)
		{
			iSetColor(0,0,0);
			iFilledCircle(gunx,guny,20);
			gun=0;
		}
		
	}
	
}

void iMouseMove(int mx, int my)
{
	//place your codes here

}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >=b1x && mx <=b1x+100 && my >=b1y && my <=b1y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b1y=-500;
			score++;
		}

		if(mx >=b2x && mx <=b2x+100 && my >=b2y && my <=b2y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b2y=-500;
			score++;
		}

		if(mx >=b3x && mx <=b3x+100 && my >=b3y && my <=b3y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b3y=-500;
			score++;
		}

		if(mx >=b4x && mx <=b4x+100 && my >=b4y && my <=b4y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b4y=-500;
			score++;
		}

		if(mx >=b5x && mx <=b5x+100 && my >=b5y && my <=b5y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b5y=-500;
			score++;
		}

		if(mx >=b6x && mx <=b6x+100 && my >=b6y && my <=b6y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b6y=-500;
			score++;
		}

		if(mx >=b7x && mx <=b7x+60 && my >=b7y && my <=b7y+100)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b7y=-500;
			score++;
		}

		if(mx >=b8x && mx <=b8x+60 && my >=b8y && my <=b8y+100)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b8y=-500;
			score++;
		}

		if(mx >=b9x && mx <=b9x+60 && my >=b1y && my <=b9y+180)
		{
			gunx=mx;
			guny=my;
			gun=1;
			b9y=-500;
			score++;
		}

		if(mx >=bs1x && mx <=bs1x+100 && my >=bs1y && my <=bs1y+200)
		{
			gunx=mx;
			guny=my;
			gun=1;
			bs1y=-2000;
			score+=5;
		}

		if(mx >=bs2x && mx <=bs2x+100 && my >=bs2y && my <=bs2y+200)
		{
			gunx=mx;
			guny=my;
			gun=1;
			bs2y=-1500;
			score-=5;
		}
				
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 's')
	{
		play=1;
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}
void balloonmove()
{
	if(play==1)
	{
		b1y+=7;
		if(b1y>=810)
		{
			b1y=-100;
		}

		b2y+=9;
		if(b2y>=910)
		{
			b2y=-150;
		}

		b3y+=8;
		if(b3y>=810)
		{
			b3y=0;
		}

		b4y+=9;
		if(b4y>=810)
		{
			b4y=0;
		}

		b5y+=7;
		if(b5y>=1010)
		{
			b5y=0;
		}

		b6y+=9;
		if(b6y>=810)
		{
			b6y=-250;
		}

		b7y+=8;
		if(b7y>=910)
		{
			b7y=-50;
		}

		b8y+=9;
		if(b8y>=810)
		{
			b8y=-40;
		}

		b9y+=10;
		if(b9y>=2000)
		{
			b9y=-40;
		}
	}
	
}

void specialballoonmove()
{
	if(play==1)
	{
		bs1y+=10;
		if(bs1y>=5000)
		{
			bs1y=-360;
		}

		bs2y+=8;
		if(bs2y>=4000)
		{
			bs2y=-360;
		}
	}
	
}

int main()
{
	//place your own initialization codes here. 
	iSetTimer(1,specialballoonmove);
	iSetTimer(1,balloonmove);

	srand(time(NULL));
	PlaySound("music\\bground",NULL,SND_LOOP | SND_ASYNC);

	iInitialize(800, 800, "Balloon Crushing");
	return 0;
}