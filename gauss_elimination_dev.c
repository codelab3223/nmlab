#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    float arr[100][100],c,sum,x[100];
    int i,j,n,k;
    printf("enter size of matrix:");
    scanf("%d",&n);
    printf("enter elements for the matrix");
    for (i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    
    for(j=1;j<=n;j++){
    	for(i=1;i<=n;i++){
    		if(i>j){
    			c=(arr[i][j]/arr[j][j]);
    			for(k=1;k<=n+1;k++){
    				arr[i][k] = arr[i][k]-c*arr[j][k];
				}
			}
		}
	}
	
	x[n]=arr[n][n+1]/arr[n][n];
	for(i=n-1;i>=1;i--){
		sum=0;
		for(j=i+1;j<=n;j++){
			sum = sum + arr[i][j]*x[j];
		}
		x[i]=(arr[i][n+1]-sum)/arr[i][i];
	}
	for(i=1;i<=n;i++){
		printf("%f\n",x[i]);
	}   
    return 0;
}

