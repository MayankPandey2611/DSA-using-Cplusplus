#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


    // QUESTION 21 . CHECK IF A NUMBER IS A PERFECT SQUARE OF NOT.......................

// int main(){

//     int n;
//     cin>>n;

//     bool check = false;

//     for(int i=1; i*i <= n; i++){
//         if( i*i == n){
//             check = true;
//         }
//     }
//     if(check){
//         cout<<"perfect square"<<endl;
//     }
//     else{
//         cout<<"Not a Perfect square"<<endl;
//     }
// }


// QUESTION 22 . FIND THE MAJORITY ELEMENT FROM AN ARRAY............
// MAJORITY => ELEMENT OCCURS MORE THAN OR EQUAL TO THE HALF OF SIZE OF ARRAY...
// METHOD 1.

// int main() {
//     vector<int> arr{1,2,1,2,1,1,1};
//     unordered_map<int, int> freq;
//     int n = arr.size();
    
//     for (int num : arr) {
//         freq[num]++;
//         if (freq[num] >= n/2) {
//             cout << "Majority element: " << num << endl;
//             return 0;
//         }
//     }

    
//     cout << "No majority element found." << endl;
//     return 0;
// }


// METHOD 2. (MOORE VOTING ALGORITHM.....)

// int findMajorityElement(vector<int>& arr) {
//     int count = 0, candidate = -1;

//     for (int num : arr) {
//         if (count == 0) {
//             candidate = num;
//         }
//         count += (num == candidate) ? 1 : -1;
//     }

//     // Verify candidate is actually majority
//     count = 0;
//     for (int num : arr) {
//         if (num == candidate) count++;
//     }

//     return (count > arr.size() / 2) ? candidate : -1;
// }

// int main() {
//     vector<int> arr{1,1,1,2};
//     int result = findMajorityElement(arr);
    
//     if (result != -1)
//         cout << "Majority element: " << result << endl;
//     else
//         cout << "No majority element found." << endl;

//     return 0;
// }


// QUESTION 23. FIND THE MOST REPEATING ELEMENT OF THE ARRAY..............

// int main(){
//     vector<int>arr{1,2,3,4,5,0};

//     unordered_map<int,int>freq;

//     for(int num : arr){
//         freq[num]++;
//     }

//     int element = arr[0];
//     int elecount = 0;

//     for(auto it : freq){
//         int key = it.first;
//         int val = it.second;
//         if(val >= elecount){
//             elecount = val;
//             element = key;
//         }
//     }
//     if(elecount < 2){
//         cout<<"No RE in an array";
//         return 0;
//     }
//     cout<<element<<" is the MRE with the count of = "<<elecount;
// }


// QUESTION 24. FIND THE MAX AND MIN ELEMENT FROM THE ARRAY...........

// int main(){
//     vector<int>arr{12,9,0,2};

//     int max = INT_MIN;
//     int min = INT_MAX;

//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//         else if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     cout<<"MAX = "<<max<<" MIN = "<<min;
// }

// QUESTION 25. SORT AN ARRAY USING BUBBLE SORT................

void bs(vector<int>& arr){
    
}

int main(){
    vector<int>arr{9,8,3,2,1,0,3,1,4,90};

    bs(arr);
    for(auto k:arr){
        cout<<k<<" ";
    }
}