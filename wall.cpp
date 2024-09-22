#include<iostream>
using namespace std;
main()
{
 cout << "Numbers of square meters you can print: ";
 int square;
 cin >> square;
 cout << "Width of the single wall (in meters): ";
 int width;
 cin >> width;
 cout << "Height of the single wall (in meters): ";
 int height;
 cin >> height;
 int result1;
 result1=width*height;
 int result2;
 result2=square/result1;
 cout << "Number of walls you can print: " << result2;
}



