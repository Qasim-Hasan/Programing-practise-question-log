//Qasim hasan
#include<iostream>
using namespace std;

int SumofArray(int *Arr,int size,int sum){
if(size<0){
return sum;
}
else{
sum=sum+Arr[size];
SumofArray(Arr,size-1,sum);
}
}

int main(){
int sum=0;
int Array[]={2,3,5,10,80};
cout << SumofArray(Array,5,sum);
    return 0;
}