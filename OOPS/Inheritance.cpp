// 1. Inheritance

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

class Human{

public:
    int height;
    int weight;
    int age;

public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};


/*  Syntax of inheritance

    class child_Class: access_Modifier parent_class{
    
    };

*/

class Male: public Human{   // inherited publicly  

public:
    string color;

    void sleep(){
        cout<<"Male is sleeping";
    }
};

  
void solve(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;


    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();

/*
    Output:
    -865841685
    0
    0

    84
    Male is sleeping
*/
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
} 


/***********************************************/

// 2. Access Modifiers and Inheritance

class Human{

public:
    int height;
    int weight;
    int age;

public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

/*
    parent class   inherited as   member_access_modifier
    public         protected      protected

*/
class Male: protected Human{   // inherited publicly  

public:
    string color;

    void sleep(){
        cout<<"Male is sleeping";
    }

    int getHeight(){        // required to access the protected "weight"
        return this->height;
    }
};

  
void solve(){
    Male object1;
    
    cout<<object1.getHeight()<<endl;

/*
    Output:
    1312833728

*/
}

// and refer the notes for other combinations of public, protected and private

/***********************************************/

// 3. Types of Inheritance

/*

    i. Single Inheritance

*/

class Animal{

public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

};

  
void solve(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

/*
    Output:
    Speaking
    269620272

*/
}

//**********
/*

    ii. Multi-level Inheritance

*/


class Animal{

public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

};

class GermanShephard: public Animal{

};
  
void solve(){
    GermanShephard g;
    g.speak();

/*
    Output:
    Speaking

*/
}


//**********
/*

    iii. Multiple Inheritance

*/

class Animal{

    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{

    public:
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }

};

// Multiple Inheritance

class Hybrid: public Animal, public Human{

};
  
void solve(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

/*
    Output:
    Speaking
    Barking

*/
}


//**********
/*

    iv. Hierarchical Inheritance

*/

// Hierarchical Inheritance

class A{
public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }

};

class B: public A{
public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C: public A{
public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};
  
void solve(){
    
    A object1;
    object1.func1();
    cout<<endl;

    B object2;
    object2.func1();
    object2.func2();
    cout<<endl;

    C object3;
    object3.func1();
    object3.func3();

/*
    Output:
    Inside Function 1

    Inside Function 1
    Inside Function 2

    Inside Function 1
    Inside Function 3

*/
}


//**********
/*

    v. Hybrid Inheritance

*/

// Hybrid Inheritance

/*

        A        D
      /   \     /
    ,/,   ,\, ,/,
    B        C

*/

class A{
public:
    void func1(){
        cout<<"Inside Function of A"<<endl;
    }

};

class D{
public:
    void func2(){
        cout<<"Inside Function of D"<<endl;
    }
};

class B: public A{

};

class C: public A, public D{

};
  
void solve(){
    
    C obj;

    obj.func1();
    obj.func2();

/*
    Output:
    Inside Function of A
    Inside Function of D

*/
}

/***********************************************/

// 4. Inheritance Ambiguity

class A{
public:
    void func(){
        cout<<"I am A"<<endl;
    }

};


class B{
public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C: public A, public B{

};
  
void solve(){
    
    C obj;

    // obj.func(); // it will give error due to ambiguity as whether which to choose func() of A or B
    obj.A::func();
    obj.B::func();

/*
    Output:
    I am A
    I am B

*/
}