#include<iostream>
#include<cstdlib>

int main()
{
    float num1,num2;
    char op;
    std :: cout << "enter the operator(+,-,/,*): ";
    std :: cin >> op;
    std :: cout << "enter the two operands: ";
    std :: cin >> num1 >> num2;
    switch(op)
    {
        case '+':
        std ::cout << num1+num2 ;
        break;
        case '-':
        std ::cout << num1-num2;
        break;
        case '*':
        std :: cout << num1*num2 ;
        break;
        case '/':
        std :: cout << num1/num2 ;
        break;
        default:
        std ::cout << "please enter correct operator";
    }
    return 0;
}