#include <stdio.h>

int main (void)
{
   double capacity, supply, pumped; 
 
   capacity = 1000.0;
 
   printf ("�ʱ⿬�ᷮ: ");
   scanf ("%lf", &supply);
 
   while (supply > capacity * 0.10)
   {
       printf ("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
       scanf ("%lf", &pumped);
       supply = supply + pumped;
       
       if (supply < 0.0)
          supply = 0.0;
               
       if (supply > capacity)
          supply = capacity;
       printf ("���� �����ִ� ���� %f�Դϴ�. \n", supply);
    }

       printf ("\n(���) ���ᰡ 10%�����Դϴ�. \n");

       return (0);
}
