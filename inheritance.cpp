#include<iostream> 
#include<string.h>
using namespace std ; 


class Human{
    private : 
        int DOB ;
    public : 
        int age ;
        int weight ;
        int height ;

        void setAge(int age){
            this -> age = age ;
        }

        void setWeight(int weight){
            this ->weight = weight ;
        }

};

// inheritance in public mode 
class Male : public Human{
    public : 
        void sleep(){
            cout << "Male is sleeping" << endl ;
        }

        void eating(){
            cout << "Male is eating " << endl ;
        }
};

// inheritance in protected mode 
class Female : protected Human{
    public : 
        void sleep(){
            cout << "Female is sleeping" << endl ;
        }

        void eating(){
            cout << "Female is eating " << endl ;
        }
        int getWeight(){
            return this -> weight ;
        }
        void setWeight(int weight){
            this ->weight = weight ;
        }
};
// inheritance in private mode 
class Child : private Human{
    public : 
        void sleep(){
            cout << "child is sleeping" << endl ;
        }

        void eating(){
            cout << "child is eating " << endl ;
        }
        void setWeight(int weight){
            this -> weight = weight ;
        }
        int getWeight(){
            return this -> weight ;
        }
};

// Multiple inheritance 
class Mammal{
    public: 
        int genus ;
        Mammal(){
            this -> genus = 200;
        }
} ;
class HomoSapien : public Mammal , public Human{ // inherits from 2 classes 

};
int main(){

    Male M ;
    cout << M.weight << endl ;
    M.setWeight(100) ;
    cout << M.weight << endl ;
    M.sleep() ;

    // M.DOB ; // Not accessible since it is private member in parent class 

    Female F;
    F.setWeight(25) ;
    // cout << F.weight << "\n" ; // Not accessible since it is protected now , 
    //and it can't be accessed outside the class 

    cout << F.getWeight() << "\n" ;

    Child C ;
    // cout << C.weight << endl ; // Not accessible since it is private now 
    C.setWeight(10) ;
    cout << C.getWeight() << endl ;

    HomoSapien H ;
    cout << H.genus << endl;
    return 0 ;
}