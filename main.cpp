#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
     double m;
     double Q;
     double g;
    string litera;
    cout << "Witaj! Wspolnie obliczymy sile ciezkosci. Zaraz zadam ci pare pytan" << endl;
    cout << "Czego szukasz? (Q,m,g?)" << endl;
    getline( cin, litera );
    if ( litera == "Q" )
    {
    double m;
    double Q;
    double g;
      cout << "Podaj  wartosc m " << endl;
      cin >> m;
      cout << "Podaj wartosc g"  << endl;
      cin >> g;
      cout << "Wartosc Q jest rowna: ";
      cout << m * g << endl;

    }
    else if ( litera == "m")
    {
         double m;
         double Q;
         double g;
        cout << "Podaj wartosc Q: ";
        cin >> Q;
        cout << "Podaj wartosc g: ";
        cin >> g;
        cout << "Wartosc g jest rowna: ";
        cout << Q / g << endl;

    }
    else if ( litera == "g")
    {
         double m;
         double Q;
         double g;
        cout << "Podaj wartosc Q: ";
        cin >> Q;
        cout << "Podaj wartosc m: ";
        cin >> g;
        cout << "Wartosc g jest rowna: ";
        cout << Q / m << endl;

    }
    else if ( litera !="m" )
    {
        cout << "bledna wartosc. ";
    }
     else if ( litera !="g" )
    {
        cout << "bledna wartosc. ";
    }
     else if ( litera !="Q" )
    {
        cout << "bledna wartosc. ";
    }
    }

}
