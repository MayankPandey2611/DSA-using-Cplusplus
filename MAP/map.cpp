//-----------------------------------------------MAP INTRODUCTION-----------------------------------------------------#
//  MAP IS CALLED ASSOCIATIVE CONTAINER..
// IT IS HAVING KEY AND VALUE PAIR..(KEY VALUE CAN BE GIVEN BY USER || KEY IS UNIQUE)
// IT STORES THE DATA IN ASCENDING ORDER BY DEFAULT....
// IT IS ALSO CALLED SELF BALANCE BINARY SEARCH TREE.
// THERE ARE ORDER MAP AND UNORDERED MAP...
// KEY ALWAYS BE UNIQUE BUT VALUES CAN BE DUPLICATE....
// IN UNORDERED MAP DATA IS NOT ARRAGED IN ASCENDING ORDER BY DEFAULT....

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


// int main(){
//     map<int,string>m;
//     unordered_map<int,string>m;

//     //-------------------------------------------(4) METHODS OF INSERTION IN MAP.....


//     m[99];
//     m[101]="mayank";
//     m.insert({102,"rohan"});
//     m.insert(make_pair(103,"piyush"));
// for(auto p:m){
//         cout<<p.first<<","<<p.second<<"\t";
//     }
//     cout<<endl;


//     //---------------------------------------------METHODS OF DELETION.......

//     auto j = m.find(102);
//     if (j != m.end()){
//         m.erase(j);
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     for(auto p:m){
//         cout<<p.first<<","<<p.second<<"\t";
//     }
//     cout<<endl;

//     //----------------------------------------------inbulit functions 

//     cout<<m.max_size();
    
// }

//QUESTION 1. COUNT THE FREQUENCY OF THE VALUES OF MAP....

int main(){

    map<string,int>m;
    int n;
    cin>>n;

   string s;

    for(int i=0; i<n; i++){
        cin>>s;
        m[s]++;
    }
    

    for(auto p:m){
        cout<<p.first<<"="<<p.second<<"\t";
    }

}