#include <iostream>
using namespace std;
 class Animal{
  //DATA MEMBERS => Properties/state
  //Access modifiers
  //Public: can access inside and outside of the class
  public:
   int age;
   int legs;
   string name;
  //private: can access only inside the class.by default all are private
  private:
   int weight;
   char word;

  public:
  //default Constructor
  //constructor name is same as class name
  Animal(){
    //this keyword is a good practise
    this->age=0;
    this->legs=4;
    this->weight=17;
    this->word='.';
    // cout<<"Constructor called"<<endl;
  }

  //parameterized constructor
  //based of input parameters it will search which parameter have specific data type and number of equal parameters it will go and initilize that
  Animal(int age){
    this->age = age;
    cout<<"parameterized Constructor called"<<endl;
  }
  Animal(int age,int legs){
     this->age = age;
     this->legs = legs;
     cout<<"parameterized Constructor 2 called"<<endl;
   }
   Animal(int age,int legs,string name){
     this->age = age;
     this->legs = legs;
     this->name = name;
      cout<<"parameterized Constructor 3 called"<<endl;
   }

   //copy constructor
   //whenever u try to copy one object properties to other then copy constructor is called
   //we have use by reference because it will create copy if we send directly and it will go
   // infinite loop
   Animal(Animal &obj){
    this->age = obj.age;
    this->legs = obj.legs;
    cout<<"copy constructor called"<<endl;
   }
   
  



   //MEMBER FUNCTINS => Behaviour
   public:
   void sleep(){
    cout<<"sleeping"<<endl;
   }
   void eat(int d){
    cout<<"eating  "<<d<<endl;
   }
   int getter(){
    return weight;
   }
   void setter(int weight){
    //this pointer  to the current object Cool 
    //right side weight is the value comming from set function
      this->weight=weight;
   }

   //tilda sign we use for destructor call -> (~)
   ~Animal(){
    cout<<"destructor"<<endl;
   }
 };
int main() {
  //static Allocation;
  // creation of Object
  Animal Cool;
  //assigning value to the object
  Cool.age = 10;
  //calling the object member
  cout<<Cool.age<<endl;
  //calling the object function
  Cool.sleep();
  Cool.eat(100);
  //accessing private data member outside the class
  //using getter and setter function
  //setting the data
  Cool.setter(190);
  //calling the get function
  cout<<Cool.getter()<<endl;;


  //Dynamic Allocation 
   Animal *kool = new Animal;
   //cool refers to addres
   (*kool).age = 200;
   cout<<(*kool).age<<endl;

   //alternative dynamic 
   kool->legs =18;
   cout<<kool->legs<<endl;

   //after object creation what will happen
   // object - calls constructor.by default their is inbuilt constructor
   // if we create ine then it will overides our constructor;
   // constructor is used for initialization of data members
   Animal bol;
   cout<<bol.age<<endl;
   //another type of dynamic allocation
   Animal*call=new Animal();
   cout<<bol.age<<endl;
   //parametrized constructor call
   Animal bal(99);
   cout<<bal.age<<endl;;
   Animal ka(89,190);
   cout<<ka.age<<endl;
   cout<<ka.legs<<endl;
   Animal *po = new Animal(90,89,"Kranthi");
   cout<<po->name<<endl;
   //copy constructor
   Animal c(ka);
   cout<<c.age<<endl;
   cout<<c.legs<<endl;
   //alternamtic copy constructor call
   Animal p(c);
   //destructor
   // for dynamic allocation for free up the space
   // static allocation automatically calls destructor
   //for dynamic we have to use delete key word
   delete po;
   delete kool;
   delete call;

  return 0;
}