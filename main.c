#include <stdio.h>
#define SIZE 10

// Prototipos
void llenarMatriz(int m[][SIZE], int f, int c);
void inicializarMatriz(int m[][SIZE]);
void imprimirMatriz(int m[][SIZE], int f, int c);
void sumarMatrices(int mA[][SIZE], int mB[][SIZE], int mRes[][SIZE], int f, int c);
void transpuestaMatriz(int mA[][SIZE], int mRes[][SIZE], int f, int c);
void multiplicarMatrices(int mA[][SIZE], int mB[][SIZE], int mRes[][SIZE], int f, int c);
int main()
{
  int matA[SIZE][SIZE];
  int matB[SIZE][SIZE];
  int matRes[SIZE][SIZE];
  int opc = 0;
  int filasA = 0, columnasA = 0, filasB = 0, columnasB = 0;
  do
  {
    inicializarMatriz(matA);
    inicializarMatriz(matB);
    inicializarMatriz(matRes);
    printf("________________Menú________________\n");
    printf("1. Suma de dos matrices\n");
    printf("2. Multiplicacion de dos matrices\n");
    printf("3. Traspuesta de una matriz\n");
    printf("4. Salir\n");
    printf("Opcion: ");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
      printf("Filas matrices (Maximo matrices 10x10): ");
      scanf("%d", &filasA);
      printf("\nColumnas matrices (Maximo matrices 10x10): ");
      scanf("%d", &columnasA);
      printf("\n");
      printf("Matriz A: \n");
      llenarMatriz(matA, filasA, columnasA);
      printf("Matriz B: \n");
      llenarMatriz(matB, filasA, columnasA);
      sumarMatrices(matA, matB, matRes, filasA, columnasA);
      imprimirMatriz(matRes, filasA, columnasA);
      break;
    case 2:
      printf("Filas matriz A (Maximo matrices 10x10): ");
      scanf("%d", &filasA);
      printf("\nColumnas matriz B (Maximo matrices 10x10): ");
      scanf("%d", &columnasA);
      printf("Filas matriz B (Maximo matrices 10x10): ");
      scanf("%d", &filasB);
      printf("\nColumnas matriz B (Maximo matrices 10x10): ");
      scanf("%d", &columnasB);
      if (columnasA == filasB)
      {
        printf("\n");
        printf("Matriz A: \n");
        llenarMatriz(matA, filasA, columnasA);
        printf("Matriz B: \n");
        llenarMatriz(matB, filasB, columnasB);
        multiplicarMatrices(matA, matB, matRes, filasB, filasB);
        imprimirMatriz(matRes, filasB, columnasB);
      }
      else
      {
        printf("El numero de columnas de la primer matriz debe coincidir con el numero de filas de la segunda \n");
      }
      
      
      break;
    case 3:
      printf("Filas matrices (Maximo matrices 10x10): ");
      scanf("%d", &filasA);
      printf("\nColumnas matrices (Maximo matrices 10x10): ");
      scanf("%d", &columnasA);
      printf("Matriz A: \n");
      llenarMatriz(matA, filasA, columnasA);
      transpuestaMatriz(matA, matRes, filasA, columnasA);
      imprimirMatriz(matRes, filasA, columnasA);
      break;
    case 4:
      printf("Saliendo...");
      break;
    default:
      printf("Opcion no valida \n");
      break;
    }
  } while (opc != 4);
  return 0;
}

void llenarMatriz(int m[][SIZE], int f, int c)
{
  int cont = 1;
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
    {
      printf("Capture el valor %d: ", cont);
      scanf("%d", &m[i][j]);
      cont++;
    }
  }
}

void inicializarMatriz(int m[][SIZE])
{
  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j < 10; j++)
    {
      m[i][j] = 0;
    }
  }
}

void imprimirMatriz(int m[][SIZE], int f, int c)
{
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
    {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

void sumarMatrices(int mA[][SIZE], int mB[][SIZE], int mRes[][SIZE], int f, int c)
{
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
    {
      mRes[i][j] = mA[i][j] + mB[i][j];
    }
  }
}

void transpuestaMatriz(int mA[][SIZE], int mRes[][SIZE], int f, int c)
{
  for (size_t i = 0; i < f; i++)
  {
    for (size_t j = 0; j < c; j++)
    {
      mRes[i][j] = mA[j][i];
    }
  }
}

void multiplicarMatrices(int mA[][SIZE], int mB[][SIZE], int mRes[][SIZE], int f, int c)
{
  for (size_t i = 0; i < c ; i++)
  {
    for (size_t j = 0; j < f; j++)
    {
      for (size_t k = 0; k < c; k++)
      {
        mRes[i][j] += mA[i][k] * mB[k][j];
      }
    }
  }
}