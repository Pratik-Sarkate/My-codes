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

// 7. Constructor
