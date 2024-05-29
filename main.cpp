#include <iostream>

using namespace std;




int main()
{


/*{int number_of_vehicles=0,vehicle_number=0,nop=0,totpass=0;
float avr=0;
{
    cout<<"Enter your vehicle number ="<<endl;
    cin>>vehicle_number;

}
{
    cout<<"Enter number of passengers in your vehicle ="<<endl;
     cin>>nop;

}
while(vehicle_number!=0)
{
    number_of_vehicles++;

    totpass=totpass+nop;
    cout<<"Enter your vehicle number ="<<endl;
    cin>>vehicle_number;
    cout<<"Enter number of passengers in your vehicle ="<<endl;
     cin>>nop;

}


avr=totpass/number_of_vehicles;
cout<<"Number of vehicle ="<<number_of_vehicles<<endl;
cout<<"average of passenger ="<<avr<<endl;*/








int x[4],tot=0;
float avr;
for (int i=0;i<4;i++)
{
    cout<<" Enter prize =";
    cin>>x[i];
tot=tot+x[i];
avr=tot/4;
}
for(int a=0;a<4;a++)
{
    cout<<"price of product ="<<a<<"-"<<x[a]<<endl;
}
cout<<"total is = "<<tot<<endl;

cout<<"average is ="<<avr<<endl;



return 0;
}
