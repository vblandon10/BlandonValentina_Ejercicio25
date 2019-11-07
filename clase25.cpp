#include<iostream>
#include<cmath>
using namespace std;

float** relleno(float** b, int filas, int col);
int imprimeCabezas(float** b,int filas,int col);
void imprime(int num,float **b);
int num=0;

int main(){
    
  cout << "Escriba un numero del 3 al 11:" <<endl;
  int num=0;
    
  cin>>num ;
    
  if(num >=3 && num <=11){
      
    float ** matrix = new float *[num];
      
    for (int i = 0; i < num ; ++i){matrix[i] = new float[num +2];}
      
    relleno(matrix,num +2,num);
    imprimeCabezas(matrix,num +2,num);      
    imprime (num ,matrix);
  }
  else { cout <<"El numero no se encuentra en el rango valido" <<endl ;}


return 0;
}

float** relleno(float **b, int filas, int col){
  for (int i = 0; i<filas; i++){
      b[i] = new float [col];
    for(int j = 0; j<col;j++){
      b[i][j] = i+j;
   
    }

  }
  return b;

}
int imprimeCabezas(float **b,int filas,int col){
    int counter = 0;
  for(int i = 0; i<col; i++){
    cout << "cada fila da = "<<*b[i]<<endl;
  }
  for(int i = 0;i<filas;i++){
    counter += b[0][i];
  }
  cout<<"el resultado final de sumar las columnas es"<<counter<<endl;
    
    
}

void imprime(int num,float **b){
  for (int  j =0;  j < num+2 ;j++) {

  for (int i = 0; i <num;i++) {
    cout<<"     "<<b[i][j]<<"     ";
  }
  cout<<endl;
  }
}