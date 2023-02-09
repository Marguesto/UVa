#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> arr;
    int temp, n = 0;

    while(true) {
        cin >> temp;
        arr.push_back(temp);
        n++;
        if (n == 1) {
            cout << arr[0] << endl;
            continue;
        }
        if (n == 2) {
            cout << (arr[0] + arr[1])/2 << endl;
            continue;
        }
        nth_element(arr.begin(), arr.begin() + (n / 2), arr.end());
        if (n % 2 == 1) {
            cout << arr[n / 2] << endl;
        } else {
            cout << (arr[n / 2] + arr [(n / 2) - 1]) / 2 << endl;
        }
    }
    return 0;
}

