#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int l = 0;
    int u = 0;
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            l++;
        else
            u++;
    }

    if (u > l)
    {
        for (char &c : s)
            c = toupper(c);
    }
    else
        for (char &c : s)
            c = tolower(c);

    cout << s;
    return 0;
}