#include<iostream>
using namespace std; 

int main(){
    int i =1;
      //first i++ = 1,
      // now i become 2 due to ++ operator it means i == 2
      // ++i in  i become 3 it means i == 3
       //1   //3
    i = i++ + ++i;
    
    cout<<i<<endl; //4
    return 0;
    
}