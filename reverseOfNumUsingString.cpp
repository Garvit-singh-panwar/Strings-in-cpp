#include<iostream>
#include<string>
using namespace std;

void reverse_of_Num(int num)
{
    string strnum = to_string(num);
    for(int i = strnum.length()-1 ; i >=0 ; i--)
    {

        cout << strnum[i] ;

    }
    cout << endl;
}

int main()
{

int num ;
cout << "Enter a num whose reverse you want : ";
cin >> num ;

reverse_of_Num(num);




    return 0;
}