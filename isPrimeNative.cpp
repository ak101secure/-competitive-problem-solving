#include<bits/stdc++.h>
using namespace std ; 

bool isprimeNative(int n){

    for(int i = 0;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true ; 
    
}

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    if(isprimeNative(n)){
        cout<<"it is primie"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }

    return 0; 
}