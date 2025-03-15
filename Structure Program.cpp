#include<iostream>
using namespace std;
struct Area
{
	int length;
	int width;	
};

int main()
{
	Area bedroom;
	bedroom.length = 12;
	bedroom.width = 12;
	
	cout<<bedroom.length*bedroom.width;
}