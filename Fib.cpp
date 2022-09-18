#include<iostream>
using namespace std;
int fib(int n){
    int f;
if(n<=1){
    return n;
}else{
    f=fib(n-1)+fib(n-2);
}
return f;
}
int main(){
int n=8,f;
f=fib(n);
cout << f;
}