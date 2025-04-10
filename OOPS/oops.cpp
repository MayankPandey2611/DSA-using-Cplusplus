
#include<iostream>
using namespace std;

// THERE ARE FOUR PILLARS OF OOPS
 // 1.ENCAPSULATION
 // 2.POLYMORPHISM
 // 3.INHERITANCE
 // 4.ABSTRACTION

//1. CLASS SAME AS STRUCTURES BUT, CLASS IN PRIVATE BY DEFAULT..
//---------------------------------IT RETURNS THE TOTAL SIZE OF ALL THE DATATYPES----------------------------// 
// class demo{

//     public:
//     int roll ;
//     char d;
//     string name;
//     float f;
//     double a;
// };

// int main(){

//     demo d;
//    cout<<sizeof(d);
   
     
   // }

//2. SAME WAY WE HAVE UNION WHICH WORKS SAME AS CLASS AND STRUTURES BUT IT RETURNS MAXIMUM SIZE FROM ALL THE DATATYPES..
// BY DEFAULT PUBLIC.

// --------------------------STRING NOT WORKED IN UNION-----------------------------//
// union demo{
//     int roll;
//     char ch;
//     double d;
//     float f;
   

// };

// int main(){

//  demo d;
// cout<<sizeof(d);

  
// }



   //-------------------------------------------------CONSTRUCTOR---------------------------------------------//
   
//    1. SPECIAL FUNCTION.
// 2. NAME IS SAME AS CLASS.
// 3. NO RETURN TYPE.
// 4. AUTOMATICALLY INVOKE/CALL ONCE THE OBJECT IS CREATED.

//# TYPES OF CONSTRUCTOR..

// 1. DEFAULT CONSTRUCTOR.
// 2. COPY CONSTRUCTOR.
// 3. PARAMETERIZED CONSTRUCTOR.



 //1. USERDEFINE  DEFAULT CONSTRUCTOR.

// class demo{

//     public:

//     // USERDEFINE  DEFAULT CONSTRUCTOR.
//     demo(){
//         cout<<"constructor activated";
//     }
// };


// int main(){
//     demo obj;
// }


//2. PARAMETERIZED CONSTRUCTOR.

// class demo{
//     int roll;

//     public:

//     // PARAMETERIZED CONSTRUCTOR

//     demo(int a=0){
//         roll=a;
//         cout<<"constructor activated"<<endl;
//     }


//     void show(){
//         cout<<roll<<endl;
//     }
// };

// int main(){
//     demo obj(8);

//     obj.show();

//      demo obj1;
//     obj1.show();
// }



//  ------------------------------------------ CONSTRUCTOR OVERLOADING---------------------------------//

// class demo{

// public:
//     demo(){
//         cout<<"hi"<<endl;
//     }

//     demo(int a){
//         cout<<a/2<<endl;
//     }

//     demo(int a, int b){
//         cout<<a+b<<endl;
//     }

    
// };


// int main(){
//     demo obj1;
//     demo obj2(10);
//     demo obj3(2,9);
// }



//   --------------------------------------------COPY CONSTRUCTOR-----------------------------------//
  
//   THERE ARE TWO TYPE OF IT..

// 1. SHALLOW COPY.

// class demo{

//    int a; 
//    int *p;

//    public:

//    demo(int x, int y){
//       a=x;
//       p= new int;
//       *p = y;
//    }

//    void update(){
//       a=a+1;
//       *p=*p+1;
//    }

//    void show(){
//       cout<<a<<" "<<*p<<endl;
//    }

// };

// int main(){

//    demo obj1(5,6);
//    demo obj2(obj1);
//    obj1.update();
//    obj1.show();
//    obj2.show();
// }



// 2. DEEP COPY.


// class demo{

//    int a; 
//    int *p;

//    public:

//    demo(int u, int v){
//       a=u; 
//       p = new int;
//       *p = v;
//    }

//    demo(demo &obj2){
//       a= obj2.a;
//       p= new int ;
//       *p = *(obj2.p);
//    }

//    void update(){
//       a= a+1;
//       *p=*p+1;
//    }

//    void show(){
//       cout<<a<<" "<<*p<<endl;
//    }

// };


// int main(){
//    demo obj1(5,6);
//    demo obj2(obj1);
   
//    obj2.update();
//    // obj1.update();

//    obj1.show();
//    obj2.show();

// }


//------------------------------------------DESTRUTOR--------------------------------------------//

// class demo {

//    int a ;
//    int *p;

//    public:

//    demo(int x, int y){
//       a=x;
//       p= new int ;
//       *p = y;
//    }

//    void show(){
//       cout<<a<<" "<<*p;
//    }

//    // DESTRUTOR...

//    ~demo(){
//       delete p;
//    }

// };

// int main(){
//    demo obj1(2,3);
//    obj1.show();
// }