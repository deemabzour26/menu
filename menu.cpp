#include<iostream>
using namespace std;

 int main(){
   cout<<"1-find prime number \n";	
   cout<<"2-find factorial \n";
   cout<<"3-find the series \n";
   cout<<"4-exit \n";	
 	int ch=0;
 	cout<<"chose a choice please : ";
 	cin>>ch;
	  int n,l=0;
	  int y,f=1;
	   int x ,num,p=1;
	   double totres=0,fac=1,res;
 	switch(ch)
 	{//s
    case 1:
    {
    cout<<"enter a number : ";	 	
    cin>>n;
    if(n<=1)	
    cout<<"its not a prime num   \n";//if	
    else{//else
 	for(int i=2;i<n;i++)	
 	{//f
	 if(n%i==0)	
	 l=1;
	 }//f	
 	if(l==0)	
 	cout<<"its  a prime num   \n";	
 	else
	 cout<<"its not a prime num   \n";}	
    }
	
	 break;//else
	 	
	 case 2:	
	 
	 cin>>y;
	 for(int j=1;j<=y;j++)	
	 f*=j;//f2	
	 cout<<f<<endl;
	 break;
	 case 3:
	p=1,f=1;
	 cout<<"enter a number : ";	 	
    cin>>x;
    cout<<"enter a number of terms : ";	 	
    cin>>num;
	 for(int c=1;c<=num;c++)	
    {//for

	 for(int d=1;d<=c;d++)
	 p*=x;//fn
	 
	 for(int b=1;b<=c;b++)
	 f*=b;//fn
	 res=p/f;
	 
	 totres+=res;
	 	
	 	
}//for	
cout<<"the total result is :  "	<<totres;
break;

case 4:
cout<<"the end exit ";
break; 	


default :cout<<"no cases matched  "<<endl; }//s
}//m