// An encoded string(s) is given , and the task is to decode it.
// the encoded pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed bby square brackets.

// Note : the occurrence of a single string is less than 1000

// input s =1[b]
// output: b

//  input s =3[b2[ca]]
// output: bcacabcacabcaca

#include<iostream>
#include<string>
#include<algorithm>
using  namespace std ;

string decode(string &str)
{
    string result ;
    string stl ;
    string Snum ;
    // int num = 0;

    for(int i = 0 ; i < str.length() ; i++)
    {
        
        if(str[i] != ']')
        {
            result.push_back(str[i]);
        }
        else
        {
            int j = result.size()-1;
            while( result[j] != '[')
            {
                // if(result[j] == '[')
                // {
                //     result.pop_back();
                //     break;
                // }
                    stl.push_back(result[j]);
                    result.pop_back();
                    j--;
                
            }
            reverse(stl.begin() , stl.end());
            result.pop_back();
            j--;
            while(result[j] >= '0' && result[j] <= '9')
            {
                Snum.push_back(result[j]);
                result.pop_back();
                j--;
            }
            reverse(Snum.begin() , Snum.end());
            int num = stoi(Snum);
           
            for(int i = 0 ; i < num ; i++)
            {  
                int k = 0;
                while(k < stl.size()){
                    result.push_back(stl[k]);
                    k++;

                }
               
            }
            stl.clear();
            Snum.clear();
        }

    }

return result;
}


int main()
{

string encode = "3[dd3[cd]]";

cout << decode(encode);


    return 0;
}