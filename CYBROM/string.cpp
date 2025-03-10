#include <iostream>
using namespace std;

int main()
{

    // string s="Mayank";

    // cout<<s<<endl;
    // cout<<s[0]<<endl;

    // cout<<s[6]<<endl;    //IT PRINTS NULL VALUE.

    // cout<<s[8]<<endl;  // IT PRINTS GARBAGE CHARACTER.

    // cout<<s.length();

    // for(int i=0;i<6; i++){
    //     // cout<<s[i]<<" ";
    //     cout<<s.at(i);
    // }

    //QUES 1. REVERSE A STRING .

    // string s="Mayank";
    // int i=0;
    // int j=s.length()-1;

    //     while(i<j){
    //         char temp= s[i];
    //         s[i]=s[j];
    //         s[j]=temp;
    //         i++;
    //         j--;
    //     }

    //     for(int i=0;i<s.length(); i++){
    //         cout<<s.at(i);
    //     }

    //QUES 2.   CHECK PALINDROME FOR A STRING.

    // string  s = "mayank";

    // int i=0;
    // int j=s.length()-1;

    //     while(i<j){
    //         if(s[i]!=s[j]){
    //             cout<<"Not palindrome";
    //             return 0;
    //         }
    //     i++;
    //     j--;
    //     }
    //     cout<<"palindrome";

    // }

    // USE OF STRINGS INBULIT FUNCTIONS..

    //    1. USE OF APPEND()

    // string s = "Mayank";
    // string s1 = " Pandey";

    // string name = s + s1;

    // string name = s.append(s1);

    // cout << name;

    //     2. USE OF SIZE()/LENGTH.

    // cout << name.size();
    // cout << name.length();

    //    3. USE OF COMPARE.

    // string  s = "Mayank";
    // string s1 = "mayank";

    // if(s.compare(s1)==0){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    // 4.  USE OF SUBSTR (POSITION, LENGTH)..  {IT SEPARTAES THE CHARACTERS GIVEN FROM THE POSTION TO THE LENGTH OF THE CHARACTER USER GIVES.}

    // string s="Mayank";

    // string s1= s.substr(2,4);

    // cout<<s1;

    // 5.  USE OF FIND.

    // string s= " My Name Is Mayank Pandey";
    // string s1= "Is";
    // cout<<s.find(s1);

    // 6. USE OF REPLACE.

    // string s= "HYY";
    //     //It Replaces 3 character from 0th index of str with  copy of bye upto 3th index.
    // s.replace(0,3,"BYY");

    //     cout<<s;

    // 7. USE OF INSERT.

    //     string s= "Hello veryone";

    //    auto it =s.insert(s.begin()+6,'e');

    //    cout<<s;

    // 8. USE OF ERASE .

    // string s= "Helloo Everyone";

    // auto is = s.erase(s.begin()+5);

    // cout<<s;


//QUES 3. CHECK VALID PARENTHESES..

    // string s = "}{";

    // int sq = 0, par = 0, cur = 0;

    // for (int i = 0; i < s.length(); i++){

    //     if (s[i] == '{'){
    //         cur++;
    //     }
    //     else if (s[i] == '['){
    //         sq++;
    //     }
    //     else if (s[i] == '('){
    //         par++;
    //     }

    //     else if (s[i] == '}'){
    //         cur--;
    //         if (cur < 0){
    //             cout << "Invalid";
    //             return 0;
    //         }
    //     }
    //     else if (s[i] == ']'){
    //         sq--;
    //         if (sq < 0) {
    //             cout << "Invalid";
    //             return 0;
    //         }
    //     }
    //     else if (s[i] == ')'){
    //         par--;
    //         if (par < 0){
    //             cout << "Invalid";
    //             return 0;
    //         }
    //     }
    // }

    // if (sq == 0 && par == 0 && cur == 0){
    //     cout << "Valid";
    // }
    // else{
    //     cout << "invalid";
    // }


//QUES 4. CONVERTION OF SMALL CHARACTERS INTO BIGGER CHARACTER.

    // string s= "AbCd";

    // for(int i=0; i<s.length(); i++){
    //     if(int (s[i])>=65 &&   int (s[i])<=90){
    //         s[i]=int (s[i])+32;
    //     }

    //     else if(int (s[i])>=97 && int (s[i])<=122){
    //         s[i]= int (s[i])-32;
    //     }
    // }
 
    // cout<<s;


    

//QUES 5. CHECK ANAGRAM..

string s1="mam";

string s2 = "mam";

if(s1.length()!=s2.length()){
    cout<<"Not an Anagram.";
    return 0;
}

for(int i=0; i<s1.length(); i++){
    bool check = false;
    for(int j=0; j<s2.length(); j++){
        if(s2[j]==s1[i]){
            s1[i]=='#';
            check = true;

        }
    }

    if(check==false){
        cout<<"Not an Anagram.";
        return 0;
    }
}

cout<<"Anagram.";

}
