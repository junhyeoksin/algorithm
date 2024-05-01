/*
    첫째 줄에는 두 개의 정수 N과 K가 한 개의 공백을 사이에 두고 순서대로 주어진다.
    첫 번째 정수 N은 온도를 측정한 전체 날짜의 수이다. N은 2 이상 100,000 이하이다.
     두 번째 정수 K는 합을 구하기 위한 연속적인 날짜의 수이다. K는 1과 N 사이의 정수이다.
    둘째 줄에는 매일 측정한 온도를 나타내는 N개의 정수가 빈칸을 사이에 두고 주어진다. 이 수들은 모두 -100 이상 100 이하이다.
*/

// 연속적인 K일의 온도의 합이 최대가 되는 값을 출력 :  구간합 prefix sum =>  psum[i] = psum[i - 1] + a[i];

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int  n, k, temp, psum[100001], ret = -100004;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); count.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> temp; psum[i] = psum[i -1] + temp;
    }
    for(int i = k; i <=n; i++){
        ret = max(ret, psum[i] - psum[i -k]);
    }
    cout << ret << "\n";
    return 0;
}