#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Fruits{
       public:
       string name;
       int quantity;

       Fruits(){
              this->name = "mango";
              this->quantity = 2;
       }

       // copy constructor
       Fruits(Fruits& F1){
              this->name = F1.name;
              this->quantity = F1.quantity;
       }

       void taste(){
              cout << "Very Tasty" << endl;
       }

       void Healthy(){
              cout << "Good for health" << endl;
       }

       ~Fruits(){
              cout << "I am Destructor used to finish obj." << endl;
       }
};


int main(){
       Fruits F1;
       
       Fruits F2(F1);

       cout << F2.name << endl;
       cout << F2.quantity << endl;
       return 0;
}