#include<iostream>
#include<string>
using namespace std;
/*
    how many member of people lives together;
    rent of  room/flat/house;
    per unit charge of electircity;
    reading of this month which is used;
    external buying things;
*/
int main()
{
    int rent , electricity_unit,mothly_electricity_reading;
    float member;
    cout<<"Enter the total rent of room/flat/house: ";
    cin>>rent;
    cout<<"\nEnter the member of roommates: ";
    cin>>member;
    cout<<"\nEnter per unit charge of electricity: ";
    cin>>electricity_unit;
    cout<<"\nEnter the reading of electicity of the month ";
    cin>>mothly_electricity_reading;
    int total_bill = electricity_unit*mothly_electricity_reading;
    cout<<"\n Your total this month spend : "<<(rent + total_bill)/member;
    return 0;




}
