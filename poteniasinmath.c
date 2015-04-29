#include<stdio.h>

main()
{
   int a,b,c,d=1,i;

 printf("Introduce el coeficiente y exponente separados por una coma: ");
 scanf("%d,%d",&a,&b);


  for(i=0;i<b;i++)
  {
    c=a*1;
    d=d*c;
   // d=d+c;
  }
   printf("El resultado es %d",d);
}
