#include<stdio.h>
#include<math.h>
main()
{
	float x[15],y[15],X,p=1,u,h,d;
	int i,j,n;
	printf("\t\t Output\n");
	printf("\n Enter the number of points:");
	scanf("d%,&n");
	printf("Enter the value of X at which y is required:");
	scanf("%f",&X);
	printf("Enter the value of x and y:\n\n");
	printf("x\t y=f(x)\n");
	for(i=1; i<=n; i++)
	scanf("%f\t %f",&x[i],&y[i]);
	h=x[2]-x[1];
	printf("\n h=%f\n",h);
	u=(X-x[n])/h;
	d=y[n];
	printf("u=%f,\t d=%f\n",u,d);
	for(i=1;i<=n-1;i++)
	{
		for(j=n, j<=i+1; j--)
		{
			y[j]-y[j-1];
			printf("\n d=%f\n",y[j]);
		}
		p=p*(u+i-1)/i;
		d=d+p*y[n];
		printf("\n d=%f\n",d)
	}
		printf("\n\n The result of Newton's backward interpolation is\n");
		printf("y(%1.2f)=%3.5f",X,d);
	
	
}
