
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());

   /* draw a diagonal line */
   line(150,100,100,200);
   line(100,200,200,200);
   line(200,200,150,100);
   line(100,125,200,125);
   line(100,125,150,225);
   line(150,225,200,125);
   /* clean up */
   getch();
   closegraph();
   return 0;
}

