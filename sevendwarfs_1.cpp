// 2309번  일곱 난쟁이
/**
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다. 일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.
아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.
아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.
*/

// 순열과 조합으로 모두 가능하다.
// 재귀함수로도 구현 가능
#include<bits/stdc++.h>
using namespace std;
int a[9];
int n = 9; int r = 7;
void solve(){
    int sum = 0;
    for(int i = 0; i < r; i++){   // 7개에 해당하는 것을 더함
        sum += a[i];
    }
    if(sum == 100){
        sort(a, a+7);  // 오름차순
        for(int i =0; i < r; i++) cout << a[i] << " \n";
        exit(0);  // main 함수 종료
    }
}
//  재귀 함수
void makePermutation(int n, int r, int depth){
    if(r == depth){
        solve();
        return;
    }
    for(int i = depth; i < n; i++){
        swap(a[i], a[depth]);
        makePermutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
    return;
}

int main(){
    for(int i = 0;  i < n; i++){
        cin >> a[i];
    }
    void makePermutation(int n, int r, int depth);
    return 0;
}



