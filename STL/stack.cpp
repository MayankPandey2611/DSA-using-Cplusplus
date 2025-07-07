#include<iostream>
using namespace std;



class cybrom{
    public:
    // POINTER TYPE ARRAY..
    int *arr;
    // SIZE OF ARRAY AND STACK POINTER...
    int n , top;

    // CONSTRUCTOR...
    cybrom(int size){

        n=size;
        // BY USING NEW KEYWORD ALLOCATING THE MEMORY IN HEAP....

        arr= new int[n];
        // INITALIZING STACK POINTER AT -1 INDEX SO THAT DATA STORES AT ZERO INDEX...
        top = -1; 
    
    }
    // CREATING A PUSH FUNCTION TO PUSH VALUES IN STACK....
    void push(int v){

        // BASE CASE IF STACK POINTER REACHES THE END POINT OF THE STACK SHOW MSG...
        if (top == n-1){
            cout<<" overflow"<<endl;
            return;
        }

        // PLACING THE STACK POINTER IN ZERO INDEX..
        top++;

        // STORING FIRST VALUE IN ZERO INDEX...
        arr[top] = v;
    }


    // CREATING A TOP FUNCTION FOR GETTING THE TOPMOST VALUE OF STACK....
    int tops(){
        // BASE CASE IF STACK POINTER GOES OUT OF THE STACK SHOW MSG.....
        if(top == -1){
            cout<<"underflow"<<endl;
            return -1;
        }

        return arr[top];
    }


    void pop(){
        if(top == -1){
            cout<<"there is no data"<<endl;
            return;
        }
        top--;
    }
};
int main(){
    // STACK IN STL.....
    // IT IS A LINEAR DATA STRUCTURE..
    // IT FOLLOWS LIFO RULE...
    // FOUR MAIN METHODS => 
    // 1. PUSH()
    // 2. POP()
    // 3. TOP()
    // 4. EMPTY()


    int s;
    cin>>s;

    cybrom obj(s);
    obj.push(12);
    obj.push(10);
    obj.push(11);
    obj.push(20);

    // while (obj.top != -1){
    //     cout<<obj.tops();
    // }


    cout << "Top element: " << obj.tops() << endl;

    obj.pop();
    cout << "Top after pop: " << obj.tops() << endl;

}