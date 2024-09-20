//task1
#include<iostream>
using namespace std;
main()
{
 cout << "Enter Your Name: ";
 string Name;
 cin >> Name;
 cout<< "Enter your roll number: ";
 int rollnumber;
 cin >> rollnumber;
 cout << "Enter your aggregate: ";
 int aggregate;
 cin >> aggregate;
 cout << "Enter your section: ";
 char section;
 cin >> section;
}
//task2
#include<iostream>
using namespace std;
main()
{
 cout << "Weight in lbs: ";
 float weight;
 cin >> weight;
 float result;
 result = weight*0.45;
 cout << weight <<" pounds in equal to " << result << " kilograms.";
}
//task3
#include<iostream>
using namespace std;
main()
{
 cout << "length of rectangle: ";
 int length;
 cin >> length;
 cout << "width of rectangle: ";
 int width;
 cin >> width;
 int result;
 result= length*width;
 cout << "The area of the rectangle is " << result;
}
//task4
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the charge (Q) in coulombs: ";
 int charge;
 cin >> charge;
 cout << "Enter the time (t) in seconds: ";
 int time;
 cin >> time;
 int result;
 result= charge/time;
 cout << "The current (I) is: " << result << " Amperes";
}
//task5
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the student's name: ";
 string name;
 cin >> name;
 cout << "Enter the matriculation marks (out of 1100): ";
 float matricmarks;
 cin >> matricmarks;
 cout << "Enter the intermediate marks (out of 550): ";
 float intermediatemarks;
 cin >> intermediatemarks;
 cout << "Enter the ecat marks (out of 400): ";
 float ecatmarks;
 cin >> ecatmarks;
 float result1;
 result1=((matricmarks/1100)*10) ;
 float result2;
 result2=((intermediatemarks/550)*40 );
 float result3;
 result3=((ecatmarks/400)*50) ;
 float result4;
 result4= result1 + result2 + result3;
 cout << "Aggregate score in UET" << result4;
}
//task6
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the size in megabytes (MB): ";
 float megabytes;
 cin >> megabytes;
 float result;
 result= (megabytes*1024*1024*8) ;
 cout << megabytes<< " MB is equivalent to " << result << "bits";
}
//task7
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the number of hours: ";
 int hours;
 cin >> hours;
 int result;
 result=(hours*3600);
 cout << hours << " hours is equivalent to " << result << " seconds";
}
//task8
#include<iostream>
using namespace std;
main()
{
 cout << "Enter voltage (in volts): ";
 float voltage;
 cin >> voltage;
 cout << "Enter current (in amperes): ";
 float current;
 cin >> current;
 float result; 
 result=(voltage*current);
 cout << "The power is "<< result << " watts";
}
//task9
#include<iostream>
using namespace std;
main()
{
 cout << "Enter your age in year: ";
 int year;
 cin >> year;
 int result;
 result=year*365;
 cout << "Your age in days is approximately " << result << " days";
}
//task10
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the name of cricket team: ";
 string team;
 cin >> team;
 cout << "Enter the number of wins: ";
 int wins;
 cin >> wins;
 cout << "Enter the number of draws: ";
 int draws;
 cin >> draws;
 cout << "Enter the number of losses: ";
 int losses;
 cin >> losses;
 int result1;
 result1=(wins*3);
 int result2;
 result2=(draws*1);
 int result3;
 result3=(losses*0);
 int result4;
 result4=result1 + result2 + result3;
 cout << "Pakistan has obtained " << result4 << " points in the Asia Cup Tournament";
}
//task11
#include<iostream>
using namespace std;
main()
{
 cout << "Enter the current world population: ";
 int population;
 cin >> population;
 cout << "Enter the monthly birth rate (number of births per month): ";
 int monthly;
 cin >> monthly;
 int result1;
 result1=(monthly*12*30);
 int result2;
 result2=(result1+256);
 cout << "The population in three decades will be: " << result2;
}