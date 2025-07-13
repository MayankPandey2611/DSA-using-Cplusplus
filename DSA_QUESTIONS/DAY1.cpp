#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main(){

    // QUESTION 1. FIND MAX ELEMENT...
    // vector<int>v{21,3,47,8,9,10,20};

    // int max = v[0];

    // for(int i=0; i<v.size(); i++){
    //     if(v[i] > max){
    //         max=v[i];
    //     }
    // }

    // cout<<max;



    // QUESTION 2. COUNT EVEN AND ODD NUMBERS IN LIST....
    // list<int>l{12,34,8,9,7,6,1,0,8,5};

    // int evencount =0;
    // int oddcount =0;
    // int zero = 0;

    // for(int i : l){
    //     if(i == 0){
    //         zero++;
    //     }
    //     else if( i % 2 == 0){
    //         evencount++;
    //     }
    //     else{
    //         oddcount++;
    //     }
    // }
    // cout<<"Even :"<<evencount<<endl;
    // cout<<"odd :"<<oddcount<<endl;
    // cout<<"zero :"<<zero<<endl;
    

    // BY USING ITERATOR....

    // list<int>::iterator it;
    // for(it = l.begin() ; it != l.end(); ++it){
    //     if(*it == 0){
    //         zero++;
    //     }
    //     else if(*it % 2==0){
    //         evencount++;
    //     }
    //     else{
    //         oddcount++;
    //     }
    // }

    //  cout<<"Even :"<<evencount<<endl;
    // cout<<"odd :"<<oddcount<<endl;
    // cout<<"zero :"<<zero<<endl;




    // QUESTION 3. REVERSE A GIVEN STRING......

    // string str = "mayank";

    // int i= 0;
    // int j = str.size()-1;

    // while(i<j){
    //     swap(str[i],str[j]);
    //     i++;
    //     j--;
    // }
    
    // cout<<str;



}

