#include<iostream> 
#include<string.h>
using namespace std ; 

// Function overloading 
class A {
    public:

    void sayHello(){
        cout << "Hello" << endl;
    }
    // using different number of parameters 
    void sayHello(int n){
        for(int i = 0 ; i < n ; i++){
            cout << "Hello \n" ;
        }
    }
    // using different type of parameters 
    void sayHello(string name){
        cout << "hello" << name << endl ;
    }
    // using default parameters 
    
};

// Operator overloading 

class complex{
    public:
    int real ;
    int img ;
    complex(int x = 0 , int y = 0){
        this -> real = x ;
        this -> img = y ;
    }
    // overloading + operator
    complex operator+(complex operand){
        complex res ;
        res.real = this->real + operand.real ;
        res.img = this->img + operand.img ;
        return res ;
    }
    bool operator==(complex operand){
        return this -> real == operand.real && this->img == operand.img ;
    }
};

// Method overriding 

class Human{
    public:
    void speak(){
        cout << "Hello , good morning" << endl ;
    }
} ;
class Child : public Human{
    public:
    void speak(){
        cout << "I am hungry" << endl ;
    }
};
int main(){
    complex a(8, 12) ;
    complex b(3 ,4) ;
    complex c = a + b ;
    cout << c.real << " " << c.img << endl ;
    (a == b) ? cout << "true" : cout << "false" ;

    Child ch ;
    ch.speak() ;
    return 0 ;
}