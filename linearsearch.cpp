#include <iostream>
using namespace std;

int main()
{
    bool num = true;
    int x,y;

    cout<<"Digite um número: ";
    cin>>x;

    cout<<"Quantos números o vetor deve ter?";
    cin>>y;

    int v[y];

    for(int i=0; i<y; i++)
    {
        cout<<"digite um número do vetor: "<<endl;
        cin>>v[i];
    }

    int j=0;

    while(j<y && v[j] != x)
    {
        j+=1;
    }

    if(j == y) num=false;

    cout<<num<<endl;
}