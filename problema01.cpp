#include <bits/stdc++.h>
using namespace std;

long long sumR(const int *array, int tam)
{
  if (tam == 1)
  {
    return *array;
  }
  else
  {
    return *array + sumR(array + 1, tam - 1);
  }
}

long long sumI(int *array, int tam)
{
  long long sum = 0;
  for (int i = 0; i < tam; sum += array[i], i++)
    ;
  return sum;
}

int main()
{
  int tam = 1000000;
  int *array = new int[tam];
  for (int i = 0; i < tam; array[i] = i + 1, i++)
    ;
  cout << "Suma Iterativa: " << sumI(array, tam) << endl;
  //cout << "Suma Recursiva: " << sumR(array, tam) << endl;
}