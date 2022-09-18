#include<iostream>
using namespace std;

int power(int m,int n){
    if(n==0){
    return 1;
    }else{
 return power(m,n-1)*m;
    }
}
int main(){
int n,m,e;
cout << "Enter m power n:\n ";
cout << "\nm:";
cin >> m;
cout << "\nn:";
cin >> n;
e=power(m,n);
cout << "\nExponent function of "<<m<<"power"<<n<<"\n";
cout << e;
}