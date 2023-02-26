#include<bits/stdc++.h>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<iostream>
#include<vector>

using namespace std;

string stdName1(string s){
    string temp; string res;
    stringstream ss(s);
    while (ss>>temp)
    {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i ; i <= temp;i++)
        {
            temp[i] = tolower(temp);
        }res+=temp;
            res+=" ";
    }res =res.substr(0,res.size()-1); 

    while(res[res.size()-1)]!=' ')
    {
            res =res.substr(0,res.size()-1);
    }
    res.insert(res.size()-1, ",");
    for (int i = 1; i < res.size()-1 ; i++)
    {
        temp1[i]= tolower(temp1[i]);
    }
    res+=temp1;
    return res;
}
string stdName(string d){
    stringstream ss (d);
    string temp;string res;
    while(ss>>temp)
    {
        temp[0]=toupper(temp[0]);
        for (int i = 1; i < temp.size()-1; i++)
        {
            temp[i]=tolower(temp[i]);
        }res+=temp;
            res+= " ";
                res=res.substr(0,temp.size()-1);
        while(res[res.size()-1]!=' ')
        {
            res=res.substr(0,res.size()-1);
        }res =res.substr(res.size()-1);
            res +=", "res;
        for (int i = 0; i <temp.size()-1; i++)
        {
             temp[0]=toupper(temp[0]);
        }res+=temp;
        return res;    
    }
}
int main(){
    string name,date;
    getline(cin, name);
    cout << stdName(name) << endl << stdName1(name) << endl;
    return 0;
}