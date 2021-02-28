#include<iostream.h>
#include<conio.h>
int main()
{
int emp,hou,otim,opay;
clrscr();
emp=1;
while(emp<=10)
{
cout<<"enter the employe "<<emp<<" overtime : ";
cin>>hou;
if(hou>40)
{
otim=hou-40;
opay=otim*12;
cout<<"employe overtime pay is :"<<opay<<endl;
}
else
{
cout<<"there is no overtime pay for employe "<<endl;
}     emp++;
}
getch();
return 0;
}