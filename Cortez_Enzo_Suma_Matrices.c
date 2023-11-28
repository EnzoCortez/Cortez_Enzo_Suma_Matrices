#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int m,n;

    /*Solicitud de las dimesiones de las matrices*/
    printf("Ingrese las dimensiones de la matriz");
    printf("Ingrese el numero de filas");
    scanf("%d",&m);
    printf("Ingrese el numero de columnas");
    scanf("%d",&n);
    /*Definir las matrices*/
    
    int matrizA[m][n];
    int matrizB[m][n];
    int matrizC[m][n];

    srand(time(0));
    /*Generacion de los numeros dentro de la matriz A*/
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizA[i][j] = rand() % 100 + 1;
        }
    }

    /*Generacion de los numeros dentro de la matriz B*/
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizB[i][j] = rand() % 100 + 1;
        }
    }

    /*Suma de matrices*/

     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
        }
    }

    /*Impresion de matrices*/

    /*Matriz A*/
    printf("\nMatriz A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    /*Matriz B*/
    printf("\nMatriz B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    /*Matriz Resultante C*/
    printf("\nMatriz C:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}



