#include<iostream>
using namespace std;
main()
{
int area;
int cost;
int size;
int totalarea;
int totalcost;
cout<< " Enter the area:";
cin>>area;
cout<< " Enter the cost:";
cin>>cost;
cout<< "Enter the size:";
cin>>size;
totalcost=cost/size;
totalarea=cost/area;
cout<< "cost per pound is:"<<totalcost;
cout<< "area per square is:"<<totalarea;
}

