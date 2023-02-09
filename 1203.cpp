#include <iostream>
#include <bits/stdc++.h>
#include <pthread.h>
#include <queue>
#include <utility>

using namespace std;

priority_queue<pair<int, int>> pq;
map<int, int> m;

int main()
{

    while(1) {
        string r;
        cin >> r;
        if (r == "#") break;
        int q, p;
        cin >> q >> p;
        m[q] = p;
        pq.push(make_pair(-p, -q));
    }

    int k; 
    cin >> k;
    while(k--) { 
        int q = pq.top().second;
        cout << -q << endl;
        int val = pq.top().first;
        val -= m[-q];
        pq.pop();
        pq.push(make_pair(val, q));
    }
   
    return 0;
}
