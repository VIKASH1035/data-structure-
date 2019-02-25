#include<iostream>
using namespace std;
template <class X>
class arrayList
{
private:
    struct controlblock
    {
        int capacity;
        X *arr_ptr;
    };
    controlblock *s;
public:
    arrayList(int cap)
    {
        s=new controlblock;
        s->capacity = cap;
        s->arr_ptr = new X[s->capacity];
    }
    void addelement( int index,X data)
    {
        if(index>=0 && index<= s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"index not valid";
    }
    void viewelement(int index, X &data)
    {
         if(index>=0 && index<= s->capacity-1)
          data=s->arr_ptr[index];
          else
            cout<<"index not valid";
    }
    void viewlist()
    {
        int i;
        for(i=0;i<s->capacity;i++)
        {
            cout<<" "<<s->arr_ptr[i];
        }
    }
};
int main()
{
    arrayList <float> list1(4);

    list1.addelement(0,25.6);
    list1.addelement(1,45.6);
    list1.addelement(2,14.6);
    list1.addelement(3,78.9);
    list1.viewlist();

    return 0;

}
