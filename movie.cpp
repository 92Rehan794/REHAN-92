#include<iostream>
using namespace std;
main()
{
 cout <<"Enter the movie name: ";
 string movie;
 cin >> movie;
 cout <<"Enter the adult ticket price: $";
 int adult;
 cin >> adult;
 cout << "Enter the child ticket price: $";
 int child;
 cin >> child;
 cout << "Enter the number of adult tickets sold: ";
 int number1;
 cin >> number1;
 cout << "Enter the number of child tickets sold: ";
 int number2;
 cin >> number2;
 cout << "Enter the percentage of the amount to be donated to charity: ";
 int percent;
 cin >> percent;
 int result1;
 result1=(adult*number1)+(child*number2);
 int result2;
 result2=(result1*10/100);
 int result3;
 result3=result1-result2;
 cout << "Movie: "<< movie <<endl;
 cout << "Total amount generated from ticket sales: $" << result1 <<endl;
 cout << "Donation to charity (" << percent << "%): $" << result2 <<endl;
 cout << "Remaining amount after donation: $" << result3;
}