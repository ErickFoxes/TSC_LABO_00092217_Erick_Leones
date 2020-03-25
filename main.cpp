#include <iostream>
#include "math_tools.h"
#include "display_tools.h"


using namespace std;

int main(void) {
  
  Matrix Matrix_original;
  Matrix Matrix_A_Invertir;
  zeroes(Matrix_original, 3); 

//Datos de la matriz a invertir
  Matrix_original.at(0).at(0) = 2; Matrix_original.at(0).at(1) = 2; Matrix_original.at(0).at(2) = 3;
  Matrix_original.at(1).at(0) = 4; Matrix_original.at(1).at(1) = 5; Matrix_original.at(1).at(2) = 6;
  Matrix_original.at(2).at(0) = 7; Matrix_original.at(2).at(1) = 8; Matrix_original.at(2).at(2) = 9;

//Imprimir matriz original
  cout<<"Matriz original:\n";
  showMatrix(Matrix_original);
//Función para invertir
  invertirMatrix(Matrix_original, Matrix_A_Invertir);
//Imprimir matriz inversa
  cout<<"\nMatriz Inversa:\n";
  showMatrix(Matrix_A_Invertir);
  return 0;
}