/*wap to create employee class with data member Emp_code,Emp_name,Emp_age,
Emp_designation,Emp_basic_salary,ta,da,hra,accepting input from the user
side and display employee data with its net salary through object .Also
define function outside the class.*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Employee{
	    private:
		   char Emp_name[15],Emp_designation[15];
		   int  Emp_age,Emp_code,Emp_salary,ta,da,hra,Gross_salary;
	    public:
		   void get_Employee_data();
		   void net_salary();
		   void show_Employee_data();

};
void Employee::get_Employee_data()
{
		 cout<<"Enter Employee data:-";
		 cout<<"\nEnter Employee name:";
		 gets(Emp_name);
		 cout<<"\nEnter Employee Age:";
		 cin>>Emp_age;
		 cout<<"\nEnter Employee code:";
		 cin>>Emp_code;
		 cout<<"\nEnter Employee designation:";
		 cin>>Emp_designation;
		 cout<<"\nEnter Employee Basic salary:";
		 cin>>Emp_salary;
		 cout<<"\nEnter ta da and hra:";
		 cin>>ta>>da>>hra;
		 Gross_salary=Emp_salary+ta+da+hra;
}

void Employee::net_salary()
{
		 int Net_salary;
		 cout<<"\nNet salary is :"<<Net_salary;
}

void Employee::show_Employee_data()
{
		 cout<<".....This is employee data....-:";
		 cout<<"\nName:"<<Emp_name;
		 cout<<"\ncode:"<<Emp_code;
		 cout<<"\nAge:"<<Emp_age;
		 cout<<"\nDesignation:"<<Emp_designation;
		 cout<<"\nBasic salary:"<<Emp_salary;
		 cout<<"\nta"<<ta<<"\nda"<<da<<"\nhra"<<hra;
		 cout<<"\nNet salary:"<<Gross_salary;
}

int main()
{              clrscr();
	       Employee obj;
	       obj.get_Employee_data();
	       obj.show_Employee_data();
	       getch();
}
