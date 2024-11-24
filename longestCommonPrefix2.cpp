// Given an array of string write a program to find the largest common prefix string amongst an array of string 

// input: arr = {"flower" , "flight" , "flask"};

// output : "fl"

#include<iostream>
#include<vector>
using namespace std;

string Longest_common_prefix(vector <string> &str)
{
    
    int size = str[0].length() ;

    for(int i = 1 ; i < str.size() ; i++)
    {
        int j = 0;
        while( j < str[0].size() && j < str[i].length() && str[0][j] == str[i][j]  )
        {
            j++;
        }

        size = min(size , j);


    }



return str[0].substr(0 , size);    

}

int main()
{
vector <string> str = {"apple" , "app" , "ape" , "ape"};
cout << "longest common prefix in our string array is " << Longest_common_prefix(str) << endl;



    return 0;
}