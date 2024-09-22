#include<iostream>
using namespace std;
main()
{
 cout << "Enter the person's age: ";
 int age;
 cin >> age;
 cout << "Enter the number of times they've moved: ";
 int time;
 cin >> time;
 int result;
 result=age/(time+1);
 cout << "Average number of years lived in the same house: " << result;
}