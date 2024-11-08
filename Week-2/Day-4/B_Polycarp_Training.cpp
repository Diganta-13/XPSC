#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 1;
    while (s.lower_bound(ans) != s.end())
    {
        auto it = s.lower_bound(ans);
        s.erase(it);
        ans++;
    }
    cout << ans - 1;
    return 0;
}