//Qasim Hasan
#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int data){
    if(size==0){
        return false;
    }
    if(arr[0]==data){
        return true;
    }else{
        bool ans=LinearSearch(arr+1,size-1,data);
        return ans;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int data;
    cout << "Enter the data to check if it exist in the Array:";
    cin >> data;
    bool ans=LinearSearch(arr,size,data);
    if(ans){
        cout << "Data exist in Array";
    }else{
        cout << "Data Do not exist in Array";
    }
    return 0;
}