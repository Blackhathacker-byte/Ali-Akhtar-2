#include<iostream>
using namespace std;
main(){



cout<<"ENTER THE STUDENT NAME:";
string Name;
cin>>Name;

cout<<"ENTER THE MATRIC MARKS(OUT OF 1100):";
int MatricMarks;
cin>>MatricMarks;

cout<<"ENTER INTERMEDIATE MARKS (OUT OF 550):";
int FscMarks;
cin>>FscMarks; 

cout<<"ECAT OBTAINED MARKS:";
float ECATmarks;
cin>> ECATmarks;


float Aggregate;
Aggregate= (ECATmarks/400)*50/100 + (FscMarks/550)*40/100 + (MatricMarks/1100)*10/100;

cout<<"THE AGGREGATE IS ="<<Aggregate<<"";

}



