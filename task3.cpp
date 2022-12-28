#include<iostream>
using namespace std;
main()
{
int initialvelocity;
int finalvelocity;
int time;
int acceleration;
cout<< "Enter the velocity1:";
cin>>initialvelocity;
cout<< "Enter the acceleration:";
cin>>acceleration;
cout<< "Enter the time:";
cin>>time;
finalvelocity=(initialvelocity+(acceleration*time));
cout<< "Final velocity is:"<<finalvelocity;
}
