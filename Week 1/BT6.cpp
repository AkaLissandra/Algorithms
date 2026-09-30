#include <iostream>
using namespace std;

int a[1000];

void removeNumber(int n) {
    int k;
    cin >> k;
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void addNumber(int n) {
    int y, m;
    cin >> y >> m;
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    for (int i = 0; i <= n; i++) {
        cout << a[i] << " "; 
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    removeNumber(n);
    addNumber(n);
    return 0;
}

// a)
// Time complexity: Best case: O(1), Worst case: O(N), Average case: O(N)
// Space complexit(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)

// b)
// Time complexity: Best case: O(1), Worst case: O(N), Average case: O(N)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)