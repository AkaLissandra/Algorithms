#include <iostream>
#include <numeric>
using namespace std;

void simplify(int &a, int &b) {
    int g = gcd(a, b);
    a /= g;
    b /= g;
}

int main() {
    int a, b;
    cin >> a >> b;
    simplify(a, b);
    cout << a << "/" << b;
    return 0;
}

// Time complexity: Best case: O(1), Worst case: O(log N), Average case: O(log N)
// Space complexity(Auxiliary Space): Best case: O(1), Worst case: O(1), Average case: O(1)