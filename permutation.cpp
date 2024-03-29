// permutation  순열
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {3,2,1};  //  배열일떄
    //sort(a, a+ sizeof(a)/ sizeof(a[0]));
    //sort(a, a+ 3);

//    vector<int> a = {1,2,3};
//    sort(a.begin(), a.end());

    do{
        for(int i : a) cout << i << " ";
        cout << '\n';

    //}while(next_permutation(a.begin(), a.end()));
    } while(next_permutation(a, a+3));
}


/*
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
 */
