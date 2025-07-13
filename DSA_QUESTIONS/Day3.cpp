#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
    // QUESTION 7. CHECK THE STRING PALINDROME OR NOT........

    // string str ;
    // cin>>str;
    
    // string str1 = str;

    // int i=0;
    // int j=str.size()-1;

    // while (i<j)
    // {
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    //     i++;
    //     j--;
    // }
    
    // if(str == str1){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not a Palindrome"<<endl;
    // }

// }


// QUESTION 8. FIND THE SUM OF THE DIGITS OF A NUMBER........

// int main(){
//     int num;
//     cin>>num;

//     if(num <= 0){
//         cout<<"Please enter positive number"<<endl;
//         return 0;
//     }

//     int sum =0;
//     while(num != 0){
//         int d = num % 10;
//         sum +=d;
//         num /= 10;
//     }

//     cout<<sum;
// }


// QUESTION 9. FACTORIAL OF A NUMBER....


// int fact(int n){
//     if(n == 0 || n==1){
//         return 1;
//     }

//     return n * fact(n-1);
// }

// int main(){
//     int num ;
//     cin>>num;

//     cout<<fact(num);
// }


// QUESTION 10. MERGE TWO SORTED ARRAY......


vector<int>mergesort(vector<int>& arr1 , vector<int>& arr2){
    vector<int>merged;

    int i=0;
    int j=0;

    while(i < arr1.size() && j< arr2.size()){

        if(arr1[i] < arr2[j]){
            merged.push_back(arr1[i]);
            i++;
        }
        else{
            merged.push_back(arr2[j]);
            j++;
        }

    }

    while(i < arr1.size()){
        merged.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()){
        merged.push_back(arr2[j]);
        j++;
    }
return merged;

}

int main(){
    vector<int>arr1{1,3,5,7,9,11,90};
    vector<int>arr2{2,4,6,8,10,12};

    vector<int>merged = mergesort(arr1 , arr2);
 for(auto k:merged){
    cout << k <<" ";
 }

}