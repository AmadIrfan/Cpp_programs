#include<iostream>
using namespace std;
int main(){
int day, tp,rtp,utp,rtp1,utp1,trutp;
cout<<"Enter number of days ";
cin>>day;
for (int i = 01; i <= day; i++)
{
    cout<<" Enter treated patients ";
    cin>>tp;
    // cout<<" Enter un-treated patients ";
    // cin>>utp;
    if (i==1)
    {
       rtp= tp-7;
       utp=rtp;
    }
    if (i==2)
    {
       rtp1= tp-7;
       utp1=rtp1;
       trutp=utp+utp1;
    }
    
}

}