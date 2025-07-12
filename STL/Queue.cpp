#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    queue<int>q;
    q.push(12);
    q.push(12);
    q.push(12);
    
   cout<<q.size()<<endl;
   cout<<q.back()<<endl;

   while (!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
}