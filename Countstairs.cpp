#include<iostream>
using namespace std;
int countstair(int n){
    int a;
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

         a = countstair(n-1)+countstair(n-2);
         return a;
    
}
int main(){
    int n=5,ans;
    ans=countstair(n);
    cout << ans;
}