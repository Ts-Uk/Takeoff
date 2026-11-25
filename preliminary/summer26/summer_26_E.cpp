#include <iostream>
using namespace std;

int a[100005];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i + 2 < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            a[i + 1] = 1 - a[i + 1];
            a[i + 2] = 1 - a[i + 2];
        }
    }

    int allOn = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            allOn = 0;
            break;
        }
    }

    if (allOn == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}