#include <iostream>
#include <fstream>
using namespace std;
struct duomenys{
    char vardas[100];
    int dydis;
};
duomenys ivedimas(duomenys A);
void lentele(duomenys A);
int main()
{
    duomenys A;
    A = ivedimas(A);
    lentele(A);
    return 0;
}
duomenys ivedimas(duomenys A)
{
    cout << "Koks Jusu vardas?" << endl;
    cin >> A.vardas;
    cout << "Iveskite remelio dydi" << endl;
    cin >> A.dydis;
    return A;
}
void lentele(duomenys A)
{
    printf("***************************\n");
    for(int i=0; i<A.dydis; i++)
    {
        printf("%*c%*c\n", -10, '*', 17, '*');
    }
    printf("%*c%s%s%*c\n", -5, '*', "Sveikas, ", A.vardas, 4, '*');
    for(int i=0; i<A.dydis; i++)
    {
        printf("%*c%*c\n", -10, '*', 17, '*');
    }
    printf("***************************\n");
}
