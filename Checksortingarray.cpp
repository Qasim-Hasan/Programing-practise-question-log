//Qasim Hasan
#include<iostream>
using namespace std;
bool sort(int *arr,int size){
if(size==0 || size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}else{
    bool result = sort(arr+1,size-1);
    return result;
}
}
int main(){
    int size=5;
    int array[]={2,4,6,8,9};
    bool ans = sort(array,size);
    if(ans){
        cout << " Array Sorted";
    }else{
        cout << " Array Not Sorted";
    }
    return 0;
}