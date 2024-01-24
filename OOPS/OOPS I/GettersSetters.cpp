#include<iostream>
using namespace std;
class player
{
    private:
    int score;
    int health;
    public:
    //setter:
    void setscore(int s)
    {
        score=s;
    }
    void sethealth(int h)
    {
        health=h;
    }
    //getter
    int getscore()
    {
        return score;
    }
    int gethealth()
    {
        return health;
    }
};
int main()
{
    player harsh;
    harsh.sethealth(19);
    cout<<harsh.gethealth();

}