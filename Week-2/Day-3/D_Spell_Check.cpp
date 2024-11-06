#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        if (a != 5)
        {
            cout << "NO\n";
            continue;
        }
        string t = "Timur";
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}