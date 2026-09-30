#include <iostream>
using namespace std;

int a[1000];

void sort(int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

// Time complexity: Best case: O(N), Worst case: O(N^2), Average case: O(N^2)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)