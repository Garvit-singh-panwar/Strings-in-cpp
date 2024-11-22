// given a string str ,sort the given string 
// constraints : the string will contain only alphabetical character from a-z

// input : "helloWorld" 
// output : "dehllloorw"

#include<iostream>
#include<string>
using namespace std;

// void sort_string( string &str)
// {
//     int m = str.length();
// int arr[m];
// int Max = 0;
// for(int i = 0 ; i < str.length(); i++)
// {
   
//         arr[i] = int(str[i]-'a');
   
//         if(Max < arr[i])
//         {
//             Max = arr[i];
//         }
// }

// int Count[Max+1] = {0};

// int pointer;
// for(int i = 0 ; i < str.length() ; i++)
// {
//     pointer = arr[i];
//     Count[pointer]++;
// }

// for(int i = 1 ; i < Max+1 ; i++)
// {
//     Count[i] += Count[i-1];
// }

// for(int i = str.length()-1 ; i >= 0 ; i--)
// {
    
//     str[--Count[arr[i]]] = char(arr[i]+'a') ;

// }
// // delete(arr);
// // delete(Count);

// }

void sort_string(string &str)
{

    int size = str.length() ;
    int m = int('z' - 'a');
    int freq[m] = {0};

    for(int i = 0 ; i < size ; i++)
    {
        int indx = str[i]-'a';
        freq[indx]++;
    }

    int j = 0;
    for(int i = 0 ; i <= m ; i++)
    {
        while(freq[i]--)
        {
            str[j++] =  i +'a';
        }
    }

}

int main()
{

string String = "tervxncahu" ;
sort_string(String);
cout << String  << endl;

    return 0;
}