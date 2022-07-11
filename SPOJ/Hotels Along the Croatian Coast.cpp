#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int, int>
#define mp make_pair
#define endl "\n"
#define vi vector<int>
#define dbg cout << "HERE!!!" << endl
#define cinVec(v, n)            \
    for (int i = 0; i < n; ++i) \
    cin >> v[i]
#define coutVec(v, n)     \
    for (auto i : v)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end())
#define rep(n) for (int i = 0; i < n; ++i)
#define rep1(i, n) for (int j = i; j < n; ++j)

#define fastIO()                          \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);                   \
    }

using namespace std;

const int N = 1e5 + 5;

int32_t main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int i = -1, j = 0, ans = 0, sum = 0;
    while (i < j)
    {
        while (j < n && sum + v[j] <= m)
        {
            sum += v[j];
            j++;
        }
        ans = max(ans, sum);
        i++;
        sum -= v[i];
    }

    cout << ans << endl;
    return 0;
}
