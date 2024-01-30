#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string s ;
    getline(cin, s);
    int word = 0 , letter =0 , digit =0 , character = 0 ;
    int b = 1 ;
    for(int i =0 ; i< s.size() ; i++){
        if(s[i] == ' ' && b){
            word++ ; b= 0 ; continue ;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            letter++ ;
        else if(s[i] >= '0' && s[i] <= '9')
            digit++ ;
        else character++ ;
        b = 1 ;
    }
    if(s.size()) word++ ;
    cout << "the number of word = " << word <<endl ;
    cout << "the number of letter = " << letter << endl ;
    cout << "the number of digit = " << digit << endl  ;
    cout << "the number of character = " << character << endl ;

}
