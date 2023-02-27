#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double n1, n2;

    while (cin >> n1 >> n2)
    {
        cout << std::fixed;
        cout << setprecision(5) << "MEDIA = "
        << (n1*3.5 + n2*7.5)/11
        << endl;
    }
    return 0;
}