#include<iostream>
using namespace std;
//3)Polymorphism
//poly->many
//morphism->forms
//polymorphism are of two types 
//1)compile time polymorphism
//2)run time polymorphism

//complie time polymorphism are of two types
//1)Functional overloading 
//2)operator overloading

//1)Function Overloading:Two  or more functions can have same name but different paramenters

class A{
   public :
   int a;
   int b;
   int c;
   int sum(int a){
      return a+10;
   }
   int sum(int a,int b){
      return a+b;
   }
   int sum(int a,int b,int c){
      return a+b+c;
   }
   int sum(int a,float b){
      return a+b;
   }
   int sum(int a,double b){
      return a+b;
   }
//return should not change in functional overloading
// double sum(int a,double b){
    //   return a+b;
// }
};

//2)Operator Overloading
//Ability to provide the operators with a special meaning for a data type;
class p{
      public:
            int a;
            void operator+(p &obj2){
                int value1 = this->a;
                int value2 = obj2.a;
                cout<<(value2-value1)<<endl;
             }
};

//2)Runtime polymorphism
//function overriding
class Animal {
      public:
      virtual void sound(){
        cout<<"shouting"<<endl;
      }
};
class Dog : public Animal{
      public:
      void sound(){
        cout<<"Bou Bou"<<endl;
      }
};

int main(){
    //Function overloading
     A d;
     cout<<d.sum(10)<<endl;
     cout<<d.sum(10,20)<<endl;
     cout<<d.sum(10,20,30)<<endl;
     cout<<d.sum(10,20.13f)<<endl;
     cout<<d.sum(10,20.13)<<endl;
   //Operator overloading
     p obj1,obj2;
     obj1.a=10;
     obj2.a=20;
     obj1+obj2;
   //Function overriding
    Animal a1;
    a1.sound();
    Dog a2;
    a2.sound();
    Animal *a3 = new Animal;
    a3->sound();
    Dog *a4 = new Dog;
    a4->sound();
    //upcasting
    Animal *a5 = new Dog;
    a5->sound();
    //downcasting
    Dog *a6 = (Dog*)new Animal;
    a6->sound();
    //using of virtual function 
    
  return 0;
}