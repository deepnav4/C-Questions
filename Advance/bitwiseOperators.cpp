#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Ques 1  : Check a number is odd or even without Modulo Operator 
// Do and with 1 even number give 0 when we and it with 1  whereas odd gives 1: 
int main(){
    int num;
    cout<<"Enter a number that you want to check Even or Odd : ";
    cin>>num;
    (num&1)==1 ? cout<<"Number is Odd" : cout<<"Number is Even";
    return 0;
}



// Question 2 : Check the Number given is power of 2 or not: 
// Do and with number that you want to check and preceding number eg. 8 & 7 gives 0 and 16 & 15 gives 0 whereas 9 and 8 does not gives zero
// It edge case is zero that is handled in outer ternary operator 
int main(){
    int num;
    cout<<"Enter a Number that you want to check that it is of power of 2 or not : ";
    cin>>num;
    ((num == 0 )? (cout<<"Not a power of 2") : ((num & (num-1)) == 0? (cout<<"Power of Two") : (cout<<"Not a Power of two")));
    return 0;
}



//Question 3 : Playing the Bits of Number
//(i) : Check the Kth bit is set or not (means 1 or not) ? 
//Just do and with 2^k then if you get num > 0 than bit is set othw bit is not set;
int main() {
    int num;
    int k; // Bit that you want to check
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to check (0-indexed): ";
    cin >> k;
    (num & (1 << k)) > 0 ? cout << k << " Bit is Set" : cout << k << " Bit is Not Set";
    return 0; 
}



//(ii) : Toggle the Kth bit (means 1 to 0 and 0 to 1)  
//Just do zor with 2^k then that partricular bit is toglled and rest remain same : 
int main() {
    int num;
    int k; 
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to toggle (0-indexed): ";
    cin >> k;

    // Print original number in binary
    int arr[20], i = 0;
    int temp = num; // Use a temporary variable to keep the original number

    while (temp != 0) {
        arr[i] = temp % 2; 
        temp >>= 1;       
        i++;
    }
    cout << "Original binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j]; 
    }
    cout << endl;

    // Toggle the k-th bit
    num ^= (1 << k);
    i = 0; 
    temp = num;

    while (temp != 0) {
        arr[i] = temp % 2; 
        temp >>= 1;      
        i++;
    }
    cout << "Modified binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j]; 
    }
    cout << endl;
    return 0;
}




//(iii) : Set the Kth bit (means 0 to 1)  
//Just do and with 2^k then that partricular bit is seted and rest remain same : 
int main() {
    int num;
    int k; 
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0-indexed): ";
    cin >> k;

    int arr[20], i = 0;
    int temp = num;
    while (temp != 0) {
        arr[i] = temp % 2; 
        temp >>= 1;        
        i++;
    }
    cout << "Original binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j]; 
    }
    cout << endl;

    num |= (1 << k); 

    i = 0; 
    temp = num; 
    while (temp != 0) {
        arr[i] = temp % 2; 
        temp >>= 1;        
        i++;
    }
    cout << "Modified binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j]; 
    }
    cout << endl;
    return 0;
}




// Question 4 : Swap two Numbers using bitwise operator
// we have already discussed 2 methods(using temp var and using airthmetic operator) we need to swap two numbers with only bitwise operator
int main() {
    int x,y;
    cout<<"Enter the values of x : ";
    cin>>x;
    cout<<"Enter the values of y : ";
    cin>>y;
    cout<<"The values before swap of x and y is : " <<x <<" and "<<y <<"\n";
    x = x ^ y;  //[ x = x^y  and  y = y]
    y = x ^ y;  //[ x = x^y  and  y =x^y^y = x]
    x = x ^ y;  //[ x = x^y^x = y and y = x]
    cout<<"The values before swap of x and y is : " <<x <<" and " <<y;
}





// Question 5 : Toggle the varaible value bw two numbers using bitwise operator
//Means : 5 is stored in X and you need to toggle it to 10 and if x is 10 then toggle it into 5
int main() {
    int x = 5; // Initial value
    cout << "Initial value: " << x << endl;
    x = (x^5^10); // This will toggle between 5 and 10
    cout << "Toggled value: " << x << endl;
    x = (x^5^10); // Toggle back to 5
    cout << "Toggled back to: " << x << endl;
    return 0;
}




// 2 Important  identities used in Competative Programming
// A+B = (A^B) + 2(A&B)
// A+B = (A|B) + (A&B)
