
#include <iostream>
using namespace std;

class employee
{
	int age;
	char name[30], designation[100];
	double salary;

	public:

		void get_emp_details();
	
		void show_emp_details()
         {  cout<<"\nDetails--:\n";
           	cout<<"\nEmployee Name:"<<name;
        	cout<<"\nEmployee Age: "<<age;
         	cout<<"\nBasic salary: "<<salary;
        	cout<<"\nEmployee Designation: "<<designation<<endl;}
 
};

void employee::get_emp_details()
{

	cout<<"\nEnter employee name: ";
	cin>>name;
	cout<<"\nEnter employee age: ";
	cin>>age;
	cout<<"\nEnter employee Desgination: ";
	cin>>designation;
	cout<<"\nEnter employee salary: ";
	cin>>salary;
}



int main()
  {
    employee emp[100];
    int i,n;
    cout<<"Name: Deepanshu Jindal \nUID: 21BCS1933\n ";
    cout<<"Enter the no. employees:";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
    emp[i].get_emp_details();
    }

    cout<<"\n\n";
    
     for(i=0;i<n;i++)
    {
    emp[i].show_emp_details();
    }

    return 0;
}
