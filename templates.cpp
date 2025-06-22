
#include<iostream>
using namespace std;

// BY USING THE TEMPLATES WE DONT NEEDS TO INTIALIZE THE VALUES BY PARTICULAR PARAMETERS.
// template <class a,class b>
// void  sum(a x ,b y){
//     cout<< x+y;
// }

// int main(){

//     sum(2.9,10.7);
// };



//  CLASS TEMPLATES 

template <class obj1 >
class job{
public: obj1 v;

job(obj1 val){
    v=val;
    cout<<v<<endl;
}

show(){
    cout<<"hello"<<endl;
}
};


int main(){
    job <int> j (21);
    j.show();
}