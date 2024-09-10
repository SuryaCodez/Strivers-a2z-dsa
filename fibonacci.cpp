#include <iostream>
using namespace std;
void fibonacci(int &n){ // passed value of n by reference to the function 
    int num1=0;//first number is anyways 0
    int num2=1; //second number is anyways 1
    cout<<"0,1"; // since these are the first two elements , print them anyways
    for(int i=0;i<n;i++){ // loop from 0 to the user specified value n
        int temp=num1+num2; // store the sum of previous two elements in temporary variable
        //cout<<"0,1,"<<temp<<",";
        num1=num2; // update the value of num1 position to the previous num2 position
        num2=temp; // update the value of the num2 position to the present temporary value
        cout<<","<<temp; // print the temporary stored values i.e the current value in the fibonacci series
    }
}

int main() {
    int n; // declare a variable n
    cout<<"enter the number:"; // take the value of n from user, this is the value UNTIL which the fibonacci series will be printed
    cin>>n;
    fibonacci(n); // print the actions done by the function

    return 0; // returns 0 as it is an int main
}
