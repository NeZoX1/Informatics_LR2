#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int t = 0; t < n; t++) {
        int k;
        cin >> k;
        vector<double> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        bool found = false;
        for (int i = 1; i < k - 2; i++) {
            bool b = false;
            if (a[i] < a[i + 1] && a[i + 2] < a[i] && a[i] < a[i + 1]) {
                b = true;
            }
            if (b) {
                cout << 0 << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << 1 << endl;
        }
    }
    return 0;
}