#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char vardas[100];
    int dydis;
    cout << "Koks Jusu vardas?" << endl;
    cin >> vardas;
    cout << "Iveskite remelio dydi" << endl;
    cin >> dydis;
    cout << "***************************" << endl;
    for(int i=0; i<dydis; i++)
    {
        cout << "*                         *" << endl;
    }
    printf("%*c%s%s%*c\n", -5, '*', "Sveikas, ", vardas, 8, '*');
    for(int i=0; i<dydis; i++)
    {
        cout << "*                         *" << endl;
    }
    cout << "***************************" << endl;
    return 0;
}
