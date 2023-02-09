#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, i, arr[1000];
    stack<int> station;

    while (1) {
        cin >> n;
        if (n == 0) break;
        while (1) {
            cin >> arr[0];
            if (arr[0] == 0) {
                cout << endl;
                break;
            }
            for (i = 1; i < n; i++) {
                cin >> arr[i];
            }
            int currCoach = 1, index = 0;
            while (currCoach <= n) {
                station.push(currCoach);

                while (!station.empty() && station.top() == arr[index]) {
                    station.pop();
                    index++;
                    if(index >= n) break;
                }
                currCoach++;
            }
            if (station.empty()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}

