#include<iostream>
using namespace std;



// struct demo{

//     public:
//     int roll;
    

//     private:
//     string name;
//     char grade;

//     public:
//     void Grade(char x){
//         grade=x;
//     }

//     void Name(string s){
//         name=s;
//     }

//     void show(){
//         cout<<roll<<" "<<name<<" "<<grade<<endl;
//     }
// };

// int main(){

//     demo d;
//     d.roll=101;
//     d.Name("Mayank");
//     d.Grade('A');

//     d.show();


//    demo s;
//    s.roll=102;
//    s.Name("Ayush");
//    s.Grade('B');
    
//    s.show();
// }



   //#  POINTER TYPE VARIABLES...(POINTER TO STRUCTURE)


//         struct structures
//         {

            
//             int age;
            
//             private:
//             string name;

//             public:
//             void  myname(string x){
//                 name=x;
//             }
//             void show(){
//                 cout<<age<<" "<<name<<endl;
//             }
//         };
        
   
//    int main(){

//     structures s;
//     s.age=12;
//     s.myname("Mayank");

//     s.show();
//     structures a;
//     a.age=10;
//     a.myname("om");
//     a.show();

//     structures *p;
//     p=&a;
//     p->age=13;
//     a.myname("ayush");
//     p->show();
//     a.show();

//     p=&s;
//     p->myname("anil");
//     s.show();

//    }



  //  SELF RECURSIVE FUNCTIONS/POINTER..
  
  struct demo {
    
    int rollno;
    string name;

    demo *link;

  };

  int main(){

    demo a;
    a.rollno=101;
   a.name="Mayank";
    a.link=NULL;

   demo b;

   b.rollno=102;
   b.name="hello";
   b.link=&a;
  cout<<b.link->rollno;

    
  }