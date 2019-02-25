#include<iostream>
using namespace std;
class student
{
    int roll;
public:
    student()
    {
        cout<<"\tconsturctor called\n";

    }
   void input_data()
   {
    cout<<"\nenter roll no:";
    cin>>roll;
   }
 void show_data()
   {
       cout<<"\nroll number of student is:"<<roll;

   }
   ~student()
   {
       cout<<"\n destructor called";
   }

};
int main()
{
    student a,b;
    a.input_data();
    b.input_data();
    a.show_data();
    b.show_data();

}
