#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    int sum = n*(n+1)/2;
    int pw = 0;

    for (int i = 0; i < n; ++i)
    {
        if (pow(2,i)>n)
        {
            break;
        }
        pw+=pow(2,i);
    }

    cout << sum-(pw*2) << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}