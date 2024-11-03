#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> ans, check;

    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (check.find(a) != check.end())
        {
            string s = check[a];
            ans[s] = b;
            check.erase(a);
            check[b] = s;
        }
        else
        {
            ans[a] = b;
            check[b] = a;
        }
    }
    cout << ans.size() << '\n';
    for (auto val : ans)
        cout << val.first << " " << val.second << '\n';
    return 0;
}