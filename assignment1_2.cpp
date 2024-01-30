#include<iostream>
#include<string>
#include<map> 
#include<vector> 
using namespace std ;
bool ok(char s)
{
    if(s == 'a' ||s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'I' || s == 'O' || s == 'U')
    return true;
    return false;
}
void Count_vowels_and_consonant(string s)
{
    int number_vowels =0 , number_consonant = 0 ;
    for(int i =0 ; i<s.size() ; i++){
        if(ok(s[i]))
            number_vowels++;
        else number_consonant++;
    }
    cout << "number of vowels are = " << number_vowels << "\nnumber of consonants are = " << number_consonant << endl ;
}
void which_vowels_and_consonant(string s)
{
    map<char , int > mp ;
    for(auto it : s)
        mp[it] ++ ;
    cout << "vowels which are existed are =" ;
    string v = "aeiouAEIOU" ;
    for(auto it : v)
        if(mp[it] && it >= 'a')
            cout << it;
    cout << endl ;

    cout << "consonant which are existed are =" ;
    for(char i = 'a' ; i <= 'z' ; i++) {
        if(ok(i)) continue ;
        if(mp[i] || mp[i-32])
        cout << i ;
    }
    cout << endl ;
}
void string_div(string s)
{
    vector<string> vst , cst ;
    string str ="" ;
    for(auto it : s){
        if(it == ' '){
            if(ok(str[0]))
                vst.push_back(str) ;
            else cst.push_back(str) ;
            str = "" ;
        }else str += it ;
    }
    if(str.size()){
        if(ok(str[0]))
                vst.push_back(str) ;
            else cst.push_back(str) ;
    }
    cout << "String for vowels = " ;
    for(auto it : vst)
        cout << it << " ";
    cout << endl ;
    cout << "String for consonant = " ;
    for(auto it : cst)
        cout << it << " ";
    cout << endl ;
}
int main()
{
    string s ;
    getline(cin, s);
    Count_vowels_and_consonant(s) ; cout << endl ;
    which_vowels_and_consonant(s) ; cout << endl ;
    string_div(s) ; cout << endl ;
}
