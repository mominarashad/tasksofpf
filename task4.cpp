#include<iostream>
using namespace std;
main()
{
float subjectno1;
float subjectno2;
float subjectno3;
float subjectno4;
float subjectno5;
float percentage;
cout<<" Enter your subject1 marks out of 100:";
cin>>subjectno1;
cout<<" Enter your subject2 marks out of 100:";
cin>>subjectno2;
cout<<" Enter your subject3 marks out of 100:";
cin>>subjectno3;
cout<<" Enter your subject4 marks out of 100:";
cin>>subjectno4;
cout<< "Enter your subject5 marks out of 100:";
cin>>subjectno5;
percentage=((subjectno1+subjectno2+subjectno3+subjectno4+subjectno5)/500)*100;
cout<< "Your percentage is:"<<percentage;
}
 