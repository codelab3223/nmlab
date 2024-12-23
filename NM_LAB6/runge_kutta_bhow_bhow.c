#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	return (x-y)/2;
}
int main()
{
	int n,i;
	float x0,y0,yn,xn,h,k1,k2,k3,k4,k;
	printf("Enter x0,y0,no.of steps and calculation point");
	scanf("%f %f %d %f",&x0,&y0,&n,&xn);
	h=(xn-x0)/n;
	i=0;
	do{
	k1=h*f(x0,y0);
	k2=h*f(x0+h/2,y0+k1/2);
	k3=h*f(x0+h/2,y0+k2/2);
	k4=h*f(x0+h,y0+k3);		
	k=(k1+2*k2+2*k3+k4)/6;
	yn=y0+k;
	i=i+1;
	x0=x0+h;
	y0=yn;
	
	}while(i<n);
printf("%f is the result\n",yn);
printf("Name: Sudarshan Pathak\n RollNo:SEC079BEI009");
	return 0;
}
