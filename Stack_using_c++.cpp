#include <iostream>
using namespace std;
class st
{
    int size;
    int stack[100];
    int top=-1;
    int element;
    public:
        st()
        {
            cout<<"\n\nEnter the size of a Stack[Max: 100]: ";
            cin>>size;
        }
        void push()
        {
            if(top==size-1)
            {
                cout<<"\nOverflow";
            }
            else
            {
                top=top+1;
                cout<<"\n\nEnter an element to push into the stack: ";
                cin>>element;
                stack[top]=element;
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"\nUnderflow";
            }
            else
            {
                cout<<"\nElement "<<stack[top]<<" has been popped!";
                top=top-1;
            }
        }
        void display()
        {
            if(top<0)
            {
                cout<<"\nStack is currently empty!";
            }
            else
            {
            cout<<"\nStack:\n";
            for(int i=top;i>=0;i--)
            {
                cout<<stack[i]<<endl;
            }
            }
        }
};
int main()
{
    int men=0;
    cout<<"Stack Program";    
    st ob1;
    while(men==0)
    {
        int choice;
        cout<<"\n\n1. Push\n2. Pop\n3. Display\n4. Exit\n\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                ob1.push();
                break;
            case 2:
                ob1.pop();
                break;
            case 3:
                ob1.display();
                break;
            case 4:
                men=1;
                break;
            default:
                cout<<"\nEnter Valid Input!";
                break;
        }
    }
}