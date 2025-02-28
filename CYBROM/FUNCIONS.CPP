#include <iostream>
using namespace std;

//1. NON-RETURN TYPE WITH PARAMETERS.

// void sum(int a, int b){
//     cout<<a+b;
// }

//2. NON-RETURN TYPE WITHOUT PARAMETERS.

// void name(){
//     cout<<"Mayank";
// }

//3. RETURN TYPE WITHOUT PARAMETERS.

// string name(){
//     return "Mayank";
// }


//4. RETURN TYPE WITH PARAMETERS.

// int multiply(int a, int b){
//     return a*b;
// }


// 5. FACTORIAL OF A NUMBER.(RETURN TYPE WITH PARAMETER.)

// int factorial(int num){
//     int ans=1;  
//     for(int i=1; i<=num; i++){
//         ans*=i;
//     }
//     return ans;
// }


// 6. FABONACCI SERIES(NON-RETURN TYPE WITH PARAMETERS.)

void fabonacci(int num){
    int first=0; 
    int second=1;
    int next;

    cout<<first<<" "<< second<<" ";
    for(int i=3; i<=num; i++){
        next=first+second;
        first=second;
        second=next;
        cout<<next<<" ";
    }
}
int main()
{
 int num;
 cin>>num;

 fabonacci(num);
}