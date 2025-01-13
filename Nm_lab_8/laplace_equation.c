#include <math.h>
#define N 10
#define TOLERANCE 1e-6
#define MAX_ITERATIONS 1000

void solve_laplace(double grid[N][N]) {
 int i, j, iterations = 0;
 double error, max_error;
 double temp[N][N];
 do {
 	max_error = 0.0;
 	for(i = 0; i < N; i++){
 		for(j = 0; j < N; j++){
 			 temp[i][j] = grid[i][j];
		 }
	 }
 	for(i = 1; i < N-1; i++) {
		for(j = 1; j < N-1; j++) {
			grid[i][j] = (temp[i+1][j] + temp[i-1][j] +  temp[i][j+1] + temp[i][j-1])/4.0;
			error = fabs(grid[i][j] - temp[i][j]);
    	   if(error > max_error) max_error = error;
 		}
 	}
	 iterations++;
 	 
	}while(max_error>TOLERANCE && iterations<MAX_ITERATIONS);
	printf("Converged in %d iterations \n",iterations);
}
int main() {
	int i,j;
 	double grid[N][N] = {0}; 
 //boundary condition set gareko
 	for( i = 0; i < N; i++) {
 		grid[0][i] = 100.0; // Top boundary
 		grid[N-1][i] = 0.0; // Bottom boundary
 		grid[i][0] = 0.0; // Left boundary
 		grid[i][N-1] = 0.0; // Right boundary
	 }
	 solve_laplace(grid);

 // Print results
 	for( i = 0; i < N; i++) {
 	for( j = 0; j < N; j++) {
 	printf("%7.2f ", grid[i][j]);
 	}
 	printf("\n");
  }
  printf("Name:Aayush Dhakal\nRollNo:SEC079BEI001");
 return 0;
}
