#include <bits/stdc++.h>
#include <cstdio>
#include <pthread.h>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int n;
    while (scanf("%i", &n) != EOF) {
        stack<int> st;
        queue<int> qu;
        priority_queue<int> pq;

        bool isStack = true;
        bool isQueue = true;
        bool isPQ = true;

        int ins, val;
        while(n--) {
            scanf("%i %i", &ins, &val);
            if (ins == 1) {
                if (isStack) st.push(val);
                if(isQueue) qu.push(val);
                if (isPQ) pq.push(val);
            } else if (ins == 2) {
                if (st.empty() || st.top() != val) isStack = false; 
                else st.pop();
                if (qu.empty() || qu.front() != val) isQueue = false;
                else qu.pop();
                if (pq.empty() || pq.top() != val) isPQ = false;
                else pq.pop();
            }
        }

    }

    return 0;
}

