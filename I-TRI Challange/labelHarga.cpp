#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Returns the maximum value with knapsack of
// W capacity
int unboundedKnapsack(int W, int n, int val[], int wt[])
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W + 1];
    memset(dp, 0, sizeof dp);
    int a, b, c;
    // Fill dp[] using above recursive formula
    for (int i = 0; i <= W; i++)
        for (int j = 0; j < n; j++)
            if (wt[j] < i)
            {
                dp[i] = max(dp[i], dp[i - wt[j]] + val[j]);
                cout << i << " " << j << " " << wt[j] << " " << val[j] << endl;
            }

    return dp[W];
}

int main()
{
    int l, b[1000], h[1000], x;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        cin >> b[i] >> h[i];
    }
    cin >> x;

    cout << unboundedKnapsack(x, l, h, b);
    return 0;
}