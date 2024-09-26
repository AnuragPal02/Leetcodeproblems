#include<bits/stdc++.h>
using namespace std;


class Base{
    private:
     int x;
    public:
       Base(string name){
         cout<<"Baseclass"<<name<<"is created"<<endl;
       }
       ~Base(){
        cout<<"Baseclass is destroyed"<<endl;
       }
       virtual void display(){
        cout<<"This is base class"<<endl;
      }

      int getter(){
          return x;
      }
      void setter(int x){
        this->x = x;
      }
};

class derived: public Base{
    public:
    derived(string name):Base(name){
        cout<<"derived class"<<name<<"Is called"<<endl;
    }
    ~derived(){
        cout<<"derived class is destroyed"<<endl;
    }
    void display(){
        cout<<"This is derived class"<<endl;
    }
};

int main(){
   Base p("asdfa");
}
