/*

1. Class
2. Object
3. Functions
4. Access modifiers
5. Getter-Setter
*/



class Hero{

private:
    int health;

public:
    char level;

    // getter
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }


};

int main(){
    
    // creation of object
    Hero ramesh;

    // setting the values
    ramesh.setlevel('C');
    ramesh.sethealth(100);

    // getting the values including of private properties

    cout<<ramesh.gethealth()<<endl; // output: 100
    cout<<ramesh.getlevel()<<endl;  // output: C
}


/***************************************************************************/


// 6. Static and Dynamic Allocation of object

class Hero{

private:
    int health;

public:
    char level;

    // getter
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }


};

int main(){
    
    // creation of static object
    Hero a;
    a.level = 'A';
    a.sethealth(80);

    cout<<"Level = "<<a.level<<endl;            // Output: Level = A
    cout<<"Health = "<<a.gethealth()<<endl;     // Output: Health = 80

    

    // creation of dynamic object
    Hero *b = new Hero;
    b->level = 'B';
    b->sethealth(70);

    cout<<"Level = "<<b->level<<endl;            // Output: Level = B
    cout<<"Health = "<<b->gethealth()<<endl;     // Output: Health = 70

    // OR

    cout<<"Level = "<<(*b).level<<endl;            // Output: Level = B
    cout<<"Health = "<<(*b).gethealth()<<endl;     // Output: Health = 70

}

/*******************************************************************************/

// 7. Constructor (Default and Parameterized constructor)

class Hero{

private:
    int health;

public:
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
    }


    // Parameterised constructor

    Hero(int health,char level){
        cout<<"Parameterized Constructor called"<<endl;
        this->level = level;
        this->health = health;
    }
    // getter
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }


};

void solve(){

    // static object created
    Hero a;
    a.level = 'A';
    a.sethealth(80);
    cout<<"Level = "<<a.level<<endl;    
    cout<<"Health = "<<a.gethealth()<<endl;

    cout<<endl;

    // dynamic object created
    Hero *b = new Hero(70,'B'); // this is another way of dynamic object creation 

    cout<<"Level = "<<b->level<<endl;           
    cout<<"Health = "<<b->gethealth()<<endl;
}

/* Output:

    Default Constructor called
    Level = A
    Health = 80

    Parameterized Constructor called
    Level = B
    Health = 70
*/

/*******************************************************************************/

// 8. Copy Constructor (default and explicit)

class Hero{

private:
    int health;

public:
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    // print

    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

};

void solve(){

    // static object created
    Hero S(70,'C');
    S.print();

    // copy constructor
    Hero R(S);
    R.print();
}

/* Output:

    Health: 70
    Level: C
    Copy Constructor
    Health: 70
    Level: C

*/

/*******************************************************************************/

// 8. Shallow and Deep Copy

// Shallow Copy (By default copy contructor)

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    // Hero(Hero &temp){
    //     cout<<"Copy Constructor"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};

void solve(){

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');

    char name[] = "Babbar";
    hero1.setname(name);
    hero1.print();

    Hero hero2(hero1);
    hero2.print();


    hero1.name[0] = 'G';
    hero1.setlevel('C');
    hero1.print();

    hero2.print();


}

/* Output:

    Name: Babbar , Health: 12 , Level: D
    Name: Babbar , Health: 12 , Level: D
    Name: Gabbar , Health: 12 , Level: C
    Name: Gabbar , Health: 12 , Level: D
    

    thus only changes made to name in hero1 will also be changed in hero2 as name variable is a pointer and will store address
    thus memory address is also copied in case of shallow copy by default copy contructor

*/

/*******/

// Deep copying (Using expilcit copy constructor)

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};

void solve(){

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');

    char name[] = "Babbar";
    hero1.setname(name);
    hero1.print();

    Hero hero2(hero1);
    hero2.print();


    hero1.name[0] = 'G';
    hero1.setlevel('C');
    hero1.print();

    hero2.print();


}

/* Output:

    Name: Babbar , Health: 12 , Level: D
    Copy Constructor
    Name: Babbar , Health: 12 , Level: D
    Name: Gabbar , Health: 12 , Level: C
    Name: Babbar , Health: 12 , Level: D

    

    changes made in hero1.name does not effect hero2.name as we did deep copying here by creating a new char array to store the name which copying

*/

/*******************************************************************************/

// 9. Copy assignment operator

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};

void solve(){

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');

    char name[] = "Babbar";
    hero1.setname(name);
    // hero1.print();

    Hero hero2(hero1);
    // hero2.print();


    hero1.name[0] = 'G';
    hero1.setlevel('C');
    hero1.print();

    hero2.print();

    hero1 = hero2;  // copy assignment operator (=)
    cout<<"After copy assignmet operator"<<endl;
    hero1.print();
    hero2.print();

}

/* Output:

    Copy Constructor
    Name: Gabbar , Health: 12 , Level: C
    Name: Babbar , Health: 12 , Level: D
    After copy assignmet operator
    Name: Babbar , Health: 12 , Level: D
    Name: Babbar , Health: 12 , Level: D

*/

/*******************************************************************************/

// 10. Destructor

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;


    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    // Destructor

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};

void solve(){

    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();

    // manually destructor is called for b (dynamically allocated)

    delete b;



}

/* Output:

    Default Constructor called
    Default Constructor called
    Destructor is called   -> this is for a (automatically called)
    Destructor is called   -> this is for b (manually needed to be called)

*/

/*******************************************************************************/

// 11. Static keyword

//******

// static members

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;
    static int timeToComplete; // static data member

    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    // Destructor

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};


int Hero::timeToComplete = 5;

void solve(){

    cout<<Hero::timeToComplete<<endl;

    
    // below commented is not recommended to access static data members
    // Hero a;

    // cout << a.timeToComplete << endl;  --> output: 5


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;  --> output: 10
    // cout << b.timeToComplete << endl;  --> output: 10


}

/* Output:

    5

*/


//******

// static functions

class Hero{

private:
    int health;

public:
    char *name; // initialized
    char level;
    static int timeToComplete; // static data member

    // default constructor

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100]; // memory allocated
    }


    // Parameterised constructor

    Hero(int health,char level){

        this->level = level;
        this->health = health;
    }


    // Copy constructor

    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy Constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    // Destructor

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }


    // print

    void print(){
        cout<<"Name: "<<name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level;
        cout<<endl;
    }


    // getter

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }


    // static function
    static int random() {
        return timeToComplete ;
    }

};


int Hero::timeToComplete = 5;

void solve(){

    // cout<<Hero::timeToComplete<<endl;
    
    cout<<Hero::random()<<endl;  // output: 5

}

/* Output:

    5

*/