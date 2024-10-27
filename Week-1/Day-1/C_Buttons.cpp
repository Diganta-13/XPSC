#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans = 0;
    int x = max(a, b);
    if (a == x)
    {
        ans += x;
        a--;
        x = max(a, b);
        ans += x;
    }
    else
    {
        ans += x;
        b--;
        x = max(a, b);
        ans += x;
    }
    cout << ans;
    return 0;
}