#include <iostream>
using namespace std;

class player
{
private:
    int health, score;
    int age;
    bool alive; // Changed the type to bool for representing alive status

public:
    void setscore(int score)
    {
        this->score = score;
    }

    int getscore() const // Added a getter for the score
    {
        return score;
    }

    void sethealth(int h)
    {
        this->health = h;
    }

    void setage(int a)
    {
        this->age = a;
    }

    void setalive(bool ali)
    {
        this->alive = ali;
    }

    bool isalive() const
    {
        return alive;
    }

    int getage() const
    {
        return age;
    }

    int gethealth() const
    {
        return health;
    }
};

int addscore(const player& a, const player& b) // Pass by reference to avoid unnecessary copies
{
    return a.getscore() + b.getscore(); // Use the getter function to retrieve the score
}

int main()
{
    player niraj;
    niraj.sethealth(100);
    niraj.setscore(189);
    niraj.setage(19);
    niraj.setalive(true);

    player raj;
    raj.sethealth(100);
    raj.setscore(189);
    raj.setage(19);
    raj.setalive(true);
    
    player *urvi = new player;  // Dynamic allocation
   // player urviobject = *urvi;
    // urviobject.setscore(48);
    // urviobject.setage(40);
    // urviobject.sethealth(24);
   
    // cout << urviobject.gethealth() << endl;
    // cout << urviobject.getage() << endl;
    urvi->sethealth(100);
    urvi->setage(19);
    cout<<urvi->gethealth()<<endl;
    cout<<urvi->getage();

    delete urvi;  // Release the dynamically allocated memory

    return 0;
}
