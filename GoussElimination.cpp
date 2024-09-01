#include<stdio.h>
#include<math.h>
main()
{
	int i,j,k,l,m,n;
	float a[20][20],x[20],b[20][20],d;
	printf("\n Enter the Aurgmented matrix");
	d=1.0;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<n+1; j++)
		{
          		scanf("%f",&a[i][j]);
           	}
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1; j++)
	          {
	          	b[i][j] =a[i][j]/a[i][i];
		}
		d=d*a[i][i];
		for(k=i+1; k<=n; K++)
		{
			for (j=i; j<=n+1; j++)
			{
				a[l][m]=b[l][m];
				printf("3.3f",b[l][m]);
			}
			printf("\n");
			for(i=n-1; i>=1;i--)
			{
				
			}	
			}
		}
}
