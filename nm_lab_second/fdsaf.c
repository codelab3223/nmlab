#include <stdio.h>
#include <math.h>

// Function to find the largest element in magnitude
double findLargestMagnitude(double* array, int size) {
    double max = fabs(array[0]);
    for (int i = 1; i < size; i++) {
        if (fabs(array[i]) > max) {
            max = fabs(array[i]);
        }
    }
    return max;
}

int main() {
    int n, i, j;
    double e, k, k_prev, diff;

    // Read the size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // Declare matrix and vectors
    double A[n][n], X[n], Y[n];

    // Input the matrix A
    printf("Enter the coefficients of the matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Input the stopping criteria
    printf("Enter the stopping criteria (e): ");
    scanf("%lf", &e);

    // Input the initial vector X
    printf("Enter the initial vector X:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &X[i]);
    }

    // Initialize k_prev to a small value
    k_prev = 0.0;

    do {
        // Step 3: Calculate Y = A * X
        for (i = 0; i < n; i++) {
            Y[i] = 0;
            for (j = 0; j < n; j++) {
                Y[i] += A[i][j] * X[j];
            }
        }

        // Step 5: Find the largest element in magnitude and assign it to k
        k = findLargestMagnitude(Y, n);

        // Step 6: Calculate new X as X = (1/k) * Y
        for (i = 0; i < n; i++) {
            X[i] = Y[i] / k;
        }

        // Step 7: Check the stopping criteria |k - k_prev| > e
        diff = fabs(k - k_prev);
        k_prev = k;

    } while (diff > e);

    // Print the dominant eigenvalue and eigenvector
    printf("Dominant Eigenvalue: %.6lf\n", k);
    printf("Corresponding Eigenvector:\n");
    for (i = 0; i < n; i++) {
        printf("%.6lf\n", X[i]);
    }

    return 0;
}

