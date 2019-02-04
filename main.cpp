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
    printf("***************************\n");
    for(int i=0; i<dydis; i++)
    {
        //cout << "*                         *" << endl;
        printf("%*c%*c\n", -10, '*', 17, '*');
    }
    printf("%*c%s%s%*c\n", -5, '*', "Sveikas, ", vardas, 4, '*');
    for(int i=0; i<dydis; i++)
    {
        printf("%*c%*c\n", -10, '*', 17, '*');
    }
    printf("***************************\n");
    return 0;
}
