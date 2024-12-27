#include <iostream>
using namespace std;

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// code by AHNUF MIR

int main() {
    int a, b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    cout<<"Before Swapping:"<<endl;
    cout<<"Num 1: "<< a<< " Num 2: "<<b<<endl;

    swap(&a, &b);
    cout<<"After Swapping:"<<endl;
    cout<<"Num 1: "<< a<< " Num 2: "<<b;
}