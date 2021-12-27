#include <iostream>
using namespace std;

int main() {

int y,x;
char ko[20];

cout<<"Enter your letters.. "<<endl;
cin>>ko;
cout<<"select your option:\n";
cout<<"1:Encrept.\n";
cout<<"2:Decrept.\n";
cin>>x;

switch(x){

	case 1:
		for(int i=0;(i<20 && ko[i]!='\0');i++)
		ko[i]=ko[i]+5;
		cout<<"Encrepted word:"<<ko<<endl; 
		break; 
	case 2:
		for(int i=0;(i<20 && ko[i]!='\0');i++)
		ko[i]=ko[i]-5;
		cout<<"Decrepted word:"<<ko<<endl; 
		break;
		defaut:
			cout<<"Wrong inpput \n"<<endl; 
	
}

	return 0;
}
