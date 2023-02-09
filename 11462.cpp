#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int n, temp;
    while (scanf("%d", &n)) {
        if (n == 0) break;
        vector<int> arr;
        arr.resize(101, 0);

        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr[temp]++;
        }

        for (int i = 0; i < 101; i++) {
            while (arr[i]--) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

