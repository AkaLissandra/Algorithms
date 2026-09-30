#include <iostream>
using namespace std;

int a[1000][1000];

void sum(int n, int m) {
    long long s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s += a[i][j];
        }
    }
    cout << s << endl;
}

void removeRow(int n, int m) {
    int i;
    cin >> i;
    for (int k = i; k < n - 1; k++) {
        for (int j = 0; j < m; j++) {
            a[k][j] = a[k + 1][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    sum(n, m);
    removeRow(n, m);
    return 0;
}

// a)
// Time complexity: Best case: O(NM), Worst case: O(NM), Average case: O(NM)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)

// b)
// Time complexity: Best case: O(1), Worst case: O(NM), Average case: O(NM)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)