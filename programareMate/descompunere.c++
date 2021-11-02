#include <iostream>
using namespace std;
//se declara variabilele n,d,p de tip intreg
//variabila n memoreaza numarul citit de la tastatura
//variabila d este folosita pentru a identifica daca n are divizori proprii
//variabila p memoreaza puterea la care apare un factor prim
int n,d,p;
int main()
{
//se citeste de la tastatura numarul n
cout<<"Introduceti numarul n: ";
cin>>n;
//variabila d este initializata cu 2 (primul posibil divizor propriu)
d=2;
//se determina daca numarul n are divizori proprii
while(n>1)
    {
        p=0;//p este initializat cu 0, pentru ca de fiecare data cand se reia instructiunea while sa se poata determina puterea la care apare factorul prim
        //se verifica daca numarul n se imparte de mai multe ori la numarul d
        while(n%d==0)
        {
            p++; //se contorizeaza puterea la care apare factorul prim in descompunere
            n=n/d; //se imparte n la d pentru a se putea continua impartirea si identificarea puterii
        }
        //daca numarul d se imparte macar o data la n se afiseaza d, alaturi de puterea la care apare in descompunere
        //daca p este 0 inseamna ca numarul d nu se imparte deloc la n
        if(p>0)
            cout<<d<<"^"<<p<<" ";
        d=d+1; //creste d, pentru a putea identifica si alti factori primi ai descompunerii
    }
}
