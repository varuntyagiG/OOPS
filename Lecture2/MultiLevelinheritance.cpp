#include<iostream>
#include<vector>
using namespace std;

class fruit{
       public:
       string name = "banana";
};

class Mango:public fruit{
       public:
       string taste = "normal";
};

class Alpanso:public Mango{
       public:
       void alphansoo(){
              cout << "Alphansoo" << endl;
       }
};

int main(){
       Alpanso a;
       cout << a.name << " " << a.taste << endl;
       a.alphansoo();
       return 0;
}