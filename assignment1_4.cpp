#include<iostream>
#include<string>
#include<map> 
#include<vector> 
using namespace std ;

bool int_vari(string it)
{
    for(int i=0 ; i< it.size() ; i++){
            if(!i){
                if(it[i] >= 'i' and it[i] <= 'n')
                    continue ;
                else if(it[i] >= 'I' && it[i] <= 'N')
                    continue ;
                else return false ;
            }
            else if(it[i] <= 'Z' and it[i] >= 'A') continue ;
            else if(it[i] <= 'z' and it[i] >= 'a') continue ;
            else if(it[i] <= '0' and it[i] >= '9') continue ;
            else return false ;
        }
    return true ;
}
bool short_int(string it){
    if(it.size() >4) return false ;
    for(int i =0 ; i<it.size() ; i++){
        if(i ==0 && it[i] =='0')
            return false ;
        else if(it[i] < '0' or it[i] > '9')return false ;
    }
    return true ;
}
bool long_int(string it){
    if(it.size()  < 5) return false ;
    for(int i =0 ; i<it.size() ; i++){
        if(i ==0 && it[i] =='0')
            return false ;
        else if(it[i] < '0' or it[i] > '9')return false ;
    }
    return true ;   
}
int main()
{
    string s ;
    getline(cin, s);
    vector<string> v ; 
    string str ="" ;
     for(auto it : s){
        if(it == ' '){
           v.push_back(str) ;
            str = "" ;
        }else str += it ;
    }
    if(str.size()){
       v.push_back(str) ;
    }
    for(auto it : v){
        if(int_vari(it)){
            cout << it << " is a Intiger variable" << endl ;
        }
        else if(short_int(it))
            cout << it << " is a short int" << endl ;
        else if(long_int(it))
            cout << it << " is a long int" << endl ;
        else cout << it << " is a invalid input" << endl ;

    } 
}
