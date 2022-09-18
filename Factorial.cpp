#include<iostream>
using namespace std;

int factorial(int n){
   if(n==0){
    return 1;
   }else{
    return factorial(n-1)*n;
   }
}
int main(){
int n,f;
cout << "Enter n: ";
cin >> n;
f=factorial(n);
cout << "Factorial of "<<n<<":";
cout << f;
}