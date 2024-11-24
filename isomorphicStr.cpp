// Given two string s and t determine if they are isomorphic

// input : s = "egg" , t = "add"

// output : yes


#include<iostream>
using namespace std;

bool isomorphic(string &s1 , string &s2)
{
    
    if(s1.size() != s2.size()) return false; 
    int m = 'z' -'a';
    int freq1[m] = {-1};
    int freq2[m] = {-1};

    for(int i =0 ; i < s1.length() ; i++)
    {
        if(freq1[s1[i]-'a'] != freq2[s2[i]-'a'])
        {
            return false;
        }
        
        freq1[s1[i]-'a'] = freq2[s2[i]-'a']= i;

    }

return true;
}

int main()
{

string s1 = "egg";
string s2 = "ada";

if(isomorphic(s1,s2))
{
    cout << "strings are isomorphic " << endl;
}
else{
    cout << "strings are not isomorphic " << endl;
}


    return 0;
}