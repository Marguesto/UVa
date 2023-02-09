/*
 * .X.X.
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string s;

int main()
{
    while (cin >> s) {
        int prev = -1, res = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'X') {
                if (prev == -1) {
                    res = max(res, i - 1);
                    prev = i;
                } else {
                    res = max(res, (i - prev - 2) / 2);
                    prev = i;
                }
            }
        }
        res = (prev != n - 1) ? max(res, n - prev - 2) : res;
        cout << res << endl;
    }
    return 0;
}
