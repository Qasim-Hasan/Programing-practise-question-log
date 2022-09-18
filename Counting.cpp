#include<iostream>
using namespace std;
int counting(int n){
    if(n==0){
        return 0;
    }else{
        cout << n << " ";
        counting(n-1);
    }
}
int main(){
int n;
cout << "Enter N: ";
cin >> n;
counting(n);
}