#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
using std::stringstream;

int main()
{
    ifstream archivo;
    archivo.open("/workspaces/nov22/inventario.csv"); // Abrir archivo
    string linea;
    while(getline(archivo, linea)) // Leer una línea del archivo
    {
        cout << linea << endl;

        stringstream token(linea);
        string pos1;
        getline(token, pos1, ',');
        cout << pos1 << endl;
    }
    archivo.close(); 
}
