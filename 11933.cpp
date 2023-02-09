#include <iostream>

using namespace std;

int main()
{
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        bool add = true;
        unsigned int toAdd = 1, a = 0, b = 0;

        while(n) {
            if (n & 1) {
                if (add) a+= toAdd;
                else b+= toAdd;
                add = !add;
            }
            toAdd *= 2;
            n /= 2;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}

