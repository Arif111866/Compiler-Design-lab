#include<iostream>
#include<string>
#include<map> 
#include<vector> 
using namespace std ;

map<int , string> type ;
map<int , string> sub ;
map<int , string> sem ;
map<int , string> year ;
map<string, string> dpt ;
void default_value()
{
    
    dpt["CSE"] = "Computer Science & Engineering" ;
    dpt["EEE"] = "Electrical & Electronic Engineering" ;
    
    year[1] = "1st year" ;
    year[2] = "2nd year" ;
    year[3] = "3rd year" ;
    year[4] = "4th year" ;
    
    sem[1] = "1st semester" ;
    sem[2] = "2nd semester" ;
    sem[3] = "3rd semester" ;
    sem[4] = "4th semester" ;
    sem[5] = "5th semester" ;
    sem[6] = "6th semester" ;
    
    sub[1] = "DBMS" ;
    sub[2] = "WEB Engneering" ;
    sub[3] = "soft Eng";
    sub[4] = "Compiler design" ;

    type[1] = "Theory" ;
    type[2] = "lab" ;

}
void abbreviates(string s)
{
    string st = "" ; 
    st += s[0] ; st += s[1] ; st += s[2] ;
    cout << st << endl ;
    cout << dpt[st] << ", " << year[int(s[4]-'0')] << "," << sem[int(s[5]-'0')] << ", " << sub[int(s[6] - '0')] << ", " << type[int(s[7] - '0')] << endl;
}
int main()
{
    string s ;
    getline(cin, s);
    default_value() ;
    abbreviates(s) ;
}
