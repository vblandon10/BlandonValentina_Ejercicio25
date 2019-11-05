#include <iostream>
#include <cmath> 
using namespace std;

void funcionrellenar (float **a, int filas, int col);

void imprirmir (float *a,int filas,int col);

int main(){
    
  int numeroentrada;
  cout<<"Escriba un numero del 3 al 11 "<<endl;
  cin>>numeroentrada;
  if(numeroentrada<3 || numeroentrada>11){
    cout<<"El numero no se encuentra en el rango indicado"<<endl;
  }
}