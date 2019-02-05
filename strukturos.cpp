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

void krepsininkai(node *&root, int n) {
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

int main()
{
    data A;
    A.y = 1999;
    A.m = 11;
    A.d = 6;
    A.date();

    knyga B;
    B.graz.y=2015;
    B.graz.m=12;
    B.graz.d=16;
    cout << "Iveskite knygos pavadinima" << endl;
    getline(cin, B.pav);
    B.spausdinimas();

    taskas t1, t2;
    cout << "Iveskite staciakampio kairio virsutinio tasko koordinates" << endl;
    cin >> t1.x >> t1.y;
    cout << "Iveskite staciakampio desiniojo apatinio kampo koordinates" << endl;
    cin >> t2.x >> t2.y;
    int S=fabs((t1.x-t2.x)*(t1.y-t2.y));
    cout << "Staciakampio plotas: " << S << endl;

    node *root = NULL;
    int n;
    cout << "Krepsininku skaicius: " << endl;
    cin >> n;
    krepsininkai(root, n);
    print(root);
    return 0;
}
