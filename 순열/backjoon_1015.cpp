#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> arr_index;
    for (int i = 0; i < N; i++) {
        arr_index.push_back({arr[i], i});
    }

    sort(arr_index.begin(), arr_index.end());

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        p[arr_index[i].second] = i;
    }

    for (auto a : p) {
        cout << a << ' ';
    }
     cout << '\n';
    return 0;
}
