#include <stdio.h>
int main(void)
{
   int x=12;
   int y;
   y= x & -x;
   printf("y=%d\n",y);
   printf ("Hello from your first program!\n");
   system("echo `date` >> /tmp/mylog");
   system("echo hello >> /tmp/mylog");
   printf ("Test for Jenkins\n" );
   return 0;
}
