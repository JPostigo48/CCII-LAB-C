#include<iostream>
using namespace std;

void intercambio(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void invertirR(int* primero, int* ultimo){
    if(primero < ultimo){
        intercambio(*primero++, *ultimo--);
        invertirR(primero, ultimo);
    }
}

void invertirI(int* primero, int* ultimo){
    while(primero < ultimo){
        intercambio(*primero++, *ultimo--);
    }
}

void mostrar(int * array, long tam){
  while (tam--) {
    cout << *array++ << " ";
  }
  cout << endl;
}

int main(){
    long tam = 10;
    int* array = new int[tam];
    for(int i = 0; i < tam; array[i] = i + 1, i++);
    //mostrar(array,tam);
    invertirI(array, array + tam - 1);
    //invertirR(array, array + tam - 1);
    //mostrar(array,tam);
    return 0;
}