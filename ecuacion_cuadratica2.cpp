//fecha: 16/06/24
////Autor:Lopez Quiroz Wagner
//tema: funciones varias
//Diseñe la función que calcule el resultado de la ecuación cuadrática. Utilice la actividad #10 como guía.
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string CalcularEcuacionCuadratica(double a, double b, double c, double &x1, double &x2)
{
    if (a == 0) {
        return "Error, división por cero";
    }

    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        return "No se puede calcular la raíz cuadrada de un número negativo";
    }

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return "Correcto";
}

int main()
{
    double a, b, c;
    double x1, x2;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    string resultado = CalcularEcuacionCuadratica(a, b, c, x1, x2);

    cout << resultado << endl;
    if (resultado == "Correcto") {
        cout << "Las soluciones son: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}
