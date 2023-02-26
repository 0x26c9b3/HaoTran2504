//Bài 52. CamelCase

#include<bits-stdc++.h>
using namespace std;

int camelCase(string s){
    int res = 1;
    for(char x : s){
        if(x <= 'Z') res++;
    }
    return res;
}
int main(){
    ofstream fout(getenv("OUTPUT_PATH"));
    
    string s;
    
    getline(cin, s);
    
    int result = camelCase(s);
    
    fout << result << endl;
    
    fout.close();
    
    return 0;
}
/*This code is a C++ program to count the number of words in a string in CamelCase notation.

The function camelCase() takes a string as input and returns the number of words in it.

In line 10, "int res = 1" sets the counter for words to 1.
In line 12, a for loop is used to iterate over every character "x" in the input string "s".
In line 13, an if statement checks if the current character is upper case (by checking if the value is less than or equal to 'Z').
If the character is upper case, the word count is incremented by 1.
In line 16, the final count of words is returned.
In the main() function:

The ofstream object "fout" opens an output file using the "OUTPUT_PATH" environment variable as the filename.
A string "s" is declared.
In line 26, the getline function is used to input a string from the standard input device into "s".
In line 28, the function result = camelCase(s) calls the function with the input string "s" and stores the result in the variable "result".
In line 30, the result is written to the output file.
In line 32, the output file is closed.
Test Cases:

Input: "saveChangesInTheEditor", Output: 5
Input: "camelCaseIsPopular", Output: 3
Input: "TestCase", Output: 2
Note: The input is taken from the standard input device and the results are written to an output file specified by the "OUTPUT_PATH" environment variable.*/