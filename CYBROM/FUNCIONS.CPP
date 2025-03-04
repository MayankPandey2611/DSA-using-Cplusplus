#include <iostream>
using namespace std;


// (VOID KE SATH COUT OR INT KE SATH RETURN.)


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
// int main(){
//     int num;
//     cin>>num;
//     cout<<factorial(num);
// }


// 6. FABONACCI SERIES(NON-RETURN TYPE WITH PARAMETERS.)

// void fabonacci(int num){
//     int first=0; 
//     int second=1;
//     int next;

//     cout<<first<<" "<< second<<" ";
//     for(int i=3; i<=num; i++){
//         next=first+second;
//         first=second;
//         second=next;
//         cout<<next<<" ";
//     }
// }

// int main()
// {
    
// int num;
// cin>>num;
// fabonacci(num);

// }


// 7. REVERSE AN ARRAY USING FOR LOOP.(NON-RETURN TYPE WITH PARAMETERS)

// void reverse(int arr[],int n){

//     int j=n-1;

//     for(int i=0; i<j; i++){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         j--;
//     }
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// }
// int main()
// {
    
// int arr[]={1,2,3,4,5};
// reverse(arr,5);

// }




// 8. CHECK THE number IS PALINDROME OR NOT.(NON-RETURN TYPE WITH PARAMETERS)

// void palindrome(int num){
//     int a=num;
//     int rev=0;
//     while(num>0){
//         int digit = num%10;
//         rev=rev*10+digit;
//         num=num/10;
//     }
//     if(rev==a){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not";
//     }
// }

// int main()
// {
    
// int num;
// cin>>num;
// palindrome(num);

// }


// 9. CHECK PALINDROME FOR AN ARRAY.(RETURN-TYPE WITH PARAMETERS)

// int palindrome(int arr[],int n){
// int i=0;
// int j=n-1;

//     while(i<j){
//         if(arr[i]!=arr[j]){
//             cout<<"Not palindrome.";
//            return 0;
//         }
//         i++;
//         j--;
//     }
//     cout<<"Palindrome.";
// }


// int main(){
//     int arr[]={1,2,3,2,1};
//     palindrome(arr,5);
// }


// 10.FIND KTH LARGEST ELEMENT FROM AN ARRAY.

// int largest(int arr[],int k,int n){


//     for(int i=0; i<k; i++){
//         for(int j=i+1; j<n; j++){
//         if(arr[j]>arr[i]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// return arr[k-1];
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int k;
//     cin>>k;

//     cout<<largest(arr,k,5);
    
// }



