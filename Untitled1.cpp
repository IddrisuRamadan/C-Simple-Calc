#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ch = 0;
    float A = 0;
    float B = 0;
    cout<<"Advance Calculator"<<endl;
    cout<<"Enter the type of operation you want to calculate"<<endl;
    cout<<"[1] Addition"<<endl;
    cout<<"[2] Subtraction"<<endl;
    cout<<"[3] Multiplication"<<endl;
    cout<<"[4] Division"<<endl;
    cout<<"Choose operation"<<endl;

    cin >>ch;

    cout<<"Enter First Number"<<endl;
    cin>>A;
    cout<<"Enter Second Number"<<endl;
    cin>>B;

    cout<<"Result: ";

    switch(ch)
    {
    case 1:
        cout<<(A+B);
        break;

    case 2:
        cout<<(A-B);
        break;

    case 3:
        cout<<(A*B);
        break;

    case 4:
        cout<<(A/B);
        break;
    default:
        cout<<"invalid operation"<<endl;
    }
    return 0;
}
