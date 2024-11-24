// Given an array of string write a program to find the largest common prefix string amongst an array of string 

// input: arr = {"flower" , "flight" , "flask"};

// output : "fl"

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommon_prefix(vector <string> &str)
{

    // sorting the array 
    sort(str.begin() , str.end());

    string s1 = str[0]; //first string
    string s2 = str[str.size()-1]; //last string
    int i = 0;
    int j = 0;
    string ans ="";
    while( i < s1.size() && j < s2.size())
    {
        if(s1[i] == s2[j])
        {
            ans += s1[i];
            i++;
        j++;
        }
        else{
            return ans;
        }
        
    }
return ans;
}


int main()
{

int n;
cout << "Enter no of strings: " ;
cin >> n;

cout << " Enter strings  " << endl;
vector <string> str(n);
for(int i = 0; i < n ; i++)
{
    cin >> str[i];
    
}
cout << "longest common prefix in our string array is " << longestCommon_prefix(str) << endl;


}