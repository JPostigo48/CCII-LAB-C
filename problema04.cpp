#include<iostream>
#include<string>
using namespace std;

int sizeIter(const char * ptr){
    int cont = 0;
    while(*ptr != '\0'){
        cont++;
        ptr += 1;
    }
    return cont;
}

int sizeRec(const char * ptr){
    if(*(ptr) == '\0'){
        return 0;
    }else{
        return 1 + sizeRec(ptr + 1);
    }
} 


int main(){
    string pharse = "Esta es una frase de prueba";
    const char * ptr = &pharse[0];
    printf("\nMedicion Iterativa: %d \n", sizeIter(ptr));
    printf("Medicion Recursiva: %d \n\n", sizeRec(ptr));
}