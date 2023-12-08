//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,c,d,e;
    int b;
cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n" ;
cout << "?????: ";
getline(cin, a);
cout << "Fahsai: Wow!!! " << a << " is a really cool name." << "\n" ;
cout << "Fahsai: I think you are an Engineering student." ;
cout << " What is your student ID?"  << "\n" ;
cout << a << ": " ;
cin >> b;
cout << "Fahsai: I think you may be GEAR " << (b-120000000)/10000000 << ". I have a free movie ticket for you.\n" ;
cout << "Fahsai: Let's go to the cinema together!!!" << "\n" ;
cout << "Fahsai: What movie do you want to watch? \n" ;
cout << a << ": " << c ;
cin.ignore() ;
getline(cin, c);
cout <<"Fahsai: So....which day are you free to go with me? \n" ;
cout << a << ":" ;
getline(cin, d) ;
cout << " Fahsai: " << d << "....that is OK!!! I'm looking forward to watching " << c << " with you. \n" ;
cout << a << ": " ;
getline(cin, e);
cout << "Fahsai: 555+ see you " << d << ". Bye Bye \\(^ ^)/" ;

}