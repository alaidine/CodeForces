#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;

    cin >> x;
    if (x == 2) {
        cout << "NO";
        return 0;
    }
    (x % 2) ? (cout << "NO") : (cout << "YES");
    return 0;
}
