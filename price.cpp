#include<iostream>
using namespace std;
main()
{
 cout << "Enter vegetable price per kilogram (in coins): ";
 float coin1;
 cin >> coin1;
 cout << "Enter fruit price per kilogram (in coins): ";
 float coin2;
 cin >> coin2;
 cout << "Enter total kilograms of vegetables: ";
 int total1;
 cin >> total1;
 cout << "Enter total kilograms of fruits: ";
 int total2;
 cin >> total2;
 float result1;
 result1=coin1*total1+coin2*total2;
 float result2;
 result2=result1/1.94;
 cout << "Total earnings in Rupees (Rps): " << result2;
}