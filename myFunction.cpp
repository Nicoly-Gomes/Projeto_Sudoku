#include <iostream>
#include <ctime>
#include "myFunction.h"
using namespace std;


void formar_matriz(int v[], int t ) {
    for (int lin = 0; lin < 3; lin++) {
        for(int col =0; col < 3; col++) {
         matriz_principal[lin][col] = v[p];
        p++;
      }
    }
    for(int i =0; i < 3; i++) { 
      for(int j =0; j < 3; j++){
        cout << matriz_principal[i][j] << '\t';
      }
      cout << endl;
    }
  }

void mudar(int v[], int t)  {
  for(int y = 0; y < 10; y++) {
    while(v[y] == 0) {
      v[y] = rand() % 10;
    }
    if(v[y] != 0) {
      v[y] = v[y];
    }
  } // laço de repetição para tirar os 0's do vetor

  int i =0;
   do {
     int igual = 0;
     if(igual==1) {
       v[i] = rand()% 10;
      if(v[i] == 0) {
        v[i] = rand()% 10;
      }
     }
    igual = 0;
    for(int j=0; j < i; j++){
      if(v[i] == 0) {
        v[i] = rand()% 10;
      }
      if(v[j] == v[i])
        igual = 1;
      }
     if(igual == 0) 
        i++;
    
  } while(i < 10);

  formar_matriz(v,9);
    
  }
