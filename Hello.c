#include <stdio.h>
int main(void)
{
   int x=12;
   int y;
   y= x & -x;
   printf("y=%d\n",y);
   printf ("Hi..Hello from your first program!\n");
   printf("2\n");
   system("echo `date` >> /tmp/mylog");
   system("echo  Hi... >> /tmp/mylog");
   printf ("Test for Jenkins\n" );
   return 0;
}
