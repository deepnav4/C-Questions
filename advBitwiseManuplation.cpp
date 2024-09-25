#include <iostream>
using namespace std;

// Check Number is Even or odd

// bool isEven(int n){
//     return ((n & 1));
// }

// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     isEven(n) ? cout << "Odd" : cout << "Even";
//     return 0;
// }





// Check No is power of 2 or not

bool isEven(int n){
    return ((n)&(n-1));
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    isEven(n) ? cout << "Not a Power Of 2" : cout << "Power of 2";
    return 0;
}








//Left Shift (<<) == Multipliaction
//Right Shift(>>) == Divison

// int main(){
//     int num;
//     cout<<"Enter a Number : ";
//     cin>>num;
//     cout<<"Multipliaction by 2 by 1 left shift :"<<(num<<1) <<"\n";
//     cout<<"Divison by 2 by 1 right Shift :"<<(num>>1) <<"\n";
    
//     cout<<"Multipliaction by 2 by 2 left shift :"<<(num<<2) <<"\n";
//     cout<<"Divison by 2 by 2 right Shift :"<<(num>>2);
// }




