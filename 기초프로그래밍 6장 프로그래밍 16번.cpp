#include <stdio.h>

int main (void)
{
   double capacity, supply, pumped; 
 
   capacity = 1000.0;
 
   printf ("초기연료량: ");
   scanf ("%lf", &supply);
 
   while (supply > capacity * 0.10)
   {
       printf ("연료 충전은 +, 소모는 -로 입력해주세요: ");
       scanf ("%lf", &pumped);
       supply = supply + pumped;
       
       if (supply < 0.0)
          supply = 0.0;
               
       if (supply > capacity)
          supply = capacity;
       printf ("현재 남아있는 양은 %f입니다. \n", supply);
    }

       printf ("\n(경고) 연료가 10%이하입니다. \n");

       return (0);
}
