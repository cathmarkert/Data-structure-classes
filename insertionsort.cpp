#include <iostream>
using namespace std;

int main() {
  int n,x,j;

  cout<< "Insira a quantidade de números que o vetor vai ter: ";
  cin>>n;
  cout<<endl;

  int v[n];

  for(int i=0; i<n; i++)
  {
    cout<<"Insira um número do vetor"<<endl;
    cin>>v[i];
  }

  for(int i=1; i<n; i++)
  {
    x = v[i];
    j = (i-1);

    while(j>=0 && v[j]>x)
    {
      v[j+1] = v[j];
      j-=1;
    }
    v[j+1] = x;
  }

  cout<<"vetor ordenado"<<endl;

  for(int i=0; i<n; i++)
  {
    cout<<v[i]<<" ";
  }

  cout<<endl;
}