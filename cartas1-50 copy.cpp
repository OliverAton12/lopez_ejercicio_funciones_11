//fecha: 16/06/24
////Autor:Lopez Quiroz Wagner
//tema: funciones varias
//Diseña la función que imprima las 52 cartas de un mazo de naipes. 
#include<iostream>
#include<string>
using namespace std;

void Imprimircarta(int carta, string simbolo)
{
    string valor;
    if (carta == 1) valor = "A";
    else if (carta == 11) valor = "J";
    else if (carta == 12) valor = "Q";
    else if (carta == 13) valor = "K";
    else valor = to_string(carta);

    string simbolo_char;
    if (simbolo == "corazones") simbolo_char = "♥";
    else if (simbolo == "diamantes") simbolo_char = "♦";
    else if (simbolo == "treboles") simbolo_char = "♣";
    else if (simbolo == "picas") simbolo_char = "♠";
    else simbolo_char = "?";

    cout << "╔════════════╗" << endl;
    cout << "║ " << valor;
    if (valor.length() == 1) cout << " ";
    cout << "         ║" << endl;
    cout << "║            ║" << endl;
    cout << "║            ║" << endl;
    cout << "║     " << simbolo_char << "      ║" << endl;
    cout << "║            ║" << endl;
    cout << "║            ║" << endl;
    cout << "║         " << valor;
    if (valor.length() == 1) cout << " ";
    cout << " ║" << endl;
    cout << "╚════════════╝" << endl;
}

void ImprimirMazo()
{
    string simbolos[] = {"corazones", "diamantes", "treboles", "picas"};
    for (int i = 1; i <= 13; ++i) {
        for (int j = 0; j < 4; ++j) {
            Imprimircarta(i, simbolos[j]);
        }
    }
}

int main()
{
    ImprimirMazo();
    return 0;
}


