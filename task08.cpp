#include<iostream>
using namespace std;
main()
{
int fourdigits;
int rem1;
int rem2;
int rem3;
int rem4;
int total;
int q1;
int q2;
int q3;
cout<< "enter 4 digits number : ";
cin>>fourdigits;
rem1=fourdigits%10;
q1=fourdigits/10;
rem2=q1%10;
q2=q1/10;
rem3=q2%10;
q3=q2/10;
rem4=q3;
total=rem1+rem2+rem3+rem4;
cout<< "sum of 4 digits : "<<total;
}