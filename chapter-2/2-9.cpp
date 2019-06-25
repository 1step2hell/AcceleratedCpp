#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Please enter two numbers: ";

    int n1, n2;
    cin >> n1 >> n2;

    if (n1 > n2)
        cout << n1 << " is bigger than " << n2 << endl;
    else if (n1 < n2)
        cout << n2 << " is bigger than " << n1 << endl;
    else
        cout << n1 << " equals to " << n2 << endl;

    return 0;
}
