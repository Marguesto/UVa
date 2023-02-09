#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

vi merge(const vi &a, const vi &b)
{
    vi res;
    priority_queue< pii, vector<pii>, greater<pii> > pq;
    for (int i = 0; i < a.size(); ++i)
        pq.push(pii(a[i] + b[0], 0));
    while (res.size() < a.size()) {
        int sum = pq.top().first;
        int bid = pq.top().second;
        pq.pop();
        res.push_back(sum);
        if (bid + 1 < b.size()) 
            pq.push(pii(sum - b[bid] + b[bid+1], bid+1));
    }
    return res;
}

void solve(int n)
{
    vvi A(n, vi(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; i < n; ++j)
            cin >> A[i][j];
    for(int i = 0; i < n; ++i)
        sort(A[i].begin(), A[i].end()); 

    vi cur = A[0];
    for (int i = 1; i < n; ++i)
        cur = merge(cur, A[i]);
    for (int i = 0; i < n; ++i)
        cout << cur[i] << (i + 1 == n ? '\n': ' ');
}

int main()
{
    int k;
    while(scanf("%i", &k) && k != EOF) {
        solve(k);
    }
    return 0;
}

