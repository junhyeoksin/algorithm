// 2309번  일곱 난쟁이
/**
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다. 일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.
아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.
아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.
*/

// 순열과 조합으로 모두 가능하다.
// 재귀함수로도 구현 가능 .
#include<bits/stdc++.h>
using namespace std;

// 순열
int a[] = {20,7,23,19,10,15,25,8,13};
//int a[9];
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    sort(a, a+9);

    do{
        int sum =0;
        for(int i =0; i < 7; i++){
            sum += a[i];
        }
        if(sum == 100)break;
    }while(next_permutation(a, a+9));
    for(int i = 0; i< 7; i++){
        cout << " " << a[i] << "\n";
    }
    return 0;
}

