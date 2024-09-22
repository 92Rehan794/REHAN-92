#include<iostream>
using namespace std;
main()
{
 cout << "Enter the Name of the Person: ";
 string name;
 cin >> name;
 cout << "Enter the target weight loss in kilograms: ";
 float kilograms;
 cin >> kilograms;
 float result;
 result=kilograms*15;
 cout << name << " will need " << result << " days to lose " << kilograms << " kg of weight by following the doctor's suggestions";
}