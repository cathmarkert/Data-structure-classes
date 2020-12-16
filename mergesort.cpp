#include <iostream>
using namespace std;

void merge(int A[],int p, int q,int r)
{
  int n1 = (q-p)+1;

  int n2 = (r-q);

  int L[n1], R[n2];

  for(int i=0; i<n1;i++){
      L[i] = A[p+i];
  }

  for(int i=0; i<n2;i++){
      R[i] = A[q+1+i];
  }


  int i=0,j=0;

  int k=p;

  while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

  while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int A[], int p, int r){
    if(p<r){
        int q = (p+r-1)/2;

        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        merge(A,p,q,r);
    }
}

int main()
{
    int x;

    cout<<"Digite quantos num o vetor vai ter: ";
    cin>>x;

    int v[x];

    for(int i=0; i<x; i++){
        cout<<"Digite um valor: "<<endl;
        cin>>v[i];
    }

    int v_size = sizeof(v) / sizeof(v[0]);

    mergeSort(v, 0, v_size - 1);

    cout<<"Vetor ordenado: "<<endl;

    for(int i=0; i<x; i++){
        cout<<v[i]<<" ";
    }
}