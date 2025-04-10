#include<iostream>
using namespace std;

//----------------------------------------POLYMORPHISM--------------------------------------------------//

// IT USED TO OVERCOME THE PROBLEM CAME IN THE MULTIPLE AND HYBRID INHERITANCE USING VIRTUAL FUNCTION...

// class grandparent{
//     public:
//    virtual void show(){
//         cout<<"grandparent";
//     }
// };

// class parent: virtual public grandparent{
//     public:
//     void show(){
//         cout<<"parent";
//     }
// };

//     class chlid :virtual public parent,virtual public grandparent{
//         public:
//         void show(){
//             cout<<"child";
//         }
//     };

// int main(){

//     chlid obj;
//     grandparent  *obj1;
//     parent obj2;
//     obj1=&obj2;
//     // obj1=&obj;
 
//     obj1->show();
// }



//--------------------------------------PURE VIRTUAL FUNCTION-----------------------------//

// class animal{
//     public:
//     virtual void sound()=0;
// };

// class dog : public animal{

//     public:
//     void sound(){
//         cout<<"bow";
//     }

// };

// class cat : public animal{

//     public:
//     void sound(){
//         cout<<"meww";
//     }

// };

// int main(){

//     animal *obj;
//     dog obj1;
//     cat obj2;
//     // obj=&obj1;
//     obj=&obj2;
//     obj->sound();

// }


//------------------- ARRAY OF OBJECT-------------------//

// class student{
//     public:

//     int rollno;
// };


// int main(){
//     student obj[5];

//     for(int i=0; i<5; i++){
//         cin>>obj[i].rollno;
//     }

    
//     for(int i=0; i<5; i++){
//         cout<<obj[i].rollno<<" ";
//     }

// }



//--------------------------STATIC MEMBER-------------------------------//

// class  sbibank{
//     public:
//     static int acc;
//     int custacc;

//     void show(){
//         cout<<custacc;
//     }
// };

// int sbibank ::acc= 10000;

// int main(){
//     sbibank obj1,obj2;

//     //--------------------CHANGES IN OBJECT 1 WILL NOT REFLECT ON OBJECT 2.----------------//
//     // obj1.custacc=1000;
//     // obj2.custacc=3000;
//     // obj1.show();
//     // obj2.show();

// //-----------------------CHANGES IN OBJECT 1 WILL REFLECT ON OBJECT 2----------------//
//    cout<< obj1.acc<<endl;
//    obj1.acc += 1000;
//    cout<< obj2.acc;

// }

//-----------------STATIC MEMBER FUNCTION-------------------------//

// IN THIS CHANGES WILL REFLECT ON  EVERY OBJECT.


//-------------------------------------CONSTRUCTOR WITHOUT OBJECTS---------------------------//

    // class sbibank {
    //     public:
    //     static int count;
    //     int num;

    //     // CONSTRUCTOR => IT STARTS WORKING WHENEVER OBJECT IS CREATED.
    //     sbibank(){
    //         count++;
    //     }

    //     // STATIC MEMBER FUNCTION IT PRINT ONLY STATIC VARIABLE DECLARE.
    //     static void show_data(){

    //         // cout<<num; (IT SHOWS ERROR)
    //         cout<<count;
    //     }


    // };

    // int sbibank::count=0;

    // int main(){
    //     sbibank::show_data();
    // }



//-------------------------------------CONSTRUCTOR WITH OBJECTS---------------------------//


    // class sbibank{
    //     public:
    //     static int count;

    //     // CREATING CONSTRUCTOR FOR INCREMENTION.

    //     sbibank(){
    //         count++;
    //     }

    //     void show_data(){
    //         cout<<count;
    //     }
    // };

    // // CALLING STATIC MEMBER FUNCTION
    // int sbibank::count=0;

    // int main(){
    //     sbibank obj1,obj2,obj3;

    //     // IT SHOWS SAME DATA THROUGH EVERY OBJECT CALL.

    //     obj1.show_data();
    //     obj2.show_data();
    //     obj3.show_data();
    // }






//----------------------------------THIS POINTER----------------------------------//

// class demo{
    
//     int a ;
//     int b;

//     public:
//     void show_data(int a , int b){
//        this->a=a;
//        this->b=b;
//     }

//     void show(){
//         cout<<a<<" "<<b;
//     }
// };

// int main(){
//     demo obj;
//     obj.show_data(5,8);
//     obj.show();

// }



//----------------------------------------FRIEND FUNCTION----------------------------------------------//

// FRIEND FUNCTION => IT IS USED TO ACCESS THE PRIVATE AND PROTECTED DATA MEMBER FUNCTION.

// class demo{
//     int data=10;
//     public: 
//     friend void show_data(demo obj);

// };
// int show_data(){
//    cout<<data;
// }

// int main(){
//     demo obj;
// }


//----------------------------------------EXCEPTION HANDLING--------------------------------------------//

// 1. TRY -> WRITE CODE WITHIN TRY BLOCK.
// 2. CATCH -> IT CATCHES THE ERROR.
// 3. THROW -> IT INDICATES ERROR TO CATCH.

// int main(){
 
//     int a,b;
//     cin>>a>>b;
// try{
//     if(b==0){
//         throw(0);
//     }
//     else{
//         cout<<a/b;
//     }
// }
//     catch(int a){
//         cout<<"Denominator cannot be zero.";
//     }
// }
