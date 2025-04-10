#include<iostream>
using namespace std;

//---------------------------INHERITANCE IS OF FIVE TYPES----------------------//

// 1. SINGLE.
// 2. MULTIPLE.
// 3. MULTILEVEL.
// 4. HYBRID.
// 5. HIERARICHAL.


//-----------------PROBLEMS---------------//

// 2. MULTIPLE
// 4. HYBRID  => IT IS A MIXTURE OF ANY OF TWO TYPES...
//  BOTH HAS AMBTIGOUS PROMBLEM....


//---------------------------ACCESS SECPICIFERS IN INHERITANCE------------------//

// 1. PUBLIC =>  .CAN BE ACCESS WITHIN THE CLASS
            //   .OUTSIDE THE CLASS
            //   .INHERITE THE CLASS


// 2. PRIVATE =>  .CAN BE ACCESS WITHIN THE CLASS
            //   .CANNOT ACCESS OUTSIDE THE CLASS
            //   .CAN BE ACCESS INHERITE THE CLASS

// 3. PROTECTED => .CAN BE ACCESS WITHIN THE CLASS
            //     . CANNOT BE ACCESS OUTSIDE THE CLASS
            //     .CAN BE ACCESS INHERITE THE CLASS



//-----------------------------1. SINGLE INHERITANCE---------------------//

//  BASE CLASS AND PARENT CLASS IS SAME ..

// class parent {
//     public:
//     int a;
  
// };

// //  CHILD CLASS AND DRIVE CLASS IS SAME 
// // ( CHLID CLASS IS INHERITED WITH THE PARENT CLASS)...

// class child:public parent{

//     public:
//     void show(){
//         cout<<a;
//     }

// };

// int main(){

//     child obj;
//     obj.a=101;
//     obj.show();
// }




//-----------------------------2. MULTILEVEL INHERITANCE------------------------//

    // class grandparent{
    //     public:
    //     int num1;
    // };

    // class parent : public grandparent{
    //     public:
    //     int num2;
    // };


    // class child : public parent{
    //     public:
    //     void show(){
    //         cout<<num1+num2;
    //     }
    // };


    // int main(){
    //     child obj;

    //     obj.num1=10;
    //     obj.num2=30;
    //     obj.show();
    // }


    // ----------------------------- 3. MULTIPLE INHERITANCE---------------//

    
    // class grandparent{
    //     public:
    //     void show(){
    //         cout<<"grandparent";
    //     }
    // };

    // class parent{
    //     public:
    //     void show(){
    //         cout<<"parent";
    //     }
    // };


    // class child : public parent, public grandparent{
    //     public:
    //     void show(){
    //         cout<<"child";
    //     }
    // };


    // int main(){
    //     child obj;
    //     obj.show();
    // }



        // ----------------------------- 4. HIERACHICAL INHERITANCE---------------//

    
        // class grandparent{
        //     public:
        //     void show(){
        //         cout<<"grandparent";
        //     }
        // };
    
        // class parent: public grandparent{
        //     public:
        //     void show(){
        //         cout<<"parent";
        //     }
        // };
    
    
        // class child :  public grandparent{
        //     public:
        //     void show(){
        //         cout<<"child";
        //     }
        // };
    
    
        // int main(){
        //     child obj;
        //     parent obj1;
        //     grandparent obj2;
        //     obj.show();
        //     cout<<endl;
        //     obj1.show();
        //     cout<<endl;
        //     obj3.show();
        // }



        
        // ----------------------------- 5. HYBRID  INHERITANCE---------------//

        // class greatgrandparent{
        //     public:
        //     void show(){
        //         cout<<"greatgrandparent";
        //     }
        // };


        // class grandparent:public greatgrandparent{
        //     public:
        //     void show(){
        //         cout<<"grandparent";
        //     }
        // };
    
        // class parent: public grandparent{
        //     public:
        //     void show(){
        //         cout<<"parent";
        //     }
        // };
    
    
        // class child :  public parent, public grandparent, public greatgrandparent{
        //     public:
        //     void show(){
        //         cout<<"child";
        //     }
        // };
    
    
        // int main(){
        //     child obj;
        //     obj.show();
           
        // }
