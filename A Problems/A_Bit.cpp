#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int total = 0;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++")
        {
            total++;
        }
        else
        {
            total--;
        }
    }
    cout << total;
    return 0;
}