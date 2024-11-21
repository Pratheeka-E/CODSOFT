#include<iostream>
#include<cstdlib>
using namespace std;

char space[3][3]={{'1','2', '3'},{'4', '5', '6'},{'7', '8', '9'}};
string n1 ="";
string n2 ="";
int row;
int column;
char token='x';
bool tie;
void functionone()
{
  
    std ::cout << "   |     |    \n";
    std ::cout << " "<< space[0][0] <<" |   "<< space[0][1] <<" | "<< space[0][2] << "  \n";  
    std ::cout << "___|_____|____\n";
    std ::cout << "   |     |    \n";
    std ::cout << " "<< space[1][0] <<" |   "<< space[1][1] <<" | "<< space[1][2] << "  \n";
    std ::cout << "___|_____|____\n";
    std ::cout << "   |     |    \n";
    std ::cout << " "<< space[2][0] <<" |   "<< space[2][1] <<" | "<< space[2][2] << "  \n";
    std ::cout << "   |     |    \n";
}

void functiontwo()
{
    int digit;
    if(token=='x')
    {
        std ::cout << n1 <<" please enter : \n";
        cin >> digit; 
    }
    if(token=='0')
    {
        std ::cout << n2 <<" please enter : \n";
        cin >> digit;
    }
    if(digit==1)
    {
        row=0;
        column=0;
    }
    if(digit==2)
    {
        row=0;
        column=1;
    }
    if(digit==3)
    {
        row=0;
        column=2;
    }
    if(digit==4)
    {
        row=1;
        column=0;
    }
    if(digit==5)
    {
        row=1;
        column=1;
    }
    if(digit==6)
    {
        row=1;
        column=2;
    }
    if(digit==7)
    {
        row=2;
        column=0;
    }
    if(digit==9)
    {
        row=2;
        column=2;
    }
    if(digit==8)
    {
        row=2;
        column=1;
    }
    else if (digit<1 || digit>9)
    {
        std ::cout <<"invalid !!" << endl;
    }
    else if(token == 'x' && space [row][column]!='x' && space[row][column]!='0')
    {
    space[row][column]='x';
    token='0';
    }
    else if(token == '0' && space [row][column]!='x' && space[row][column]!='0')
    {
    space[row][column]='0';
    token='x';
    }
    else 
    {
        std::cout << "there is no empty space !!"<<endl;
        functiontwo();
    }
    functionone();
}
bool functionthree()
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        return true;
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[2][0])
    return true;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j]!='x' && space[i][j]!='0')
            return false;
        }
    }
    tie = true;
    return false;
}

int main()
{
    std ::cout << "Enter the name of first player : \n";
    getline(cin,n1);
    std ::cout << "Enter the name of second player : \n";
    getline(cin,n2);
    std ::cout << n1 << " is the first who play first\n";
    std ::cout << n2 << " is the second who play second\n";
    while(!functionthree())
    {
        functionone();
        functiontwo();
        functionthree();
    }
    if (token=='x' && tie == false)
    {
        cout << n2 << " WINS !!"<<endl;
    }
    else if(token =='0' && tie == false)
    {
        std ::cout << n1 << " WINS !!" << endl;
    }
    else
    {
        std ::cout << "It's a draw !"<<endl; 
    }
}