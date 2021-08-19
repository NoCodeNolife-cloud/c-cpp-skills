#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"call Base construction"<<endl;
    }

    ~Base(){
        cout<<"call Base destruction"<<endl;
    }

    virtual void function(){
        cout<<"call Base function"<<endl;
    }
};

class Override:public Base{
public:
    Override(){
        cout<<"call override construction"<<endl;
    }

    ~Override(){
        cout<<"call Override destrution"<<endl;
    }

    void function()override{
        cout<<"override function"<<endl;
    }
};

class Overload{
public:
    void function(int x){
        cout<<"overload function"<<endl;
    }

    void funcion(double x){
        cout<<"overload function"<<endl;
    }
};

class Hide:public Overload{
public:
    void function(){
        cout<<"hide function"<<endl;
    }
};

class Final{
public:
    virtual void function()final{
        cout<<"can't be override"<<endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
