#include <bits/stdc++.h>
using namespace std;

int A, B, N;
int main(){
    cin >> A >> B >> N;

    A = A % B; // 나눈 나머지 값
     for(int i = 0; i < N -1; i++ ){
        A = (A * 10 ) % B;    // 소수점 아래 N-1자리까지 나머지 구하기
     }

    int answer = (A * 10) / B;  // N번째 자리 구하기

    cout << answer ;
}
