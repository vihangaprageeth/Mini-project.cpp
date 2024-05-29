#include <iostream>

using namespace std;

int main()
{int sales[5],count,avr=0,tot=0,avrcount=0;
 for (count=0;count<5;count++)

 {
     cout<<"Enter a sales =";
     cin>>sales[count];
 }
 for (count=0;count<5;count++)


 {
    tot= tot + sales[count];
 }

 avr=tot/5;
 for(count=0;count<5;count++)
{
    if(sales[count]>avr)
    {
        cout<<sales[count+1]<<endl;
    }
    else
    {
    avrcount++;
    }
}
{
    cout<<"Total count of days ="<<avrcount;
}
    return 0;
}

