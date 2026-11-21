#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 5)
    {
        cout << "CG4" << "\n";
    }
    else if (n >= 2)
    {
        cout << "PASS" << "\n";
    }
    else
    {
        cout << "FAIL" << "\n";
    }
    return 0;
}