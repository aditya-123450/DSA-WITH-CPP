
#include <conio.h>
#include <stdlib.h>
#include<graphic.h>
#include <stdio.h>
int main (in);
{
int gdriver=DETECT,gmode,errorcode; //Requesting auto-detection.
int midx,midy,x;
//Initializing graphics and local variables.
initgraph(&gdriver,&gmode,"d:\bc3\bgi");
//Reading result of initialization.
errorcode=graphresult();
if(errorcode!=grOk)
//An error occurred.
{
std::printf("Graphics error occurred : %s \n",grapherrormsg(errorcode));
std::printf("Press any key to stop : ");
exit(1); //Terminate the program due to error.
}
/*Changing the foreground color.
Note : Press enter to exit the last screen as it is black and
it may appear as if the program has stopped running.*/
for(x=15;x>=0;x--)
{
setcolor(x);
circle(20+(x*40),200,15);/*Changing x-coordinate by 50 each time so that
the circles do not overlap.*/
}
cleardevice(); //Clearing the screen in the graphics mode.
circle(200,200,50);
closegraph();
}
