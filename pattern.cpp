#include<iostream>
using namespace std;
int main(){
    int row=5;
    int col=4;

    for(int i=1; i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;    
    }
    cout<<"--------------";

    return 0;

}