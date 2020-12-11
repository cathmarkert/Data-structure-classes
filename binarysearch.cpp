#include <iostream>
using namespace std;

int main()
{
    bool num = false;
    int x,y,j=0,aux;

    cout<<"Digite um número: ";
    cin>>x;

    cout<<"Quantos números o vetor deve ter? ";
    cin>>y;

    int v[y];

    for(int i=0; i<y; i++)
    {
        cout<<"digite um número do vetor: "<<endl;
        cin>>v[i];
    }

    //ordenando o vetor
    for(int i=0; i<y; i++)
    {
       aux = v[i];
       j = (i-1);

       while(j>=0 && v[j]>aux)
       {
           v[j+1] = v[j];
           j-=1;
       }

       v[j+1] = aux;
    }

    //com o vetor ordenado, vamos executar o binary search

    int a,b,mean;

    a = 0;
    b = v[y];

    while(a<=b)
    {
      mean = (a+b)/2;

      if(mean == x) num = true;

      if(mean < x)  a = mean + 1;

      else b = mean - 1;
    }

    cout<<num<<endl;
}