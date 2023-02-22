#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    int32_t n1, n2, saida;

    while (cin >> n1 >> n2)
    {
        saida = n1^n2;
        cout << saida << endl;
        
    }
    return 0;
}