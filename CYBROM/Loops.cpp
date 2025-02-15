#include <iostream>
using namespace std;
int main()
{

    // 1.DO WHILE LOOP..

    //  int a=1;
    //  do{
    //     cout<<a<<" ";
    //     a++;
    //  }
    //  while (a<=10);

    // 2. WHILE LOOP..

    // int a=1;
    // while (a<=10)
    // {
    //     cout<<a<<" ";
    //     a++;
    // }

    //3. FOR LOOP..

    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<i<<" ";
    // }

    //  QUESTION 1. PRINT TABLE..

    // int a;
    // cout<<"Enter the number : ";
    // cin>>a;
    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<a*i<<" ";
    // }


// QUESTION 2.REVERSE AN NUMBER USING LOOPS..

    // int num;
    // cin >> num;
    // int rev = 0;
    // int digit = 0;
    // while (num > 0)
    // {
    //     digit = num % 10;
    //     rev = rev * 10 + digit;
    //     num = num / 10;
    // }
    //     cout << rev;



// QUESTION 3.

    string username;
    int password;
    
    cout << "Enter the username: ";
    cin >> username;
    
    cout << "Enter the password: ";
    cin >> password;

    int otp;
    
     int correctPassword = 1234;

    if (password == correctPassword) { 
        otp = password; 
        cout << "Your OTP is: " << otp << endl; 
    } else {
        cout << "Invalid password." << endl;
    }

    cout << "Enter the OTP: ";
    cin >> otp; 

   
    if (otp == password) { 
        cout << username << ", your balance is 1000 RS." << endl;
    } else {
        cout << "Invalid OTP." << endl;
    }

  
}

 


