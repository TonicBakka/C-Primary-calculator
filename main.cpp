#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
char z;
float x,y,o;
clrscr();
cout<<"Enter the problem(The problem can be written like x+y or x/y)";
cin>>x>>z>>y;
cout<<"\n Calculating... \n";
delay(3000);
switch(z){
case '+' : o=x+y; break;
case '-' : o=x-y; break;
case '*' : o=x*y; break;
case '/' : o=x/y; break;
}
cout<<"The output is "<<o;
delay(2000);
}
