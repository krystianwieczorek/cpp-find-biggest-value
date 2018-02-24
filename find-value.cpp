#include <iostream>
using namespace std;

int a, b, c, d, m;
int main()
{
    cout << "Podaj cztery liczby oddzielone spacją: ";
    cin >>a>>b>>c>>d;
    
    m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m =d ;
    
    cout << "Wartość maksymalna to " << m << endl;
    
    return 0;    
}
