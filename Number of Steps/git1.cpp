#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[5000], b[5000];
    for (int i = 0; i < n; i++)
        {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int t = a[0];
    int s = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < t || (a[i] - t) % b[i] != 0) {
            cout << -1 << endl;
            return 0;
        }
        s += (a[i] - t) / b[i];
    }
    cout << s << endl;
    return 0;
}

