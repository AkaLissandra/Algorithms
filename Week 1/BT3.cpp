#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long r = 1;
    for (int i = 2; i <= n; i++) {
        r *= i;
    }
    cout << r;
    return 0;
}

// Time complexity: Best case: O(N), Worst case: O(N), Average case: O(N)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)