#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float a,x,g,f,y;
int l, d;
float b=0;

printf("Vvedite x: ");
scanf ("%f", &x);
printf("Vvedite a ");
scanf ("%f", &a);
printf("1-vich G, 2-vich f, 3-vich y");
scanf("%d", &d);
switch(d)
{
case 1:
 if (x>0 && a>0)
 {
 g=9*(-2*a*a+3*a*x+2*x*x);
 l=(6*a*a+29*a*x+35*x*x);
 if (g/l ==0)
 {
 printf( "oshibka");
 exit(1);
 }
 else
 {
 g=g/l;
 printf("G = %f\n,", g);
 exit(1);
 }
 }
 else
 {
 printf( "oshibka znacheniy");
 exit(1);
 }
case 2:
 f=tan(10*a*a-13*a*x+4*x*x);
 printf("F =%f\n", f);
 exit(1);
case 3:
 y=atan(2*a*a+25*a*x+63*x*x);
 printf("Y =%f\n", y);
 exit(1);
 }
/*default:
printf("oshibka")
exit(1);*/
}
/*
printf("Vvedite x ");
scanf ("%f", &x);
printf("Vvedite a ");
scanf ("%f", &a);
f=tan(10*a*a-13*a*x+4*x*x);
printf("f=%f\n\n", f);


printf("Vvedite x ");
scanf ("%f", &x);
printf("Vvedite a ");
scanf ("%f", &a);
y=atan(2*a*a+25*a*x+63*x*x);
printf("y=%f\n\n", y);
}
}
*/
