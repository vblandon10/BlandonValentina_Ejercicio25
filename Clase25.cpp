#include <iostream>
#include <cmath> 
using namespace std;

void relleno (float **a, int filas, int col);

void imprirmeCabezas (float *a,int filas,int col);

int main(){
    
int numeroentrada;
cout<<"Escriba un numero del 3 al 11 "<<endl;
cin>>numeroentrada;
if( numeroentrada<3 || numeroentrada>11){
cout<<"El numero no se encuentra en el rango indicado"<<endl;
}
    
float **matriz;
    
    matriz = new float *[numeroentrada +2];
    
    for(int i = 0; i<numeroentrada+2;i++)
        
        matriz[i] = new float[numeroentrada+2];
    
    relleno (matriz,numeroentrada+2,numeroentrada);
    
    return 0;

}


void relleno (float **a, int filas, int col){
    
    for (int i = 0; i<filas; i++){
        
        for(int j = 0; j<col;j++){
            
           a[i][j] = i+j; 

}

}

}

void imprimeCabezas (float *a,int filas,int col){
    
  for(int i = 0; i< col; i++){
      
    cout << "Cabeza" <<i<< ":" <<a[i]<<endl;

  }
    

float suma = 0;
    
  for( int i = 0; i< filas;i++){
      
    int sum = col +i;
      
    suma = suma + * (a + sum);
  }
  cout<< " suma de la primera columna "<<suma <<endl;
}
