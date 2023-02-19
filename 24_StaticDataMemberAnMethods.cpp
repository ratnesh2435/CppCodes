#include <iostream>

using namespace std;

class Employee
{
    int id;
    static                        //Becoming class variable
        int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id;   //throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
// Count is the static data member of class Employee
int Employee ::count; // Default value is 0

int main()
{
    Employee ratnesh, harry, rohan;
    // ratnesh.id = 1;
    // ratnesh.count = 1;       //cannot do this as id and count are private

    ratnesh.setData();
    ratnesh.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();


    rohan.setData();
    rohan.getData();
    Employee::getCount();

    return 0;
}