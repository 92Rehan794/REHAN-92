#include<iostream>
using namespace std;
main()
{
 cout << "Number of Minutes: ";
 int minutes;
 cin >> minutes;
 cout << "Frames per Second: ";
 int seconds;
 cin >> seconds;
 int result;
 result=minutes*60*seconds;
 cout << "Total Number of Frames: " << result;
}