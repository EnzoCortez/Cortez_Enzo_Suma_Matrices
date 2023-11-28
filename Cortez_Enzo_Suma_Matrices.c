#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    /*Definir las matrices*/
    int m,n; 
    int matrizA[m][n];
    int matrizB[m][n];
    int matrizC[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizA[i][j] = rand() % 100 + 1;
        }
    }



}



