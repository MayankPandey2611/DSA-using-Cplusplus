#include <iostream>
#include <cctype>

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


int main() {
    vector<int> arr{1, 2, 1, 3,4,5,5,5};
    unordered_map<int, int> freq;
    int n = arr.size();
    
    for (int num : arr) {
        freq[num]++;
        if (freq[num] >= 2) {
            cout << "Majority element: " << num << endl;

            // return 0;
        }
    }

    for(auto k : freq){
        cout<<k.first<<"="<<k.second<<" ";
    }
    cout << "No majority element found." << endl;
    return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;

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
//     vector<int> arr{1, 2, 1, 3, 1, 4, 5, 1};
//     int result = findMajorityElement(arr);
    
//     if (result != -1)
//         cout << "Majority element: " << result << endl;
//     else
//         cout << "No majority element found." << endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 1, 3, 2, 1, 8, 9, 7, 6, 4, 3, 5, 4, 6};
//     unordered_map<int, int> freq;

//     // Count frequencies
//     for (int num : arr) {
//         freq[num]++;
//     }

//     // Find the mode
//     int mode = arr[0];
//     int maxFreq = 0;
    
//     for (auto [key, val] : freq) {
//         if (val > maxFreq) {
//             maxFreq = val;
//             mode = key;
//         }
//     }

//     cout << "Mode (most frequent element): " << mode << " (occurs " << maxFreq << " times)" << endl;
//     return 0;
// }
