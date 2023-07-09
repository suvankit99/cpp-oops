#include<iostream> 
#include<string.h>
using namespace std ; 

class Hero{
    private : 
    int health ;
    public : 
    // class level data member 
    static int timeToComplete ;
    int level ;
    char *name ; 
    int getHealth(){
        return health ;
    }
    void setHealth(int h){
        health = h ;
    }

    Hero(int health , int level){
        this->health = health ;
        this->level = level ;
    }
    // shallow copy 
    Hero( Hero &h){
        strcpy(this->name , h.name) ;
        this -> health = h.health ;
        this -> level = h.level ; 
    }
    // deep copy 
    // Hero( Hero &h){
    //     char *newName = new char[strlen(h.name) + 1] ;
    //     strcpy(newName , h.name) ;
    //     this -> name = newName ; 
    //     this -> health = h.health ;
    //     this -> level = h.level ; 
    // }

    ~Hero(){
        cout << "destructor called \n" ; 
    }

    void print(){
        cout << "health = " << this->health << "\n" ;
        cout << "level = " << this->level << "\n" ;
    }

    static int getTimeToComplete(){
        return Hero :: timeToComplete ;
    }
    static void setTimeToComplete(int t){
        Hero :: timeToComplete = t;
    }
} ;
 
int Hero :: timeToComplete = 10 ;
int main(){
    
    Hero ichigo(50 , 10) ;
    cout << "time to complete : " << Hero :: timeToComplete << endl ;
    // ichigo.setHealth(800) ;
    // ichigo.level = 10 ;
    cout << "Ichigo info \n" ;
    cout << "health = " << ichigo.getHealth() << "\n" ;
    cout << "level = " <<ichigo.level << "\n" ;
    // Hero *p = new Hero(80 , 10) ;
    // // (*p).setHealth(100) ;
    // // (*p).level = 4 ;
    // cout << "Naruto info \n" ;
    // cout << "health = " << p->getHealth() << "\n" ;
    // cout << "level = " << p->level << "\n" ;

    // Hero goku(ichigo) ;
    // cout << "before copy \n" ;
    // cout << "ichigo \n" ;
    // ichigo.print() ;
    // cout << "goku \n" ;
    // goku.print() ;
    // goku.level = 69 ;
    // cout << "ichigo \n" ;
    // ichigo.print() ;
    // cout << "goku \n" ;
    // goku.print() ;
    cout << "Time to complete = " << Hero :: getTimeToComplete() << endl ;
    Hero :: setTimeToComplete(2000) ;
    cout << "Time to complete = " << Hero :: getTimeToComplete() << endl ;
    return 0 ;  
}