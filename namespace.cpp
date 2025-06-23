
#include<iostream>
using namespace std;


namespace cybrom {
    int a=10;
    int b=90;
    /// @brief 
    multiply(){
        cout<<a*b<<endl;
    }

    class bhopal{
        public:
        int k1;
        int k2;
    }obj;

    namespace cybrom1{
        /// @brief 
        multiply(){
            cout<<"from nested namespace"<<endl;
        }
    }
}

int main(){
    cout<<cybrom::a<<endl;
    cybrom::multiply();
    int ans= cybrom::obj.k1=100;
   cout<<ans<<endl;
   cybrom::cybrom1::multiply();
}