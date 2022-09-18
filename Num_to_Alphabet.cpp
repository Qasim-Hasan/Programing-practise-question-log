#include<iostream>
using namespace std;
int sayname(int choice){
    switch(choice){
        case 0:
        cout << "Zero ";
        break;
        case 1:
        cout << "One ";
        break;
        case 2:
        cout << "Two ";
        break;
        case 3:
        cout << "Three ";
        break;
        case 4:
        cout << "Four ";
        break;
        case 5:
        cout << "Five ";
        break;
        case 6:
        cout << "Six ";
        break;
        case 7:
        cout << "Seven ";
        break;
        case 8:
        cout << "Eight ";
        break;
        case 9:
        cout << "Nine ";
        break;
    }
    return 0;
}

int TranslateNumbertoAlphabets(int n){
    int r;
if(n==0){
    return 1; //Base Condition
}else{
    r=n%10;
    TranslateNumbertoAlphabets(n/10);
    sayname(r); //General Condition
}
}

int main(){
int num;
cout << "Enter an integer number: ";
cin >> num;
cout << endl;
TranslateNumbertoAlphabets(num);
}