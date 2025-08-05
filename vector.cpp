#include<bits/stdc++.h>
using namespace std; 

void vectorPrint(vector<int>vect){

    for(auto x : vect){
        cout<<x<<" ";
    }
    cout<<endl;

}

void VectorcharPrint(vector<char>charVect){

    for(auto x : charVect){
        cout<<x<<' ';
    }
}


int main(){
    
    vector<int>v;

    v.push_back(23);
    v.push_back(33);
    v.push_back(22);
    v.push_back(54);


    if(v.size() ==0){
        cout<<"is empty"<<endl;
    }
    else{
        for(auto x : v){
            cout<<x<<endl;
        }
    }


    return 0;
}