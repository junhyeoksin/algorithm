// 조합

#include <bits/stdc++.h>
using namespace std;

// 재귀함수를 사용한 조합  : 5 개 중에서 3개를 뽑는다.
int n = 5, k = 3,
//a[5] = {1,2,3,4,5};
a[5] = {5,6,7,8,9};
void print(vector<int> b){
    for(int i : b) cout << i << " ";
    cout << '\n';
}

void combi(int start, vector<int> b){
    if(b.size() == k ){   // b.size() 가 k 번 뽑혔을 경우
        print(b);
        return ;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
}

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}
