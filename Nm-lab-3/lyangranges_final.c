#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[100],y[100],num,den,xval,yval=0,z[100];
	int i,j,n;
	printf("Enter number of data");
	scanf("%d",&n);
	printf("Enter the value of x and y");
	for(i=0;i<=n-1;i++)
	{
		scanf("%f %f",&x[i],&y[i]);
	}
	printf("Enter the value of x for which f(x) is to be calculated\n ");
	scanf("%f",&xval);
	for(i=0;i<=n-1;i++)
	{
	   z[i]=1;
	   for(j=0;j<=n-1;j++)
	   {
	   	if(j!=i)
	   	{
	   	z[i]=z[i]*((xval-x[j])/(x[i]-x[j]));
		   }
	   }
	} 
	for(i=0;i<n-1;i++)
	{
		yval=yval+(z[i]*y[i]);
	}
	
	printf("\n If x=%f \t y=%f \n",xval,yval);
	printf("\n Name: Aayush Dhakal \n RollNo:SEC079BEI001");
	return 0;
}


