#include<iostream>
#include<string>
#include<time.h>
#include <stdio.h>
#include<fstream>
using namespace std;
string str1[4]={"+","-","*","/"};
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,n,m,a,b;
char str2[25];
char str3[25];
string str4[100];
void Input(int n,int p)
{
    m=n;
	string str;
	ofstream outfile;
	outfile.open("a.txt",ios::app);                  
	if(!outfile)
	{
		cerr<<"OPEN ERROR!"<<endl;
		exit(0);
	}
	num1=rand()%100+1;
	num2=rand()%100+1;
	num3=rand()%4;
	num8=num1;
	num9=num2;
	num10=num3;
    itoa(num1,str2,10);
	itoa(num2,str3,10);
	str=str2+str1[num3]+str3;
	n=n-2;
	while(n!=0)                 
	{	
		num4=rand()%2;
		if(num4==0)             
		{
			num5=rand()%2;
		    if(num5==0)            
			{
				num3=rand()%4;
			    num1=rand()%100+1;
			    itoa(num1,str2,10);
		        str=str+str1[num3]+str2;
			}
			else                        
			{
				num3=rand()%4;
			    num1=rand()%100+1;
			    itoa(num1,str2,10);
		        str="("+str+")"+str1[num3]+str2;
			}
		}
		else                             
		{
			num5=rand()%2;
			if(num5==0)                
			{
				num3=rand()%4;
			    num1=rand()%100+1;
			    itoa(num1,str2,10);
		        str=str2+str1[num3]+str;
			}
			else                      
			{
				num3=rand()%4;
			    num1=rand()%100+1;
			    itoa(num1,str2,10);
		        str=str2+str1[num3]+"("+str+")";
			}
		}
		n--;
	}
	str4[p]=str;                        
	for(int i=0;i<p;i++)                
		if(str4[i]==str4[p])
			 Input(m,p);
	cout<<str4[p]<<"                       ";
	outfile<<str4[p]<<endl;
	if(m==2)
	{
	    if(num10==0)                 
		{
			a=num8+num9;
			if(a>0)
				cout<<"result"<<a<<">0";
			else if(a==0)
				cout<<"result"<<a<<"=0";
			else if(a<0)
				cout<<"result"<<a<<"<0";
		}
		else if(num10==1)                   
		{
			a=num8-num9;
			if(a>0)
				cout<<"result"<<a<<">0";
			else if(a==0)
				cout<<"result"<<a<<"=0";
			else if(a<0)
				cout<<"result"<<a<<"<0";
		}
		else if(num10==2)
		{
			a=num8*num9;
			if(a>0)
				cout<<"result"<<a<<">0";
			else if(a==0)
				cout<<"result"<<a<<"=0";
			else if(a<0)
				cout<<"result"<<a<<"<0";
		}
		else if(num10==3)                          
		{
			b=num8%num9;
			if(b==0)
				cout<<"the remainder is 0";
			else
				cout<<"the remainder is not 0";
		}
	}
	cout<<endl;
}
void changeNum(int n)
{
	for(int i=0;i<n;i++)                  
	{
		num6=rand()%9+2;
	    switch(num6)
		{
		case 2:Input(2,i);break;
		case 3:Input(3,i);break;
		case 4:Input(4,i);break;
		case 5:Input(5,i);break;
	    case 6:Input(6,i);break;
		case 7:Input(7,i);break;
        case 8:Input(8,i);break;
	    case 9:Input(9,i);break;
        case 10:Input(10,i);break;	
		}
	}
}
void main()
{
	ofstream outfile1;
	outfile1.open("a.txt");
	if(!outfile1)
	{
		cerr<<"OPEN ERROR!"<<endl;
		exit(0);
	}
	srand((unsigned)time(NULL));             
	cout<<"Input the number of text:";
	cin>>n;
	changeNum(n);
	cout<<"Text is not repeat"<<endl;
}