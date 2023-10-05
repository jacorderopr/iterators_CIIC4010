#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Player{

    private:
        int age;
        string sport;
        string team;
        int speed; // ranges from 1 - 10

    public:

        Player(int speed, int age, string sport, string team)
        {
            this->speed = speed; // ranges from 1 - 10
            this->age = age;
            this->sport = sport;
            this->team = team;
        }
        Player();

        int getSpeed(){return speed;}
        string getSport(){return sport;}
        string getTeam(){return team;}
        int getAge(){return age; }


        /*
        Exercise 1:

        remove all of the Player objects with a speed less than 5
        */
       static void removePlayersWithSlowSpeed(vector<Player> &vec){

       }

    /*
    Exercise 2:
    
    Given a vector of players, find and return the youngest Player object inside of that vector.
    */
       static Player getYoungestPlayer(vector<Player> v){
    
        return Player(); // Dummy Return
       }
    
};


void showVector(vector<Player> v){
    cout << "{ ";
    for(auto myIterator = v.begin(); myIterator != v.end(); myIterator++){
        cout << "Speed: " << myIterator->getSpeed() << " Age: " << myIterator->getAge() << " sport: " << myIterator->getSport() << " Team: " << myIterator->getTeam();

        if(myIterator != v.end() - 1){
            cout << ", " << endl;
        }
    }
    cout << "}" << endl;
}

int main(){
    // Player(int speed, int age, string sport, string team)
    Player player1 = Player(4, 21, "basketball", "Gallitos");
    Player player2 = Player(1, 25, "soccer", "Atletico de Madrid");
    Player player3 = Player(1, 30, "Tennis", "Serbia National Team");
    Player player4 = Player(1, 27, "basketball", "Indios");
    Player player5 = Player(6, 34, "basketball", "Los Angeles Lakers");


    vector<Player> playerVector = {player1, player2, player3, player4, player5};

    // cout << "Before removing slow Players: " << endl << endl;
    showVector(playerVector);
    // Player::removePlayersWithSlowSpeed(playerVector);

    // cout << "after removing slow Players:" << endl << endl;
    // showVector(playerVector);

    // cout << "Let's find the youngest Player inside of: " << endl;
    // showVector(playerVector);
    // cout << endl << endl;
    // Player youngestPlayerFound = Player::getYoungestPlayer(playerVector);

    // cout << "Youngest Age Found: "<< youngestPlayerFound.getAge() << endl;

    

}

