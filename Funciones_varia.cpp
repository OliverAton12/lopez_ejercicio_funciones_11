//fecha: 16/06/24
////Autor:Lopez Quiroz Wagner
//tema: funciones varias

#include<iostream>
using namespace std;
// Diseñe la función que devuelva el resultado de la serie siguiente: 1 -2 + 3 - 4 + 5  - 6 + 7 .... n


// calcula la serie  1 -2 + 3 - 4 + 5  - 6 + 7 .... n
int SumaAlterna(int n)
{
    int suma=0;
    for (int k=1; k<=n; k++)
   {
       if(k % 2 == 0 )
         suma -= k; //suma = suma -k;
       else
         suma += k;//suma = suma + k;

    }

    return suma;

}


int main()
{
    cout<<endl<<"La suma de la serie cuando el limite n es 100 es ";
    cout<<SumaAlterna(100);

    return 0;

}