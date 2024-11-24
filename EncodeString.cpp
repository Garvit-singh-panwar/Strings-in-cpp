// an encoded string(s) is given , aand the task is to decode it .
//  the encoded patern us that the occerence of the string is given at the starting of the string and each string is enclosed by square brackets.

// note: the occerrence of a single string is less than 1000

// input : s = 1[b] 
// output : b

// input : s = 3[b2[ac]]
// output : bacacbacacbacac

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string decode_String( string &s)
{
string result;

// traversing the encoded string
for(int i = 0 ; i< s.length() ; i++)
{

        if(s[i] != ']')
        {
            result.push_back(s[i]);
        }
        else
        {   
            string tempstr;

            // extracting the string from result
            while( !result.empty() && result.back() != '[' )
            {
                tempstr.push_back(result.back());
                result.pop_back();
            }

            //  reversing the string
            reverse(tempstr.begin() , tempstr.end());

            // removing last character which is '['
            result.pop_back();


            string s_num;

            // extracting s_num from result 
            while(!result.empty() && result.back() > '0' && result.back() < '9')
            {
                s_num.push_back(result.back());
                result.pop_back();
            }

            // reversing the s_num string
            if(s_num.size() > 1)
            {
                reverse(s_num.begin() , s_num.end());
            }

            // converting string to integer
            int num = 1;
            if(s_num.size() > 0)
            {
                num = stoi(s_num);
            }
            

            // inserting string in result num times
            while(num > 0)
            {
                result += tempstr;
                num--;
            }


        }



}

return result;
}



// here space complexity = O(n) where n = length of decoded string
// here time complexity is O(n) where n is the length of decoded string

int main()
{

string str;

str = "ed3[re2[c[d[e]]]]";

cout << decode_String(str);




    return 0;
}