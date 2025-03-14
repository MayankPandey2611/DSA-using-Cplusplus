#include<iostream>
using namespace std;

//1.CALL BY REFERENCE(&)

// DIFFERENCE BETWEEN POINTER AND REFERENCE.
// 1. POINTER SHOULD BE DECLARED BY NULL AND REFERENCE BY VARIABLE .
// 2. POINTER STORES ADDRESS OF VARIABLE IN SEPARATE MEMORY AND REFRENCE STORES IN AN VARIABLE ITSELF.


//EXAMPLE=> CALL BY VALUE.

// int main(){
// int a=10;
// int *ptr=&a;

// cout<<ptr;   //IT PRINTS ADDRESS OF THE VARIABLE.
// cout<<endl;
// cout<<&a;   //IT PRINTS ADDRESS OF THE VARIABLE.
// cout<<endl;

// cout<<*ptr;  //IT PRINTS THE VALUE OF  VARIABLE.
// cout<<endl;
// cout<<&ptr;   //IT PRINTS THE ADDRESS OF THE POINTER.
// cout<<endl;




// }



//2. CALL BY ADDRESS.

// int plusone(int *num){
//     *num=*num+1;
//     return *num;
// }

// int main(){
//     int a=10;
//     cout<<plusone(&a)<<endl;
//     cout<<a;
// }


//3. DEFAULT ARGUMENT.

// int sum(int num1=0, int num2=0){
//     return num1+num2;
// }

// int main(){
//     cout<<sum(5);
// }



// 4. FUNCTION OVERLOADING =>  FUNCTION WITH SAME NAME AND DIFFERENT PARAMETERS.

// int sum(){
//     return 0;
// }

// int sum(int num){
//     return num*num;
// }

// int sum(int num1, int num2){
//     return num1+num2;
// }


// int main(){
//     cout<<sum()<<endl;
//     cout<<sum(5)<<endl;
//     cout<<sum(1,8);

// }



// 5.CREATE FUNCTION TO SWAP TWO NUMBERS USING CALL BY VALUE AND CALL BY REFERENCE.

// void swapbyvalue(int num1, int num2){

//  int temp= num1;
//  num1=num2;
//  num2=temp;

//  cout<<num1<<","<<num2;

// }

// void swapbyreference(int &a, int &b){
//     int temp= a;
//     a=b;
//     b=temp;
//     cout<<a<<","<<b;
// }

// int main(){
//     int a=3;
//     int b=4;
//     // cin>>a>>b;
//    swapbyvalue(a,b);
//    cout<<endl;
//    swapbyreference(a,b);

// }

