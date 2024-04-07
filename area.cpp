#include<bits/stdc++.h>
using namespace std;
int main(int ch, double array[]) {
	cout<<"enter your choice: 1. find area of circle\n2.find area of rectangle\n";
	cin>>ch;
	switch(ch){
		case 1:
		{
			double r;
			cout<<"enter the radius of the circle:\n";
			cin>>r;
			double res=3.14*(r*r);
			cout<<res;
			break;
		}
		case 2:
		{
			double l,b;
			cout<<"enter the lenth and breadth of the rectangle\n";
			cin>>l>>b;
			double res=l*b;
			cout<<res;
			break;
		}
		default:
		{
			cout<<"invalid choice";
			break;
		}
	}
	return 0;
}
