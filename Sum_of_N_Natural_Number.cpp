//Sum of n natural numbers using recursion
//Head recursion
#include<iostream>
using namespace std;
int sumofNN(int n){
if(n==0){
    return 0;
}else{
    return sumofNN(n-1)+n;
}
}
int main(){
int n,sum;
cout << "Enter n: ";
cin >> n;

sum=sumofNN(n);

cout << "Sum: "<< sum;
}