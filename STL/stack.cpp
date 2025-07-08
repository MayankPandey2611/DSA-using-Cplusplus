#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;



// class cybrom{
//     public:
//     // POINTER TYPE ARRAY..
//     int *arr;
//     // SIZE OF ARRAY AND STACK POINTER...
//     int n , top;

//     // CONSTRUCTOR...
//     cybrom(int size){

//         n=size;
//         // BY USING NEW KEYWORD ALLOCATING THE MEMORY IN HEAP....

//         arr= new int[n];
//         // INITALIZING STACK POINTER AT -1 INDEX SO THAT DATA STORES AT ZERO INDEX...
//         top = -1; 
    
//     }
//     // CREATING A PUSH FUNCTION TO PUSH VALUES IN STACK....
//     void push(int v){

//         // BASE CASE IF STACK POINTER REACHES THE END POINT OF THE STACK SHOW MSG...
//         if (top == n-1){
//             cout<<" overflow"<<endl;
//             return;
//         }

//         // PLACING THE STACK POINTER IN ZERO INDEX..
//         top++;

//         // STORING FIRST VALUE IN ZERO INDEX...
//         arr[top] = v;
//     }


//     // CREATING A TOP FUNCTION FOR GETTING THE TOPMOST VALUE OF STACK....
//     int tops(){
//         // BASE CASE IF STACK POINTER GOES OUT OF THE STACK SHOW MSG.....
//         if(top == -1){
//             cout<<"underflow"<<endl;
//             return -1;
//         }

//         return arr[top];
//     }


//     void pop(){
//         if(top == -1){
//             cout<<"there is no data"<<endl;
//             return;
//         }
//         top--;
//     }
// };
// int main(){
//     // STACK IN STL.....
//     // IT IS A LINEAR DATA STRUCTURE..
//     // IT FOLLOWS LIFO RULE...
//     // FOUR MAIN METHODS => 
//     // 1. PUSH()
//     // 2. POP()
//     // 3. TOP()
//     // 4. EMPTY()


//     // int s;
//     // cin>>s;

//     // cybrom obj(s);
//     // obj.push(12);
//     // obj.push(10);
//     // obj.push(11);
//     // obj.push(20);

//     // // while (obj.top != -1){
//     // //     cout<<obj.tops();
//     // // }


//     // cout << "Top element: " << obj.tops() << endl;

//     // obj.pop();
//     // cout << "Top after pop: " << obj.tops() << endl;





//     // STL CODE OF STACK USING INBULIT FUNCTIONS / METHODS.....

//     stack<int>st;
//     st.push(1);
//     st.push(10);
//     st.push(12);
//     st.push(90);

//     cout<<st.size()<<endl;

//     while (!st.empty()){
//         cout<<st.top();
//     }

// }


//-------------------------------------------QUESTION 1. WAP TO FIND MINIMUM VALUE FROM A GIVEN STACK.....

// int main(){

//     stack<int>st;

//     st.push(10);
//     st.push(11);
//     st.push(1);
//     st.push(2);

//     int min = st.top();

//    while(!st.empty()){

//         if( st.top() < min){
//             min = st.top();
//         }
//         st.pop();
//     }

//     cout<<min;
// }





    //-------------------------------QUESTION 2. REVERSE A STRING USING STACK...

void rev(string str){
        stack<string>st;

    for(int i=0; i<str.size(); i++){
        string wrd ="";

        while( str[i] != ' ' && i < str.length()){
            wrd+=str[i];
            i++;
        }
        st.push(wrd);
    }

    while( !st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){

string str = "sky is blue";
rev(str);

}