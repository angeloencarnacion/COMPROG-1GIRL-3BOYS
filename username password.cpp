#include <iostream>
#include <string>
#include <windows.h>
using namespace  std;
int main()
{
	int a;
	string username="";
	string password="";
	bool LoginSuccess=false;
	
	cout<<"please login"<<endl;
	do
	{
		cout<<"username"<<endl;
		cin>>username;
		cout<<"password"<<endl;
		cin>>password;
		if(username=="tep"&&password=="tep")
		{
			cout<<"login success \n\n"<<endl;
			LoginSuccess=true;
		}
		else
		{
			cout<<"incorrect username or password"<<endl;
			cout<<"please try again"<<endl;
		}
	}
	while(!LoginSuccess);
	system("cls");
	
	{
	



	
	
   for (a=1;a<=10;a=a+1)
   
   {
   	   
        cout<<"\n\t\t\t\t\t  :::COMPUTER PROGRAMMING 1:::"<<endl;
        cout<<"\t\t\t\t\t\t   ::CS-102::"<<endl;
		cout<<"========================================================================================="<<endl;
		cout<<"\n\n";
		cout<<"\t\t\t\t _______________________________________________"<<endl;
		cout<<"\t\t\t\t|                1GIRL-3BOYS                  |"<<endl;
		cout<<"\t\t\t\t| #stephanie sumague                          | "<<endl;
		cout<<"\t\t\t\t| #aeron Manguerra Florida                    |"<<endl;
		cout<<"\t\t\t\t| #Lawrence Mercurio                          |"<<endl;
		cout<<"\t\t\t\t| #Angelo encarnacion                         |"<<endl;
		cout<<"\t\t\t\t|_____________________________________________|\n\n\n\n"<<endl;
	    Sleep(700);
	    system("CLS");
          
} 
system("pasue");
return 0;

}


}




