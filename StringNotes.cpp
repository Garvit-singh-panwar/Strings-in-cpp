#include<iostream>
// to use a string we have to use a header file name string
//    |
//    V
#include<string>
using namespace std;

int main()
{

// String are used to Store sequence of characters 
// These are objects of a class std String in cpp which is used to represent sequence of a character
//  if i want to defince a string i have to write
//  String stringName = "ABCD"
//      |
//      V
string alphabets = "abcd";
string name = "Myname" ;

cout << alphabets << " " << name  << endl;
//  to get input of a string from a user we use cin >>
string input ;
cin >> input ;
cout << input << endl;
//  it take input before blank space it terminate all the character after a blank space
//  if we want to include blank space in our string and we don't want to terminate all the character after blankspaces we have to use getline function
//    |
//    V
getline(cin , input);
cout << input << endl;

// indexing in string is very similar to indexing in an array
// means 1st character is at index 0 and the last indx of string stores the null character which indicates our string is end here

// Every character has a numeric value attach to them 
// a-z , A-Z , * , $ ,+
// a -> 97 , z -> 122 || A -> 65 , Z -> 90 
char a = 'a' ;
char z = 'z' ;
char A = 'A' ;
char Z = 'Z' ;
cout << "ASCII Value of a -> " << int(a) << " , z -> " << int(z)  << " , A -> " << int(A)  << " , Z -> " << int(Z) << endl;  

// difference between string and character array 
// string is a class and string variables are object of class 
// if I want to define a string we have to write
// string StrName = "char";
// here we don't have to give size here Dynamic allocation takes place
// here we can increase or decrese the size of string in runtime
// no pre allocated memory here momory is used efficiently no memory wastage
// they have a no of inbuilt function 
// slower than chararray
// character array is an array of character datatype
// if i want to define a character array we have to write
// char arr[4] = "Char";
// here we have to give the size of array here static memory allocation takes place
// we can not increase or decrease the size of char array at run time to change the size we have to rewrite the size in code
// pre allocated memory unused allocated momory is wasted
// no inbuilt function 
// it is very fater than string

// --------X---------

// string functions

// reverse()
// reverse function reverse a string from starting ptr to end ptr
// reverse(ptr1 , ptr2);
reverse( alphabets.begin(),alphabets.end());
cout << alphabets << endl;
// here time complexity is O(stringlength);


// Substring()
// these function is used to find substring of a string means a part of a string 
// if there is a string "hello" and I only want 4 charactrs from that string we use substring function substring is "hell"
// substr(position,length) position tells the strting point of substring and length tells the length of our substring
string hello = "hello";
cout << hello.substr(1 , 4) << endl;
// if i give the position but don't give the length 
// so our substring is printed from our given position to end it stops when it found null
cout << hello.substr(3) << endl;
// time complexity is O(length)  length is the length of substring which we give;


// + operator is used to concatenate string
string str1 = "hello ";
string str2 = "world" ;
string str3 = str1+str2;
cout << str3 << endl;


// strcat()
// this is ued to concatinate 2 char array
char s1[10] = "hello ";
char s2[10] = "world" ;

strcat(s1,s2);
cout << s1 << endl;
// here it is concatinating s2 in s1

// push_back()
// insert char at the end of the string 
str1.push_back('h');





    return 0;
}