#include <iostream>
//Dynamics Arrays
using namespace std;

float promedio(float *arreglo, int tam)   
{
    float suma = 0.0; 
    for (int i = 0; i < tam; i++)
    {
        suma += arreglo[i];
    }
    return (suma / tam);
}
// registrarCal: Returns a pointer to a float 
float *registrarCal(float *arreglo, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese calificación " << i + 1 << ": ";
        while (!(cin >> arreglo[i])) 
        {
            cin.clear();               
            cin.ignore(10000, '\n');   
            cout << "Entrada inválida. Intente nuevamente: ";
        }
    }
    return arreglo;
}

int main()
{
    int tam;
    cout << "Ingrese cuántas calificaciones desea registrar: ";
    while (!(cin >> tam) || tam <= 0) 
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Entrada inválida. Intente nuevamente: ";
    }

    float *calificaciones = new float[tam]; 
    float *ptr = registrarCal(calificaciones, tam);

    float resultado = promedio(ptr, tam);
    cout << "El promedio de las calificaciones es: " << resultado << endl;

    delete[] calificaciones;
    return 0;
}
