#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_N 10001

bool matrix[MAX_N][MAX_N];
int main() {
    int n, i, j, k, count, sum, is_symmetric, is_antisymmetric, is_reflexive, is_transitive, is_function;
    clock_t start, end;
    struct timespec tstart={0,0}, tend={0,0};

    time_t now, later;
    printf("Enter the number of distinct elements: ");
    scanf("%d", &n);

    // Generate random matrix
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = rand() % 2;
        }
    }

    // Print matrix
//    printf("The generated matrix is:\n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }

    // Verify properties
    time(&now);
    start = clock();

        clock_gettime(CLOCK_MONOTONIC, &tstart);
{
//for (i = 0; i < 10000; i++) {
//        for (j = 0; j < 10000; j++) {
//           int x = 0;
//        }
//    }
    // Symmetry
    is_symmetric = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }
    if (is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    // Antisymmetry
    is_antisymmetric = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 1 && matrix[j][i] == 1 && i != j) {
                is_antisymmetric = 0;
                break;
            }
        }
        if (!is_antisymmetric) {
            break;
        }
    }
    if (is_antisymmetric) {
        printf("The matrix is antisymmetric.\n");
    } else {
        printf("The matrix is not antisymmetric.\n");
    }

    // Reflexivity
    is_reflexive = 1;
    for (i = 0; i < n; i++) {
        if (matrix[i][i] != 1) {
            is_reflexive = 0;
            break;
        }
    }
    if (is_reflexive) {
        printf("The matrix is reflexive.\n");
    } else {
        printf("The matrix is not reflexive.\n");
    }

    // Transitivity
    is_transitive = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                for (k = 0; k < n; k++) {
                    if (matrix[j][k] == 1 && matrix[i][k] != 1) {
                        is_transitive = 0;
                        break;
                    }
                }
            }
            if (!is_transitive) {
                break;
            }
        }
        if (!is_transitive) {
            break;
        }
    }
    if (is_transitive) {
        printf("The matrix is transitive.\n");
    } else {
        printf("The matrix is not transitive.\n");
    }

    // Function property
    is_function = 1;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                count++;
                if (count > 1) {
                    is_function = 0;
                    break;
                }
            }
        }
        if (is_function == 0) {
            break;
        }
    }
    if (is_function) {
        printf("The relation represents a function.\n");
    } else {
        printf("The relation does not represent a function.\n");
    }
}

    time(&later);
    end = clock();
        clock_gettime(CLOCK_MONOTONIC, &tend);

    double time_taken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
    double seconds = difftime(later, now);
    printf("Computational time (excluding printing time) is %.30lf milliseconds.\n", time_taken);
    printf("Computational time (excluding printing time) is %.30lf milliseconds.\n", seconds);
     printf("Computational time (excluding printing time) is %.5f milliseconds\n",(((double)tend.tv_sec + 1.0e-9*tend.tv_nsec) -
           ((double)tstart.tv_sec + 1.0e-9*tstart.tv_nsec))*1000);
    return 0;
}
