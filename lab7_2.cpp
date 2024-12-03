#include <iostream>
using namespace std;

int main(){
 string name,movie,date,bye;
 int studentnum = 0;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
cin >> name;
cout <<"Fahsai: Wow!!! " << name << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
cin >> studentnum;
cin.ignore();
cout << name <<  ": " << studentnum ;
cout << "Fahsai: I think you may be GEAR " << (studentnum / 10000000) -12 <<" I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
getline(cin,movie);
cout << name << ": " << movie <<"\n";
cout << "Fahsai: So....which day are you free to go with me?\n";
getline(cin,date);
cout << name <<  ": " << date << "\n";
cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching Star Wars VII with you.\n";
getline(cin,bye);
cout << name << ": " << bye << "\n";
cout << "Fahsai: 555+ see you Next Monday. Bye Bye \\(^ ^)/\n";
}