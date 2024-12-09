//curve fitting

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[100],y[100],m,c,xi=0,yi=0,xisq=0,xiyi=0;
	int i,n;
	printf("Enter number of data");
	scanf("%d",&n);
	printf("Enter the value of x and y ");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&x[i],&y[i]);
	}
	
	for(i=0;i<n;i++){
		xisq = xisq + pow(x[i],2);
		xi = xi + x[i];
		xiyi = xiyi + x[i]*y[i];
		yi = yi + y[i];
	}
	m = ((n*xiyi-xi*yi)/(n*xisq-pow(xi,2)));
	c = (yi/n)-(m*(xi/n));
	
	printf("c = %f",c);
	printf("m = %f",m);
	
	printf("\n Name: Aayush Dhakal \n RollNo:SEC079BEI001");

	
	
	return 0;
}
