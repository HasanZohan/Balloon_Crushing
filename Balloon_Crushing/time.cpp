#include <stdafx.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main(){
	int milliseconds=0,minutes=0,seconds=0,hours=0;
	char s;
	scanf("%c",&s);
	for(;;)
	{
		if(milliseconds==10)
		{
			++seconds;
			milliseconds=0;
		}
		if(seconds==60)
		{
			++minutes;
			seconds=0;
		}
		if(minutes==60)
		{
			++hours;
			minutes=0;
		}
		printf("%d :  %d :  %d . %d ",hours,minutes,seconds,milliseconds);
		++milliseconds;
		Sleep(300);
	}
	return 0;
}