#include<iostream>
using namespace std;

int main(){
    int i=10, j=20, k;
       //10  //9  //19  //20   //9   //20  //9  //19 
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20
    cout<<"------------"<<endl;
    
    //a<<n -----------> a*2^n
    //a>>n -----------> a/2^n

    int x = 4;
    int y = x>>1;
    cout<<"y = "<<y<<endl;

    cout<<"------------"<<endl;
     
     int g=9;
     int d=3;
                //1   //0
     int m = x>d?true:false; ///ternary operator

     cout<<m<<endl;   
     
     cout<<"------------"<<endl;
     
     char ch = 'a';

     cout<<int(ch)<<endl;

     cout<<int(ch) + 3<<endl;
     
     cout<<"------------"<<endl;
     
     int n = 9;

     cout<<char(n)<<endl;
     cout<<int("shivam")<<endl;
    
    return 0;

}