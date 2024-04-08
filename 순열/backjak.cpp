#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end()); // 배열을 오름차순으로 정렬

    int max_sum = 0;

    // 투 포인터 알고리즘을 사용하여 합을 계산
    for (int i = 0; i < N - 2; i++) {
        int left = i + 1;
        int right = N - 1;

        while (left < right) {
            cout << " cards   " << cards[i] << " :: "<< "\n";
            cout << " left  " << cards[left] << " :: "<< "\n";
            cout <<  " right  " << cards[right] << " :: "<< "\n";
            int sum = cards[i] + cards[left] + cards[right];
            cout << "sum ::" << sum << " :: "<< "\n";
            if (sum <= M) {
                max_sum = max(max_sum, sum);
                left++; // 합이 M보다 작으면 left를 증가시켜 더 큰 합을 구함
            } else {
                right--; // 합이 M을 넘으면 right를 감소시켜 더 작은 합을 구함
            }
        }
    }

    cout << max_sum << endl;

    return 0;
}


/*
//  배열 선언
int cnt;
int arr[cnt];
C++에서는 배열의 크기를 변수로 지정하여 동적으로 배열을 선언하는 것은 허용되지 않음.
대신에, 동적으로 배열을 선언하기 위해서는 동적 메모리 할당을 사용해야한다.
 // 배열 선언 (동적 할당)
int *arr = new int[cnt];
// 혹은 vector 사용해야함
vector<int> arr(cnt);

*/


// vector 사용한 순열
// void printV(vector<int> &v){
//      for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//      }
//      cout << "\n";
// }
// int main(){

//     int a[3] = {1,2,3};
//     vector<int> v;
//     for(int i = 0; i < 3; i ++ ) v.push_back(a[i]);
//     do{
//         printV(v);
//     }while(next_permutation(v.begin(), v.end()));
//     return 0;
// }