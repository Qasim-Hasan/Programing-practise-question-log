#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){//base condition
    return n;
    }
    else{//general condition
        return fib(n-1)+fib(n-2);//
    }
}
int main(){
    int n=8;
    for(int i=1; i<n; i++)
    {
    cout << fib(i)<<" ";
    }
    getchar();
}