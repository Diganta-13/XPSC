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
        int n, x, y;
        cin >> n >> x >> y;

        int ans = 0;

        for (int two = 0; two <= n / 2; two++)
        {
            int one = n - 2 * two;
            int profit = two * y + one * x;
            ans = max(ans, profit);
        }

        cout << ans << '\n';
    }
    return 0;
}
