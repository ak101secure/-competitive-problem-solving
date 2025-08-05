#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n <= 0) return 0;
    return n + sum(n - 1);
}

int sum_recursion(int n){
    
    if(n ==1){
        return 1 ;
    }
    else if (n == 0){
        return 0 ;
    }
    else{
        return n + sum(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout<<sum_recursion(n)<<endl;
    return 0;
}
