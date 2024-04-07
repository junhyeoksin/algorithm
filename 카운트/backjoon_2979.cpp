#include <bits/stdc++.h>
using namespace std;
/*
상근이는 트럭을 총 세 대 가지고 있다. 오늘은 트럭을 주차하는데 비용이 얼마나 필요한지 알아보려고 한다.
상근이가 이용하는 주차장은 주차하는 트럭의 수에 따라서 주차 요금을 할인해 준다.
트럭을 한 대 주차할 때는 1분에 한 대당 A원을 내야 한다. 두 대를 주차할 때는 1분에 한 대당 B원, 세 대를 주차할 때는 1분에 한 대당 C원을 내야 한다.
A, B, C가 주어지고, 상근이의 트럭이 주차장에 주차된 시간이 주어졌을 때, 주차 요금으로 얼마를 내야 하는지 구하는 프로그램을 작성하시오.

*/
// 도착한 시간 , 떠난 시간을 기반으로 카운팅 배열을 해야한다.
// 시각은 이상, 미만이다.
// 카운팅 배열

int A,B, C, a, b, cnt[104], ret;
 int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> C;     // 주차 요금 A, B, C 입력 받기

    for(int i = 0; i < 3; i++){
        cin >> a >> b;    // 트럭이 주차장에 도착한 시간과 떠난 시간 입력 받기
        for(int j = a; j < b; j++) {
            cnt[j]++;
            cout << "array" << j << "  :  "<< cnt[j] << "\n" ;
        }

    }
    // 주차 요금 계산
    for(int j = 1; j < 100; j++){   // 주차 가능한 최대 시간은 100분
        if(cnt[j]){
             if(cnt[j] == 1){
                 ret += A;
             }else if(cnt[j] == 2) {
                ret += B * 2;  // 두 대를 주차할 때의 요금
             }
            else if(cnt[j] == 3) {
                 ret += C * 3;  // 세 대를 주차할 때의 요금
             }
        }
    }
    cout << ret << "\n";
    return 0;
}




