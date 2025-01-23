#include <iostream>

using namespace std;

int sublista(int arreglo[], int izquierda, int derecha)
{
    int pivote = (derecha + izquierda)/2;

    int i = izquierda-1;

    for(int i = izquierda; i < derecha; i++)
    {
        if(arreglo[izquierda] > arreglo[pivote]);
        swap(arreglo[izquierda], arreglo[derecha]);
    }

}

void quicksort(int arreglo[], int izquierda, int derecha)
{
    if(izquierda < derecha)
    {
        int pivote = sublista(arreglo, izquierda, derecha);
        cout<<pivote;
        quicksort(arreglo, izquierda, pivote-1);
        quicksort(arreglo, pivote+1, derecha);
    }
}

void imprimirArreglo(int arreglo[], int n)
{
    for( int i=0; i< n; ++i)
    {
        cout<<arreglo[i]<<" ";
    }
}
int main()
{
    int arreglo[]= {10,20,1,7,90,18,22,4,0};
    int n = sizeof(arreglo)/ sizeof(arreglo[0]);
    cout<<"Array Original"<<endl;
    //imprimirArreglo(arreglo, n);
    quicksort(arreglo, 0,n-1);
    cout<<endl;
    cout<< "Arreglo Ordenado: ";
    imprimirArreglo(arreglo, n);
    return 0;
}