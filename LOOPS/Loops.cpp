#include <iostream>
#include <climits>
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

    // 3. FOR LOOP..

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

    // string username;
    // int password;

    // cout << "Enter the username: ";
    // cin >> username;

    // cout << "Enter the password: ";
    // cin >> password;

    // int otp;

    //  int correctPassword = 1234;

    // if (password == correctPassword) {
    //     otp = password;
    //     cout << "Your OTP is: " << otp << endl;
    // } else {
    //     cout << "Invalid password." << endl;
    // }

    // cout << "Enter the OTP: ";
    // cin >> otp;

    // if (otp == password) {
    //     cout << username << ", your balance is 1000 RS." << endl;
    // } else {
    //     cout << "Invalid OTP." << endl;
    // }

    //  QUESTION 4. PALINDROME.

    // int num;
    // cin >> num;
    // int rev = 0;
    // int ans = num;
    // while (num > 0)
    // {
    //     int digit = num % 10;
    //     rev = rev * 10 + digit;
    //     num = num / 10;
    // }
    // if (rev == ans)
    // {
    //     cout << "yes";
    // }
    // else
    // {
    //     cout << "No";
    // }

    // QUESTION 5.POWER OF A NUMBER.

    // int num,power;
    // cin>>num>>power;

    // int ans=1;

    // for(int i=1; i<=power; i++){
    //     ans=ans*num;
    // }
    // cout<<ans;

    // QUESTION 6. FABONACCI SERIES

    // METHOD 1.

    // int a=0;
    // int b=1;
    // int c;
    //  int num;
    //  cin>>num;

    //  cout<<a<<b;
    // for(int i=3; i<=num; i++)
    // {
    // c=a+b;
    // a=b;
    // b=c;
    // cout<<c;
    // }

    // METHOD 2.

    // int a=0;
    // int b=1;
    // int c;

    // int num;
    // cin>>num;

    // for(int i=1; i<=num; i++){
    //     if(i==1){
    //         cout<<a;
    //         continue;
    //     }
    //     if(i==2){
    //         cout<<b;
    //         continue;
    //     }
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     cout<<c;
    // }

    // QUESTION 7. GREATEST OF A NUMBER.

    // int num;
    // cin>>num;

    // int ans=0;

    // while(num>0){
    //     int digit=num%10;
    //     if(digit>ans){
    //         ans=digit;
    //     }
    //     num=num/10;
    // }

    // cout<<ans;

    // QUESTION 8. SMALLEST OF NUMBER.

    // int num;
    // cin>>num;

    // int ans=9;

    // while(num>0){
    //     int digit=num%10;
    //     if(digit<ans){
    //         ans=digit;
    //     }
    //     num=num/10;
    // }

    // cout<<ans;

    //  PRIME NUMBER.

    // METHOD 1.

    // int num;
    // cin>>num;
    // int count=0;

    // for(int i=1; i<=num; i++){
    //     if(num%i==0){
    //         count++;
    //     }

    // }
    // if(count==2){
    //     cout<<num<<" is a prime number";
    // }
    // else{
    //     cout<<num<<" is not a prime number.";
    // }

    // METHOD 2.

    // int num;
    // cin>>num;

    // for(int i=2;i<num; i++){
    //     if(num%i==0){
    //         cout<<"Not prime";
    //         return 0;
    //     }
    // }
    // cout<<"Prime";

    // METHOD 3.

    // int num;
    // cin>>num;
    // if(num<=1){
    //     cout<<"Not prime";
    // }
    // for(int i=2;i*i<=num; i++){
    //     if(num%i==0){
    //         cout<<num<<" is Not prime";
    //         return 0;
    //     }
    // }
    // cout<<num<<" is Prime";

    // QUESTION 10. SUM OF DIGITS .

    // int num;
    // cin>>num;
    // int sum=0;
    // while(num>0){
    //     int digit=num%10;
    //     sum+=digit;
    //     num=num/10;
    // }
    // cout<<sum;

    // QUESTION 11. COUNT OF A DIGIT.

    // int num;
    // cin>>num;
    // int count=0;
    // while(num>0){
    //     num=num/10;
    //     count++;
    // }
    // cout<<count;

    // QUESTION 12. FACTORIAL OF A NUMBER.

    // int n;
    // cin>>n;
    // int ans=1;
    // for(int i=1; i<=n; i++){
    //     ans=ans*i;
    // }
    // cout<<ans;

    // QUESTION 13. SUM OF N NATURAL NUMBER.

    // int n;
    // cin>>n;
    // int ans=0;
    // for(int i=1; i<=n; i++){
    //     ans=ans+i;
    // }
    // cout<<ans;

    // QUESTION 14. SQUARE OF A NUMBER.

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<i*i<<" ";
    // }

    // QUESTION 15.FIND PERFECT NUMBER.

    // int num;
    // cin>>num;
    // int ans=0;

    // for(int i=1; i<num; i++){
    //     if(num%i==0){
    //        ans=ans+i;
    //     }
    // }
    // if(ans==num){
    //     cout<<num<<" is a perfect number.";
    // }
    // else{
    //     cout<<num<<" is not a perfect number.";
    // }

    // QUESTION 16. FIND AMSTRONG NUMBER.

    int num;
    cin>>num;

    int num1=num;
    int ans=0;
    while(num>0){
        int digit = num%10;
        ans+=digit*digit*digit;
        num=num/10;
    }
    if(ans==num1){
        cout<<"Amstrong";
    }
    else{
        cout<<"Not";
    }

    // QUESTION 17. AP SERIES.

    // int a,d,n;
    // cin>>a>>d>>n;
    // for(int i=0; i<n; i++){
    //     cout<<(a+i*d)<<" ";
    // }

    // QUESTION 18. GP SERIES.

    // int a,r,n;
    // cin>>a>>r>>n;

    // for(int i=1; i<=n; i++){
    //     cout<<a<<" ";
    //     a=a*r;
    // }

    // QUESTION 19. LCM QUESTION.

    // int a,b;
    // cout<<"Enter values: ";
    // cin>>a>>b;
    // int mx=(a>b)?a:b;
    // int i=mx;
    // while(1){
    //     if(i%a==0 && i%b==0){
    //         cout<<i;
    //         break;
    //     }
    //     i=i+mx;
    // }

    // QUESTION 20. HCF QUESTION.

    // int a,b;
    // cin>>a>>b;
    // int hcf;
    // for(int i=1; i<=a || i<=b; i++){
    //     if(a%i==0 && b%i==0){
    //         hcf=i;
    //     }
    // }
    // cout<<"Hcf of a and b is : "<<hcf;

    // QUESTION 21. PATTERN 1.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 22.PATTERN 2.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c>=r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 23. PATTERN 3.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=6-r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 24. PATTERN 4.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c>=6-r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 25. PATTERN 5.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=r){
    //             cout<<c;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 26. PATTERN 6.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=r){
    //             cout<<r;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 27. PATTERN 7.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=r){
    //             cout<<char(r+64);
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 28 . PATTERN 8.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if(c<=r){
    //             cout<<char(c+64);
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 29. ASCII VALUES.

    // for(int i=0; i<=127; i++){
    //     cout<<"Value of"<<i<<" = "<<char(i)<<endl;
    // }

    // QUESTION 30. PATTERN 9.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=9; c++){
    //         if(c>=6-r && c<=4+r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // QUESTION 31. REVERSE PATTERN 10.

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=9; c++){
    //         if(c>=r && c<=10-r){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }



}
