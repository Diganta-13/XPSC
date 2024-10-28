#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s.size() == 3)
        s.insert(0, "0");
    else if (s.size() == 2)
        s.insert(0, "00");
    else if (s.size() == 1)
        s.insert(0, "000");
    cout << s;
    return 0;
}