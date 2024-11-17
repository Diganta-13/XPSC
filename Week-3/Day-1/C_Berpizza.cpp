#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> ans;
    int t, serial = 1;
    cin >> t;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    while (t--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({serial, money});
            ml.insert({money, -serial});
            serial++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase({pos, money});
            ml.erase({money, -pos});
        }
        else
        {
            int money = ml.rbegin()->first, pos = -ml.rbegin()->second;
            ans.push_back(pos);
            s.erase({pos, money});
            ml.erase({money, -pos});
        }
    }
    for (int val : ans)
        cout << val << " ";
    return 0;
}