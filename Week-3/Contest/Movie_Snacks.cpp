#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int ans1 = z * 2 + y;
    int ans2 = 2 * x + 3 * y;
    if (ans1 < ans2)
        cout << ans1;
    else
        cout << ans2;
    return 0;
}