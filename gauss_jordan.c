#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	
	int i,j,k,n;
	float a[100][100],x[100],c;
	printf("enter size of matrix:");
    scanf("%d",&n);
    printf("enter elements for the matrix");
    for (i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            scanf("%f",&a[i][j]);
        }
    }
    
    for(j=1;j<=n;j++){
    	for(i=1;i<=n;i++){
    		if(i!=j){
    			c= a[i][j]/a[j][j];
    			for(k=1;k<=n+1;k++){
    				a[i][k]=a[i][k]-c*a[j][k];
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		x[i]=a[i][n+1]/a[i][i];
		printf("%f\n",x[i]);

	}
	
	
return 0;
}
