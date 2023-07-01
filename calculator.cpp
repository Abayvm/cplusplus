#include <iostream>

using namespace std;

int main()
{
    int fno,sno;
    char op;
    cout<<"Enter the calculation: ";
    cin>>fno>>op>>sno;
    switch(op){
    case '+':
        cout<<fno+sno;
        break;
    case '-':
        cout<<fno-sno;
        break;
    case '/':
        cout<<fno/sno;
        break;
    case '*':
        cout<<fno*sno;
        break;
    default:
        cout<<"Invalid input";
        break;
    }
}
