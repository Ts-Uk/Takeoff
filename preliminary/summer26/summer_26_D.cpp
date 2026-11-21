#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long tom = 0, jerry = 0;
    for (; n != 0 && m != 0; n = n / 10, m = m / 10)
    {
        int a = n % 10;
        int b = m % 10;
        if (a > b)
        {
            tom++;
        }
        else if (b>a)
        {
            jerry++;
        }
    }
    for (; n != 0; n = n / 10)
    {
        tom++;
    }
    for (; m != 0; m = m / 10)
    {
        jerry++;
    }
    if (tom > jerry)
        cout << "Tom" << "\n";
    else if (jerry > tom)
        cout << "Jerry" << "\n";
    else
        printf("Tie\n");
    return 0;
}