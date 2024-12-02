#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	int i,j,n;
	float a[100][100],x[100],y[100],zmax,oldvalue,e=0.001;
	
	printf("enter the order of the matrix");
	scanf("%d",&n);
	
	printf("Enter the coefficients of matrix \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the eigen value X: \n");
	for(i=0;i<n;i++){
			scanf("%f",&x[i]);
	}
	do{
	for(i=0;i<n;i++){
		y[i]=0;
		for(j=0;j<n;j++){
			y[i]+=a[i][j]*x[j];
		}
	}
	for(i=0;i<n;i++){
		if(y[i]>y[i+1]){
			zmax = y[i];
			
		}
	}
	oldvalue = zmax;
	zmax = fabs(y[0]);
	for(i=1;i<n;i++){
		if(fabs(y[i])>zmax){
			zmax= fabs(y[i]);
		}
	}
}while((fabs(zmax - oldvalue) < e));
	printf("%f",zmax);
	printf("the final matrix is:\n");
	for(i=0;i<n;i++){
		printf("%f",y[i]);
	}
	return 0;

}

