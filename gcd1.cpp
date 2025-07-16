#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int result ; 
    result = min(a,b);

    while(result > 0){
        if(a % result == 0 && b % result ==0){
            return result ; 
        }
        result --;
    }

    return -1;
}
int main(){

    int a, b;cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    
    return 0;
}
