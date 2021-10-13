#include <iostream>
using namespace std;

int recursion(int numero)
{
    if (numero > 2)
    {
        return recursion(numero - 1) + recursion(numero - 2);
    }
    else
    {
        if (numero == 1)
        {
            return 0;
        }
        if (numero == 2)
        {
            return 1;
        }
    }
}

void mostrarFibo(int limite)
{
    for (int i = 1; i <= limite; i++)
    {
        cout << recursion(i) << endl;
    }
}

int main(int argc, char const *argv[])
{
    mostrarFibo(20);
    return 0;
}
