/*wap to create a class with the name student whose data members are name
enroll_no,age,brange and semester,and members function are put_data().
and get_data(),create two object take data from object & print the details*/

#include<iostreame.h>
#include<conio.h>
#include<stdio.h>
class Student{
	    private:
		   char name[20],branch[5];
		   int roll_num,age,sem;
	    public:
		  void put_data();
		  void get_data();
};
void Student::put_data()
{
		  cout<<"\nEnter student details:-";
		  cout<<"\nEnter student name:";
		  gets(name);
		  cout<<"Enter age:";
		  cin>>age;
		  cout<<"Enter sem:";
		  cin>>sem;
		  cout<<"Enter branch:";
		  gets(branch);
		  cout<<"Enter roll number:";
		  cin>>roll_num;
}
void Student::get_data()
{
		 cout<<"\n*....This is Student details...*";
		 cout<<"\nName:"<<name;
		 cout<<"\nAge:"<<age;
		 cout<<"\nsemester:"<<sem;
		 cout<<"\nBranch:"<<branch;
		 cout<<"\nRoll Number:"<<roll_num;
}

int main()
{               int i;
		clrscr();
		Student obj[2];
	       for(i=0;i<2,i++)
		  {
		       obj[i].put_data();
		  }
	      for(i=0;i<2;i++)
		 {
		       obj.get_data();
		 }
		getch();
}