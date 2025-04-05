#include <iostream>
using namespace std;
class cc
{
        int i,j=0;
        int add=0;
        int add2=0;
        int sum=0;
        int cr[16];
        int cr2[8];
        int cr3[8];
        int even[8];
        void reset()
        {
            j=0;
            add=0;
            add2=0;
            sum=0;
        }
    public:
        cc()
        {
            cout<<"Credit Card Checker";
        }
        void star()
        {
            cout<<"\n\n*************************************\n\n";
        }         
        void work()
        {
            star();
            cout<<"Enter Credit Card followed by a space: "; // taking credit card information
            for(i=0;i<16;i++)
            {
                cin>>cr[i];
            }
            cout<<endl<<"Entered Credit Card: \n";  //showing entered credit card
            for(i=0;i<16;i++)
            {
                if(i==4 || i==8 || i==12)
                {
                    cout<<" ";
                }
                cout<<cr[i];
            }
            for(i=1;i<16;i++)   //storing even number place digits in 'even' (i.e., 2 4 6 8 10 12 14 16) [ not in indexing reference] 
            {
                even[j]=cr[i];
                i++;
                j++;
            }
            for(i=0;i<8;i++)    //adding the even number place digits array
            {
                add=add+even[i];
            }
            j=0;
            for(i=0;i<16;i++)   //storing odd index number & multiplying as well
            {
                cr2[j]=cr[i]*2;
                i++;
                j++;
            }
            for(i=8;i>=0;i--) // now we check cr2 and those who digits which is above 10 is substrated by 9 and gets stored in new array
            {
                if(cr2[i]>=10)
                {
                    cr3[i]=cr2[i]-9;
                }
                else
                {
                    cr3[i]=cr2[i];
                }
            }
            for(i=0;i<8;i++)    //adding cr3
            {
                add=add+cr3[i];
            }
            sum=add+add2; // sum of even & cr3
            if(sum%10==0)
            {
                cout<<"\n\nThe Credit Card which you entered is valid!";
            }
            else
            {
                cout<<"\n\nCredit Card Declined!";
            }
            reset();
        }
};
int main()
{
    cc c1;
    int men=0;
    while(men==0)
    {
        int choice;
        c1.star();
        cout<<"1. Continue\n2. Algorithm\n3. Exit\n\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {      
            case 1:
                c1.work();
                break;
            case 2:
                c1.star();
                cout<<"\nAlgorithm\n";
                cout<<"\nStep 1- Start\n";
                cout<<"Step 2- Take Credit Card Details from the user\n";
                cout<<"Step 3- Now we store even number places elements to an array, Array Name: [even] - { Note: We are not talking in reference of index } \n"; 
                cout<<"Step 4- Add all the elemnts of [even]\n";
                cout<<"Step 5- Now we store odd number places elements to an array but multiplying each element by 2, Array Name: [cr2] - { Note: We are not talking in reference of index }\n";
                cout<<"Step 6- If any element of [cr2] is equal or higher than 10 then substract it by 9 and store it in a new array, if it's below 10 then simply store it as it is, Array Name: [cr3]\n";
                cout<<"Step 7- Add all the elements of [cr3]\n";
                cout<<"Step 8- Now add sum of both [even]+[cr3]\n";
                cout<<"Step 9- If sum divided by 10 gives 0 [sum%10==0], then go to Step 10, otherwise go to Step 11\n";
                cout<<"Step 10- Show Credit Card is Valid, then goto Step 12\n";
                cout<<"Step 11- Show Credit Card is Invalid\n";
                cout<<"Step 12- End\n";
                cout<<"\nOr Head Over to: https://rebrand.ly/algo_cc";
                break;
            case 3:
                men=1;
                break;
            default:
                cout<<"\nEnter Valid Input";
                break;
        }
    }
}