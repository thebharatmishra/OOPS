// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    int i = 1;
    int n;
    cin >> n;
    while (i < n)
    {
        int j = 1;
        while (j < n)
        {
            cout << n - j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}