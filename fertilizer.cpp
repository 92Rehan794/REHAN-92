#include<iostream>
using namespace std;
main()
{
 cout << "Enter the size of the fertilizer bag in pounds: ";
 int pounds;
 cin >> pounds;
 cout << "Enter the cost of the bag: $";
 int cost;
 cin >> cost;
 cout << "Enter the area in square feet that can be covered by the bag: ";
 int area;
 cin >> area;
 int result1;
 result1=cost/pounds;
 int result2;
 result2=cost/area;
 cout << "Cost of fertilizer per pound: $" << result1 <<endl;
 cout << "Cost of fertilizing per square foot: $" << result2;
}