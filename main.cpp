/**Se citesc 3 numere naturale S, n si e cu urmatoarele semnificatii: S este o suma de bani care trebuie platita folosind bancnote care au valori puterile lui e de la 1 la e la n. Se se afiseze modalitatea de plata folosind un numar minim de bancnote de tipurile precizate. Sa se afiseze la final numarul de bancnote folosite. Datele se vor citi din fisierul eur.in, iar rezultatele se vor afisa in fisierul eur.out.
Exemplu:
eur.in
444 5 2
eur.out
13 bancnote de valoarea 32
1 bancnote de valoarea 16
1 bancnote de valoarea 8
1 bancnote de valoarea 4
16
Explicatie: n=5, e=2 rezulta ca bancotele au valorile 1, 2, 4, 8, 16 si 32.**/
#include<fstream>
using namespace std;
ifstream f ("date.in");
ofstream g ("date.out");
int main()
{
    int S,n,e;
    f>>S>>n>>e;
    int p=1,k=0,r=0;
    while(p*e<=S && k<n)
    {
        p=p*e;
        k++;
    }
    while(S>0)
    {
        if(S>=p)
            g<<S/p<<" bancnote de valoare "<<p<<endl;
        r=r+S/p;
        S=S%p;
        p=p/e;
    }
    g<<r;
    f.close();
    g.close();
    return 0;
}
