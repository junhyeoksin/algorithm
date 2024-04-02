#include <bits/stdc++.h>
using namespace std;

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

/*
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
 */

// Array 사용한 순열   : 정적배열 Array를 사용했기 때문에 vector와 같은 begin(), end()를 쓸 수 없다,
// int main(){
//     int b[] = {1,2,3};
//     do{
//         for(int i : b) cout << i << " ";
//         cout << '\n';
//     }while(next_permutation(b, b + 3));  // 열의 끝 다음의 주소인 b  + 3
//     // while(next_permutation(&a[0], &a[3])) // 해당 주서값을 가리켜서 지정할 수도  있다.
//
// }


// 재귀를 통한 순열
int a[3] = {1,2,3};
int n = 3, r= 3;
void print(){
    for(int i = 0; i < r; i ++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth){
    if(r == depth){
        print();
        return ;
    }
    for(int i = depth; i < n; i++){
    cout << i << " : " << depth << "를 바꾼다!\n";
        swap(a[i], a[depth]);
        makePermutation(n,r,depth + 1);
        cout << i << " : " << depth << "를 다시 바꾼다!\n";
        swap(a[i], a[depth]);
     }
 }

int main(){
    makePermutation(n,r,0);
    return 0;
}