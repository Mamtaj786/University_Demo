#include <stdio.h>
#include <math.h>
float f (float x)
{
	return (x*x*x*-9*x+1);
}
int main()
    {
      float a, b,c,e;
      int k=0;
    printf("\n Enter accuracy");
    scanf("%f",&e);
    do
    {
    printf("\n Enter interval a,b");
    scanf("%f%f",&a,&b);
	}
	while(f(a)*f(b)>0.0);
	do
	{
	  c=(a+b)/2.0;
	printf("\n k=%d\t a=%f b=%f c=%f\t f(c)=%f",k,a,b,c,f(c));
	if(f(a)*f(c)<0.0)
	b=c;
	else
	a=c;            
	k=k+1;
	}while (fabs(f(c))>e);
	printf("\n Root of the equation b%f",c);
	printf("\n no of iteration requred%d",k);
	return 0;
}
