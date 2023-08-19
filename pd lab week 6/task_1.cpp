/*Try finding your ancestors and offspring with code.
Create a function that takes a number x and a character y (‘m’ for male, ‘f’ for female), and returns the
name of an ancestor (m/f) or descendant (m/f).
● If the number is negative, return the related ancestor.
● If positive, return the related descendant.
● You are generation 0. In the case of 0 (male or female), return "me!".*/
#include<iostream>
using namespace std;
string Generation(int code,char gdr);
int main(){
    int code;
    char gdr;
    string result;
    cout<<"Enter a code from -3 to 3 ";
    cin>>code;
    cout<<"Enter m or M for Male or f or F ";
    cin>>gdr;
result=Generation(code,gdr);
cout <<result;
}
string Generation(int code,char gdr){
string cast;
if (code==-3)
{
    if ((gdr=='f'||gdr=='F'))
    {
        /* code */
    cast="great grand-mother";
    }
    if ((gdr=='M'||gdr=='m'))
    {
    cast="great grand-Father";
    }
    
}
if (code==-2)
{
    if (gdr=='f'||gdr=='F')
    {
        /* code */
    cast="grandmother";
    }
    if (gdr=='m'||gdr=='M')
    {
        /* code */
    cast="grand Father";
    }
    
}
if (code==-1)
{
    if (gdr=='f'||gdr=='F')
    {
        /* code */
    cast="mother";
    }
    if (gdr=='m'||gdr=='M')
    {
        /* code */
    cast="Father";
    }
    
}
if (code==-0)
{
    if (gdr=='f'||gdr=='F')
    {
        /* code */
    cast="me!";
    }
    if (gdr=='m'||gdr=='M')
    {
        /* code */
    cast="!";
    }
    
}
if (code==3)
{
    if ((gdr=='f'||gdr=='F'))
    {
        /* code */
    cast="great grand-daughter";
    }
    if ((gdr=='M'||gdr=='m'))
    {
    cast="great grand-son";
    }
    
}
if (code==2)
{
    if (gdr=='f'||gdr=='F')
    {
        /* code */
    cast="granddaughter";
    }
    if (gdr=='m'||gdr=='M')
    {
        /* code */
    cast="grandson";
    }
    
}
if (code==1)
{
    if (gdr=='f'||gdr=='F')
    {
        /* code */
    cast="daughter";
    }
    if (gdr=='m'||gdr=='M')
    {
        /* code */
    cast="Son";
    }
    
}

return cast;
}