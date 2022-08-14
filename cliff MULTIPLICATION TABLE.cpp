#include <iostream>
#include <windows.h>

using namespace std;
void color(int col){
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),col);
}
int main(){
	int m, i;
	color(12);
	cout<<"**********************************"<<endl;
	cout<<"*MULTIPLICATION TABLE BY CLIFFORD*"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"Multiplication of what number do you want?"<<endl<<endl;
	cout<<"PLEASE ENTER NUMBER"<<endl;
	cout<<"MULTIPLES OF ";
	color(10);
	cin>>m;
	
	for(i=0; i<21; i++){
		cout<<i<<". "<<m<<"x"<<i<<"="<<m*i<<endl;
	}
	return 0;
}
