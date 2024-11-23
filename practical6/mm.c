#include<stdio.h>

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
    int i, j, k; //Loop indices

    //Matrix Multiplication
    for (i=0; i<n; i++)
        for(j=0; j<q; j++)
             for (k=0; k<=p-1; k++) //k<p
                 C[i][j]=C[i][j]+A[i][k]*B[k][j];

}
