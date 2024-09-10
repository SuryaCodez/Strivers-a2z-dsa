#include <bits/stdc++.h>
using namespace std;
bool armstrong(int &n){ //boolean function to return value as true or false to check number if armstrong or not
    int originaln, sum=0, num=0; 
    originaln=n;
    while(originaln!=0){
        originaln/=10;
        num++;
    }
    originaln=n;
    while(originaln!=0){
        int digit=originaln%10;
        sum+=pow(digit,num);
        originaln/=10;
    }
    return sum==n;
}
int main() {
    int n; //the number we want to check if it is an armstrong number
    cout<<"enter the number:"; //taking the number from user
    cin>>n;
    if(armstrong(n)){ // checks the returned value of function and displays result if true or false
        cout<<"yes "<<n<<" is armstrong number";
    }else{
        cout<<"nah "<<n<<" not armstrong number";
    }

    return 0; //return 0 as it is int main
}
