// Given two string s and t , return true if t is an anagream of s , and false otherwise.

// constraints: string s and t will only contain lowercase alphabetical characters

// input 1: "anagram" , t="nagaram" 
// output 1: yes

// input 2 = "bank" , t="atm"
// output 2: no

// to see one word is a anagram of another word 
// we have to check all the alphabet in word 1 is also in word word 2
// and the the count of all the alphabet is also same

// means 2nd word is the rearranged word of 1stword

#include<iostream>
using namespace std;

// bool check_anagram(string &s1 , string &s2)
// {

// if(s1.length() != s2.length()) return false;

// int m = 'z' - 'a';
// int freq[m] = {0};

// for(int i = 0 ; i < s1.size() ; i++)
// {
//    int  pointer = s1[i] -'a';
//     freq[pointer]++;
// }

// for(int i = 0 ; i < s2.size();i++)
// {
//     int pointer = s2[i] - 'a';
//     freq[pointer]--;
// }

// for(int i = 0 ; i < m ; i++)
// {
//     if(freq[i] != 0)return false;
// }


// return true;
// }

bool check_anagram(string &s1 , string &s2)
{

if(s1.length() != s2.length()) return false;

int m = 'z' - 'a';
int freq[m] = {0};

for(int i = 0 ; i < s1.size() ; i++)
{
   
    freq[ s1[i] - 'a']++;
    freq[ s2[i] - 'a']--;
}
for(int i = 0 ; i < m ; i++)
{
    if(freq[i] != 0)return false;
}

return true;
}

// here timecomplexity = O(length of strings)
// here spacecomplexity = O(1)

int main()
{


 string s1 ="anagram";
 string s2 ="nagaram";

 cout << check_anagram(s1,s2) << endl;

}