/*

Poylmorphism: 

Types
	1. Compile time polymorphism
		i. Function overloading
		ii. Operator overloading

	2. Run time polymorphism
		i. Method overriding

*/


#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


/*******************************/
// Function Overloading


class A{
public:
    void sayHello(){
        cout<<"Hello Love Babbar"<<endl;
    }

    int sayHello(char name){
        cout<<"Hello Love Babbar"<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

  
void solve(){
    
    A obj;

    obj.sayHello();
    obj.sayHello('A');
    obj.sayHello("Pratik");
/*
    Output:
    Hello Love Babbar
    Hello Love Babbar
    Hello Pratik

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

/*******************************/
// Operator Overloading

class B{
public:
    int a;
    int b;
    
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output = "<<value2-value1<<endl;

        cout<<"Hello Babbar"<<endl;
    }

    void operator() (){
        cout<<"I am bracket"<<this->a<<endl;
    }
};

  
void solve(){
    
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
    obj2();

/*
    Output:
    Output = 3
    Hello Babbar
    I am bracket4
    I am bracket7

*/
}


/************************/

/* 
	2. Run time Polymorphism

	- Method overriding

*/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


class Animal{
public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

  
void solve(){
    
    Dog obj;
    obj.speak();

/*
    Output:
    Barking

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