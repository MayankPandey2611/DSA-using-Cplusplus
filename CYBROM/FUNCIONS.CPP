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



// 11. CHECK PRIME NUMBER.(RETURN-TYPE WITH PARAMETERS)

// string prime(int num){
// int count;
//     for(int i=1; i<=num; i++){
//         if(num%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         return "prime";
//     }
//     else{
//         return "not prime";
//     }
// }


// int main(){
//     cout<<prime(7);
// }

// 12.  ARRANGE THE ARRAY IN SORTED ORDER.(NON-RETURN TYPE WITH PARAMETERS)

// void sorted(int arr[],int n){


//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 int temp= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[]={3,5,2,49,38,8};

//     sorted(arr,6);
// }



// 13. ROTATE THE ARRAY K TIMES.(NON-RETURN TYPE WITH PARAMETERS)



// void rotate(int arr[], int n, int s, int e) {
//     while (s < e) {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }

// void rotateArray(int arr[], int n, int k) {
//     // Handle cases where k is greater than n
//     k = k % n;
//     if (k < 0) {
//         k += n; // Handle negative rotations
//     }

//     // Step 1: Reverse the entire array
//     rotate(arr, n, 0, n - 1);
//     // Step 2: Reverse the first k elements
//     rotate(arr, n, 0, k - 1);
//     // Step 3: Reverse the remaining n-k elements
//     rotate(arr, n, k, n - 1);
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int k; 
//     cin >> k;

//     rotateArray(arr, 5, k);
    
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }



//14. CHECK PRIME NUMBER IN 0(ROOT OF N) TIME COMPLEXITY. (RETURN-TYPE WITH PARAMETERS)

// int  Isprime(int num){
//     if(num<=1){
//         cout<<"False";
//         return 0;
//      }

//      for(int i=2; i*i<num; i++){
//         if(num%i==0){
//             cout<<"False";
//             return 0;
//         }
//      }
    
//         cout<<"True";
  
// }


// int main(){
//     int num;
//      cin>>num;

//    Isprime(num);
// }



// 15. SUM OF ALL PRIME NUMBERS FROM AN ARRAY.

// bool isprime(int num){
//     if(num<=1){
      
//         return false;
//     }

//     for(int i=2; i*i<=num; i++){
//         if(num%i==0){
//             return false;
//         }
//     }

//   return true;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
// int sum=0;


// for(int i=0; i<n; i++){
//     if(isprime(arr[i])){
//         sum+=arr[i];
//     }
// }

// cout<<sum;
// }


// 16. SORT AN ARRAY USING SWAP/FUNTION.

void sortarray(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   }

void showarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={14,2,3,1,5};

sortarray(arr,sizeof(arr)/sizeof(arr[0]));
showarray(arr,sizeof(arr)/sizeof(arr[0]));

}