#include<iostream>
using namespace std;
int main()
{
	int flag = 1;
	do
	{
		cout<<"The loop is working"<<endl;
		cout<<"Do you want to continue\nPress 1 to continue any other key to exit";
		cin>>flag;
	}
	while(flag == 2);
}
