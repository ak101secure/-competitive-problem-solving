#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    
    for(int i = 2; i<sqrt(n);i++){
        if(n%i ==0){
            return false ; 
        }
    }
    return true ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    cout<<prime(n)<<endl;

}