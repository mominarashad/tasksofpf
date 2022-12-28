#include<iostream>
using namespace std;
main()
{
string moviename;
int adultticketprice;
int childticketprice;
int adultticketsold;
int childticketsold;
int amountgenerated;
int amountafterdonation;
int totalamount;
cout<< " enter movie name:";
cin>>moviename;
cout<< "enter adult ticket price:";
cin>>adultticketprice;
cout<< "enter child ticket price:";
cin>>childticketprice;
cout<< "enter adult ticket sold:";
cin>>adultticketsold;
cout<< "enter child ticket sold:";
cin>>childticketsold;
amountgenerated=adultticketprice*adultticketsold + childticketprice*childticketsold;
amountafterdonation=(0.10*amountgenerated);
totalamount=amountgenerated-amountafterdonation;
cout<< " amount generated is :"<<amountgenerated;
cout<< " amount after donation is :"<<amountafterdonation;
cout<<" total amount is : "<<totalamount;
}
