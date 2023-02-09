#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--) {
        int n, q ,temp, que, max = 0;
        vector<int> arr;
        cin >> n >> q;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), greater<int>() );
        for (int i = 0; i < q; i++) {
            cin >> que;
            for (auto c : arr) {
                max = c & que;
                if (max != 0)
                    break;        
            }
            cout << max << endl;
            max = 0;
        }
    }
    return 0;
}

