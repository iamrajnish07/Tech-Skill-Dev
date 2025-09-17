#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the rows : ";
    cin>>n;
    int count = 2*n-1;
    for(int i=0; i<n;i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<count; k++){
            cout<<"*";
        }
        count = count-2;
        cout<<endl;
    }
    return 0;
 }