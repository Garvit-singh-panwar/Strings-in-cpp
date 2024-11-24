// Given a binary string and an integer k, return the maximum number of consecutive 1's in the string if you can flip at most k 0's 

// input : "0001101011" , k = 2

// Output : 7

// k = 2                  ----------
//    1  1                          |
// "0001101011"                     |
//    ----- --                      |   
// max  5                           |   
//                                  |
//                                  7 is the max in the both
// k = 2                            |
//       1 1                        |
// "0001101011"                     |
//     -------                      |   
//  max   7              -----------         

#include<iostream>
using namespace std;


// int Longest_SubStringOf_ConsecutiveOnes(string &str ,int k)
// {   
//     if(k >= str.size() )
//     {
//         return str.size();
//     }
//     int zeros = 0;
//     for(int i = 0 ; i < str.size()  ; i++)
//     {
//         if(str[i] == 0)
//         {
//             zeros++;
//         }
//     }
//     if( k == zeros) return str.size();
//     int Max = k;

//     for(int i = 0 ; i <)





//     return Max;
// }




int Longest_SubStringOf_ConsecutiveOnes(string &str ,int k)
{

int max_ConsicutiveOnes = 0;
int p = 0;
int e = 0;
int zeros = 0;
while(e < str.size())
{

    if(str[e] == '0')
    {
        zeros++;
    }
    e++;
    
        while(k < zeros)
        {
            if(str[p] == '0') zeros--;
            p++;
        }
    
    max_ConsicutiveOnes = max(max_ConsicutiveOnes , e-p);

}


return max_ConsicutiveOnes;
}

 



int main()
{


string binaryNum = "00000110001100";
int k = 2;

cout << Longest_SubStringOf_ConsecutiveOnes(binaryNum,k);



    return 0;
}