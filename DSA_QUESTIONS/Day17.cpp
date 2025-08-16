#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<stack>
#include<bitset>
#include<stack>
using namespace std;

int main(){
    int num;
    cin>>num;

    int n = num;
    int i = -1;
    int j = 0;

    while(n > 0){
        if(n % 10 == 6){
            i =j;
        }
        n /= 10;
        j++;
    }

    if(i == -1) cout<<num;
    else{
        cout<<num + 3 * pow(10,i);
    }
}