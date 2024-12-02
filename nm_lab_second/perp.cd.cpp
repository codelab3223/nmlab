#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int i, j, n;
    float a[100][100], x[100], y[100], zmax, oldvalue, e3 = 1e-6; // Stopping criterion
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the coefficients of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter the initial guess for the eigenvector (size %d):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    // Power iteration
    do {
        // Initialize y to zero
        for (i = 0; i < n; i++) {
            y[i] = 0;
            for (j = 0; j < n; j++) { // Corrected indexing
                y[i] += a[i][j] * x[j];
            }
        }

        // Find maximum value in y for normalization
        zmax = fabs(y[0]);
        for (i = 1; i < n; i++) {
            if (fabs(y[i]) > zmax) {
                zmax = fabs(y[i]);
            }
        }

        // Normalize y to get the new eigenvector
        for (i = 0; i < n; i++) {
            y[i] /= zmax;
        }

        // Check convergence
        oldvalue = zmax;
        zmax = fabs(y[0]);
        for (i = 1; i < n; i++) {
            if (fabs(y[i]) > zmax) {
                zmax = fabs(y[i]);
            }
        }

        // Update x with normalized y
        for (i = 0; i < n; i++) {
            x[i] = y[i];
        }

    } while (fabs(zmax - oldvalue) > e3); // Stopping criterion

    printf("Dominant eigenvalue: %f\n", zmax);

    return 0;
}
