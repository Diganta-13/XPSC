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
        int n, k, l;
        cin >> n >> k >> l;
        map<int, priority_queue<int>> mp;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            mp[b].push(a);
        }

        int ans = 0;
        bool check = true;

        if (mp[l].size() < k)
        {
            check = false;
        }
        else
        {
            while (k--)
            {
                ans += mp[l].top();
                mp[l].pop();
            }
        }

        if (check)
            cout << ans << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}
