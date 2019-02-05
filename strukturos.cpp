#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
struct data {
    int y;
    int m;
    int d;
    void date(){printf("%02i/%02i/%02i\n", y%100, m, d);}
};

struct knyga{
    data graz;
    string pav;
    void spausdinimas(){
    cout << pav << endl;
    graz.date();
    }
};

struct taskas{
    int x;
    int y;
};

struct node{
    string pavarde;
    double ugis;
    double rez;
    node *next;
};

struct krepsininkas{
    string pavarde;
    double ugis;
    double rez;
};

void ivedimas(node *&root, int n) {
  if (n > 0) {
    root = new node;
    cout << "Iveskite " << 1 << " krepsininko pavarde" << endl;
    cin >> root->pavarde;
    cout << "Iveskite " << 1 << " krepsininko ugi" << endl;
    cin >> root->ugis;
    cout << "Iveskite " << 1 << " krepsininko rezultatyvuma" << endl;
    cin >> root->rez;
    root->next = NULL;
  }
  node *t = root;
  for (int i=1; i<n; i++) {
    t->next = new node;
    t = t->next;
    cout << "Iveskite " << i+1 << " krepsininko pavarde" << endl;
    cin >> t->pavarde;
    cout << "Iveskite " << i+1 << " krepsininko ugi" << endl;
    cin >> t->ugis;
    cout << "Iveskite " << i+1 << " krepsininko rezultatyvuma" << endl;
    cin >> t->rez;
    t->next = NULL;
  }
}

void print(node *root) {
  node *t = root;
  while (t) {
    cout << t->pavarde << " " << t->ugis << " " << t->rez << endl;
    t = t->next;
  }
  cout << endl;
}

void tvarkymas(krepsininkas *K) {

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(K[j].rez>K[i].rez) {
                krepsininkas temp=K[i];
                K[i]=K[j];
                K[j]=temp;
            }
        }
    }
}

void isvedimas(krepsininkas *K){
    for(int i=0; i<5; i++){
        cout << K->pavarde << " " << K->ugis << " " << K->rez << endl;
        K++;
    }
}


int main()
{
    //1 ir 2 uzd
    data A;
    A.y = 1999;
    A.m = 11;
    A.d = 6;
    A.date();

    //3 uzd
    knyga B;
    B.graz.y=2015;
    B.graz.m=12;
    B.graz.d=16;
    cout << "Iveskite knygos pavadinima" << endl;
    getline(cin, B.pav);
    B.spausdinimas();

    //4 uzd
    taskas t1, t2;
    cout << "Iveskite staciakampio kairio virsutinio tasko koordinates" << endl;
    cin >> t1.x >> t1.y;
    cout << "Iveskite staciakampio desiniojo apatinio kampo koordinates" << endl;
    cin >> t2.x >> t2.y;
    int S=fabs((t1.x-t2.x)*(t1.y-t2.y));
    cout << "Staciakampio plotas: " << S << endl;

    //5 uzd
    node *root = NULL;
    int n;
    cout << "Krepsininku skaicius: " << endl;
    cin >> n;
    ivedimas(root, n);
    print(root);

    //6 uzd
    krepsininkas K[20];
    K[0].pavarde = "Paulauskas";
    K[0].ugis = 198;
    K[0].rez = 15;
    K[1].pavarde = "Lukauskas";
    K[1].ugis = 205;
    K[1].rez = 10;
    K[2].pavarde = "Jonauskas";
    K[2].ugis = 189;
    K[2].rez = 23;
    K[3].pavarde = "Girauskas";
    K[3].ugis = 197;
    K[3].rez = 13;
    K[4].pavarde = "Nerkauskas";
    K[4].ugis = 199;
    K[4].rez = 17;
    tvarkymas(&*K);
    isvedimas(&*K);
    return 0;
}
