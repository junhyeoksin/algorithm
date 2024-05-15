#include <bits/stdc++.h>
using namespace std;
/**
    문제 : combination 조합 , nC2
    예제 입력:
    n:  6
    m: 9
    2 7 4 1 5 3

    예제 출력: 2

    => 합이 m 인 경우의 수를 구하는 문제
**/



int n, m, a[15001], cnt;

// 2중 fot문을 사용하지 않고 투 포인트로 시간복잡도를 줄이고자 사용
int twoPointCountWithSum(int arr[], int n, int target){
    sort(arr, arr + n);
    int left = 0, right = n - 1;
    int count = 0;
    while (left < right) {
           int sum = arr[left] + arr[right];
           if (sum == target) {
               count++;
               left++;
               right--;
           } else if (sum < target) {
               left++;
           } else {
               right--;
           }
       }

       return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i<n; i++) cin >> a[i];
    if(m > 200000) cout << 0 << '\n';
    else {
//        for(int i = 0; i < n; i++){
//            for(int j = i + 1; j < n; j++){
//                if(a[i] + a[j] == m) cnt++; // 두 합이 m 과 일치하는지 확인하고 카운트 함
//            }
//        }
        int pairsCount = twoPointCountWithSum(a, n, m);
        cout << "Pairs count with sum " << m << ": " << pairsCount << endl;
        cout << cnt << "\n";
    }

}


