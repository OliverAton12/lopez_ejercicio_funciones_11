//fecha: 16/06/24
////Autor:Lopez Quiroz Wagner
//tema: funciones varias
//Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

#include <iostream>
#include <string>

void dibujarFigura(int filas, const std::string& relleno) {
    for (int i = 1; i <= filas; ++i) {
        std::cout << std::string(i, relleno[0]) << std::endl;
    }
}

int main() {
    int filas;
    std::string relleno;
    
    // Solicitamos al usuario que ingrese el número de filas y el carácter de relleno
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el carácter de relleno: ";
    std::cin >> relleno;

    // Llamamos a la función para dibujar la figura
    dibujarFigura(filas, relleno);

    return 0;
}
