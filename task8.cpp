#include<iostream>
using namespace std;
main()
{
int vegetablekg;
int fruitkg;
float priceofveg;
float priceoffruit;
float   totalprice;
cout << " enter the   kg of veg :";
cin>>vegetablekg;
cout<< "enter the kg of fruit :";
cin>>fruitkg;
cout<< "enter the price of veg:";
cin>>priceofveg;
cout<< "enter the price of fruit:";
cin>>priceoffruit;
totalprice=vegetablekg*priceofveg+priceoffruit*fruitkg;
cout<< " total price is :"<<totalprice;
}



