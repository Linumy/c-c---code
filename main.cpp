//This is a procedure to generate four arithmetic operations . Yang chaoqun  2016.3.5
#include<iostream>
#include<time.h>
using namespace std;
float num[6];
void sort(){                     
	num[0]=rand()%100;
	num[1]=rand()%100;
	num[2]=rand()%100;
	num[3]=rand()%100;
	for(int i=0;i<4;i++){
		for(int j=0;j<i;j++){ 
			if(num[i]>num[j])
			{
				int temp=0;
				temp=num[i];
                num[i]=num[j];
                num[j]=temp;
			}
		}
	}	
}
void main(){               
	srand((unsigned)time(NULL));
	for(int i=0;i<30;i++){
		sort();
	    num[4]=rand()%4+1;
		num[5]=rand()%2+1;
		if(num[4]==1){
			if(num[5]==1)
				cout<<num[1]<<"+"<<num[2]<<"="<<endl;
			else{
				for(;;){
					if(num[0]==0||num[1]==0)
						sort();
					else{
						cout<<"("<<num[2]<<"/"<<num[0]<<")"<<"+"<<"("<<num[3]<<"/"<<num[1]<<")"<<"="<<endl;
						break;
					}
				}
			}
		}
		else if(num[4]==2){
			if(num[5]==1)
				cout<<num[1]<<"-"<<num[2]<<"="<<endl;
			else{
				for(;;){
					if(num[0]==0||num[1]==0)
						sort();
					else{
						cout<<"("<<num[2]<<"/"<<num[0]<<")"<<"-"<<"("<<num[3]<<"/"<<num[1]<<")"<<"="<<endl;
						break;
					}
				}
			}
		}
		else if(num[4]==3){
			if(num[5]==1)
				cout<<num[1]<<"*"<<num[2]<<"="<<endl;
			else{
				for(;;){
					if(num[0]==0||num[1]==0)
						sort();
					else{
						cout<<"("<<num[2]<<"/"<<num[0]<<")"<<"*"<<"("<<num[3]<<"/"<<num[1]<<")"<<"="<<endl;
						break;
					}
				}
			}
		}
		else if(num[4]==4){
			if(num[5]==1){
				for(;;){
					if(num[2]==0)
						sort();
					else{
						cout<<num[1]<<"/"<<num[2]<<"="<<endl;
					    break;
					}
				}
			}
			else{
				for(;;){
					if(num[0]==0||num[1]==0||num[3]==0)
						sort();
					else{
						cout<<"("<<num[2]<<"/"<<num[0]<<")"<<"/"<<"("<<num[3]<<"/"<<num[1]<<")"<<"="<<endl;
						break;
					}
				}
			}
		}
	}
}