#include <iostream>

using namespace std;

int main()
{
    int n, old = 0, young = 2147483647, dd, mm, yy;
    string os, ys, s;

    cin >> n;
    while (n--) {
        cin >>  s >> dd >> mm >> yy;
        dd = dd + mm * 100 + yy * 10000;
        if (dd > old) old = dd, os = s;
        if (dd < young) young = dd, ys = s;
    }

    cout << os << endl;
    cout << ys << endl;

    return 0;
}
