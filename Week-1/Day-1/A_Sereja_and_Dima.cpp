#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int ans_S = 0, ans_D = 0, term = 1;
    while (!dq.empty())
    {
        int l = dq.front();
        int r = dq.back();
        int mx = max(l, r);
        if (term % 2 != 0)
            ans_S += mx;
        else
            ans_D += mx;
        if (mx == l)
            dq.pop_front();
        else
            dq.pop_back();
        term++;
    }

    cout << ans_S << " " << ans_D;
    return 0;
}