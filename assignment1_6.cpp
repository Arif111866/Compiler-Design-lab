#include<iostream>
#include<string>
#include<map> 
#include<vector> 
using namespace std ;
string ok(string it)
{
    for(int i =0 ; i<it.size() ; i++){
        if(it[i] >= 65 and it[i] <= 90)
            it[i] += 32 ;
    }
    return it ;
}
bool charVariable(string it)
{
   if(it.size() < 4) return false ;
   it = ok(it) ;
    if(it[0] != 'c' or it[1] != 'h' or it[2] != '_') return false ;
    for(int i =3 ; i<it.size() ; i++){
        if((it[i] < 'a' or it[i] > 'z') and  (it[i] < '0' or it[i] > '9')) return false ;
    }
    return true ;
}
bool Binary_var(string it){
     if(it.size() < 4) return false ;
     it = ok(it) ;
     if(it[0] != 'b' or it[1] != 'n' or it[2] != '_') return false ;
      for(int i =3 ; i<it.size() ; i++){
        if((it[i] < 'a' or it[i] > 'z') and  (it[i] < '0' or it[i] > '9')) return false ;
    }
    return true ;
}
bool Binary_number(string it){
    if(it.size() < 2) return false ;
    if(it[0] != '0') return false ;
    for(int i =1 ; i<it.size() ; i++){
        if(it[i] != '0' and it[i] != '1') return false ;
    }
    return true ;
}
int main()
{
    string s ;
    getline(cin, s);
    vector<string> v ; 
    string str = "" ;
    for(int i =0 ; i<s.size() ; i++){
        if(s[i] != ' '){
           str += s[i] ;
        }
        else if(str.size()){
            v.push_back(str) ;
            str = "" ;
        }
    }
    if(str.size()){
        v.push_back(str) ;
    }
    for(auto it : v){
        if(charVariable(it)){
            cout << it << " is a character variable" << endl ;
        }
        else if(Binary_var(it))
            cout << it << " is a binary variable" << endl ;
        else if(Binary_number(it))
                cout << it << " is a binary number" << endl ;
        else cout << it << " is a invalid number" << endl ;
       

    } 
}
