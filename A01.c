#include <stdio.h>
int main()
{
   double dis, yang;
   double mpg, lplook;
   scanf("%lf %lf", &dis,&yang);
   mpg=dis/yang;
   lplook=yang*3.785/(dis*1.609)*100.0;
   printf("%.1lf mpg or %.1lf liters / 100Km.\n", mpg, lplook);
}
