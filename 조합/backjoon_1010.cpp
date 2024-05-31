#include <iostream>
using namespace std;

long long calculateCombination(int n, int m) {
    long long result = 1;
    int tmp = 1;
    for (int j = m; j > m - n; j--) {
        result *= j;
        result /= tmp;
        tmp++;
    }
    return result;
}

int main() {
    int test_case, n, m;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        cin >> n >> m;
        long long result = calculateCombination(n, m);
        cout << result << "\n";
    }
    return 0;
}
