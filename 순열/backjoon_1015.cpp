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

    vector<pair<int, int>> arr_index;   //  [4, 2, 9]
    for (int i = 0; i < N; i++) {
        arr_index.push_back({arr[i], i});  //[(4, 0), (2, 1), (9, 2)]
    }

    sort(arr_index.begin(), arr_index.end());  //[(2, 1), (4, 0), (9, 2)]


    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        p[arr_index[i].second] = i;   // p[1] = 0 , p[0] = 1 , p[2] = 2
    }  // [1, 0, 2]


    for (auto a : p) {
        cout << a << ' ';
    }
     cout << '\n';
    return 0;
}
