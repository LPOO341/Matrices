#include <stdio.h>
#define SIZE 10

// Prototipos
void llenarMatriz(int m[][SIZE], int f, int c);
void inicializarMatriz(int m[][SIZE]);
void imprimirMatriz(int m[][SIZE], int f, int c);
void sumarMatrices(int mA[][SIZE], int mB[][SIZE], int mRes[][SIZE], int f, int c);
void transpuestaMatriz(int mA[][SIZE], int mRes[][SIZE], int f, int c);

int main()
{
  int matA[SIZE][SIZE];
  int matB[SIZE][SIZE];
  int matRes[SIZE][SIZE];
  int opc = 0;
  int filasA = 0, columnasA = 0, filasB = 0, columnasB = 0;
  inicializarMatriz(matA);
  inicializarMatriz(matB);
  inicializarMatriz(matRes);
  do
  {
    printf("________________Menú________________\n");
    printf("1. Suma de dos matrices\n");
    printf("2. Multiplicacion de dos matrices\n");
    printf("3. Traspuesta de una matriz\n");
    printf("4. Salir\n");
    printf("Opcion: ");
    scanf("%d", &opc);
    if (opc == 1)
    {
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
    }
    else if (opc == 2)
    {
      printf("Multiplicacion\n");
    }
    else if (opc == 3)
    {
      printf("Filas matrices (Maximo matrices 10x10): ");
      scanf("%d", &filasA);
      printf("\nColumnas matrices (Maximo matrices 10x10): ");
      scanf("%d", &columnasA);
      printf("Matriz A: \n");
      llenarMatriz(matA, filasA, columnasA);
      transpuestaMatriz(matA, matRes, filasA, columnasA);
      imprimirMatriz(matRes, filasA, columnasA);
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
  for (size_t i = 0; i < count; i++)
  {
    for (size_t j = 0; j < count; j++)
    {
      for (size_t k = 0; k < count; k++)
      {
        /* code */
      }
    }
  }
}