#include <iostream>
using namespace std;
//1)encapsulation
//class is by default an encapsulation
//encapsulaton means wrapping up of data members and memberfunctions that manupulate them
//moto is to hide the data from outsiders 
//security
//perfect Encapsulation/fullencapsulation : we say a class is perfectly encapsulated when all data members declared as private .
class Animal {
  public:
         int weight;
         int number;
         
         void sleep(){
              cout<<"sleeping"<<endl;
         }
};
//2)inheritance
//The capability of a class to derive properties and characteristics from another class is called Inheritance.
//resuability
//inheritance are of 5 types
//1)single 
//2)multilevel
//3)multiple
//4)hierarchical
//5)hybrid

//points to remember
//** we can't do inheritance of private data members of a base class to child class
//it will give not accessible error

//public to public -> public
//public to protected -> protected
//public to private -> private

//protected to public -> protected
//protected to protected -> protected
//protected to private -> private

//difference btw private and protected is we can inherit procted but we can't inherit private afterall protected behavious just like private.


//1->single Inheritance
class Car{
      public:
             int age;
             string name;
             void eat(){
              cout<<"eating"<<endl;
             }
};
class Audi:protected Car{
           public:
           void print(){
            cout<<this->age<<endl;
           }
};

//2)multilevel Inheritance
//1<--2<--3 : 3 class have properties and behaviour of 2 class and 1 class.
class Fruit{
    public:
     int type;
     Fruit(){
       this->type = 10;
     }
};
class Apple:public Fruit{
     public:
     int name;
};
class Allpanso: public Apple{
    public:
    int sweetness;
};

//3)multiple Inheritance
//1<-2->3//2 class inherit properties and behaviour from 1 class and 3 class
//**diamond problem if two parent class have same data member then it will give ambiguity error so we have to use scope resolution operator.
class Tiger{
  public:
       int weight;
       Tiger(){
        this->weight=50;
       }
};
class Lion{
  public:
      string color;
      int weight;
      Lion(){
        this->color="orange";
        this->weight=20;
      }
};
class Liger:public Tiger,public Lion{
    
};

//4)Hierarchical Inheritance
//2->1<-3 //2 class and 3 class have properties and behaviour of 1 class

class car{
    public:
           int weight;
           car(){
            this->weight=26;
           }
};
class Scorpio:public car{
};
class Mahindera:public car{
};

//5)Hybrid
//combination of all kind of inheritance

int main() {
  //single
  Audi cool;
  cool.print();
  //multilevel
  Allpanso ka;
  cout<<ka.type<<endl;
  //multiple
  Liger d1;
  cout<<d1.Tiger::weight<<" "<<d1.color<<" "<<d1.Lion::weight<<endl;
  //hierarchical
  Scorpio s11;
  cout<<s11.weight<<endl;
  Mahindera s22;
  cout<<s22.weight<<endl;
  return 0;
}