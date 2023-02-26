#include<bits-stdc++.h>
#include<map>
#include<cstdio>
#include<string>
#include<sstream>
#include<iostream>
#include<set>
using namespace std;

string email(string s){
    stringstream ss(s);
    string temp,res;
    while (ss>>temp)
    {
        res+=tolower(temp[0]);
    }
    res= res.substr(0,res.size()-1);
    for (int i = 0; i < temp.size()-1 ; i++)
    {
        temp[i]=tolower(temp[i]);
    }
    res+=temp;
    res+="@gmail.com";
    return res;
}
string password(string s){
    stringstream ss(s);
    string res;
    for (int i = 0; i < s.size()-1; i++)
    {
        if((i==0 || i==3) && s[i]=='0') continue;
        if(s[i]>= '0' && s[i]<= '9') res+=s[i];        
    }
    return res;
}


int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,name,pass;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>pass){
            {
                if(pass[0]>='0' && pass[0] <='9' )break;
                name+=pass;
                name+=" ";
            }
        }cout << email(name) <<endl << password(pass) << endl;
    }   

    return 0;
}