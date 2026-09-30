#include <iostream>
using namespace std;

double a[1000];

int main() {
    int n;
    cin >> n;
    double d = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        d += a[i];
    }
    double m = d / n;
    for (int i = 0; i < n; i++) {
        if (a[i] >= m) {
            cout << a[i] << " ";
        }
    }
    return 0;
}

// Time complexity: Best case: O(N), Worst case: O(N), Average case: O(N)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)