#include <iostream>
#include "myFunction.cpp"

using namespace std;
 

int main() {

  srand(time(NULL));
  int vetor[9];
  for(int i =0; i < 9; i++) {
    vetor[i] = rand() % 10;
  }
  mudar(vetor,9);
 
}
