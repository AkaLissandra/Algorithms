#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> b;
        sum += b;
    }
    cout << sum;
}

// Time complexity: Best case: O(N), Worst case: O(N), Average case: O(N)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)