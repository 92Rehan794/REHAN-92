#include<iostream>
using namespace std;
main()
{
 cout << "Enter a 4-digit number: ";
 int digit;
 cin >> digit;
 int rem1;
 rem1=digit%10;
 int num1;
 num1=digit/10;
 int rem2;
 rem2=num1%10;
 int num2;
 num2=num1/10;
 int rem3;
 rem3=num2%10;
 int num3;
 num3=num2/10;
 int rem4;
 rem4=num3%10;
 int result;
 result=rem1+rem2+rem3+rem4;
 cout << "Sum of the individual digits: " << result;
}