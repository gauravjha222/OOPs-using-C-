#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main(){
int s,l,b;
float r,bs,ht;
cout<<"enter side of square:";
cin>>s;
cout<<"enter length breadth of rectangle:";
cin>>l>>b;
cout<<"enter radius of circle:";
cin>>r;
cout<<"enter base and hight of traingle:";
cin>>bs>>ht;
cout<<"area of squqre is"<<area(s)<<endl;
cout<<"area of ractangle is"<<area(l,b)<<endl;
cout<<"area of circle is"<<area(r)<<endl;
cout<<"area of triangle is"<<area(bs,ht)<<endl;
}
int area(int s)
{
return(s*s);}
int area(int l,int b){
return(l*b);}
float area(float r){
return(3.14*r*r);}
float area(float bs,float ht){
return(bs*ht/2);
}

