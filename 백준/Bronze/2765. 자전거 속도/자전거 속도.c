#include <stdio.h>

#define PI 3.1415927
#define FEET 12
#define MILE 5280
#define MINUTE 60
#define HOUR 60

int main()
{
   double   diameter;
   int      rotation;
   double   seconds;
   double   distance;
   double   mph;
   int      i;
   
   i = 1;
   while (1)
   {
       scanf("%lf %d %lf", &diameter, &rotation, &seconds);
       if (rotation == 0)
       {
            break;
       }
       distance = diameter * rotation * PI / FEET / MILE;
       mph = distance / (seconds / MINUTE / HOUR);
       printf("Trip #%d: %.2lf %.2lf\n", i, distance, mph);
       i++;
   }
    return (0);
}
