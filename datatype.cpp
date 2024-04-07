#include<bits/stdc++.h>
using namespace std;
int main(){
	int ch;
	cout<<"enter your choice : 1)print int\n2)print long\n3)print float\n4)print double\n5)print char\n6)exit\n";
	cin>>ch;
	switch(ch){
		case 1:
		{
			int n;
			cout<<"enter value of n";
			cin>>n;
			cout<<sizeof(n);
			cout<<"\n";
		}
		case 2:
		{
			long l;
			cout<<"enter value of l";
			cin>>l;
			cout<<sizeof(l);
            cout<<"\n";
		}
		case 3:
		{
			float f;
			cout<<"enter value of f";
			cin>>f;
			cout<<sizeof(f);
            cout<<"\n";
		}
		case 4:
		{
			double d;
			cout<<"enter value of d";
			cin>>d;
			cout<<sizeof(d);
            cout<<"\n";
		}
		case 5:
		{
			char c;
			cout<<"enter value of c";
			cin>>c;
			cout<<sizeof(c);
			cout<<"\n";
			break;
		}
		default:
		{
			cout<<"enter valid datatype";
			break;
		}
	}
	return 0;
}
