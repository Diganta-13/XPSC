#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool flag = false;
    int a, b, c;
    cin >> a >> b >> c;
    int check = 0;
    for (int i = 1; check <= 1000; i++)
    {
        check = c * i;
        if (check >= a && check <= b)
        {
            cout << check;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "-1";
    return 0;
}