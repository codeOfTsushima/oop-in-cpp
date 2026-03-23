#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Player {
private:
    string name;
    int stamina; 

protected:
    int skillLevel;

public:
    Player(string n) : name(n), stamina(100), skillLevel(50) {}

    // Getters
    string getName() { return name; }
    int getStamina() { return stamina; }
    
 
    void decreaseStamina(int amount) {
        stamina -= amount;
        if (stamina < 0) stamina = 0;
    }

    void rest() {
        stamina = 100;
        cout << name << " rested and recovered full stamina." << endl;
    }

    
    virtual void train() = 0; 
    virtual void playMatch() = 0;
};


class Attacker : public Player {
private:
    int goalsScored;
public:
    Attacker(string n) : Player(n), goalsScored(0) {}

    // Overriding the abstract methods (Polymorphism)
    void train() override {
        skillLevel += 10;
        decreaseStamina(15);
        cout << getName() << " practiced shooting! Skill is now " << skillLevel << "." << endl;
    }

    void playMatch() override {
        if (getStamina() >= 30) {
            goalsScored++;
            decreaseStamina(30);
            cout << getName() << " led the attack and scored! Total goals: " << goalsScored << endl;
        } else {
            cout << getName() << " is too tired to play. Needs rest." << endl;
        }
    }
};

class Defender : public Player {
private:
    int tacklesWon;
public:
    Defender(string n) : Player(n), tacklesWon(0) {}

    void train() override {
        skillLevel += 8;
        decreaseStamina(10);
        cout << getName() << " practiced slide tackles! Skill is now " << skillLevel << "." << endl;
    }

    void playMatch() override {
        if (getStamina() >= 30) {
            tacklesWon += 5;
            decreaseStamina(30);
            cout << getName() << " locked down the opponent! Tackles won: " << tacklesWon << endl;
        } else {
            cout << getName() << " is too tired to play. Needs rest." << endl;
        }
    }
};


int main() {
    cout << "--- Football Club Simulator ---" << endl;
    
   
    vector<Player*> team;
    team.push_back(new Attacker("Lionel"));
    team.push_back(new Defender("Virgil"));

    // Team Training
    cout << "\n[ Training Session ]" << endl;
    for (Player* p : team) {
        p->train(); 
    }

    
    cout << "\n[ Match Day ]" << endl;
    for (Player* p : team) {
        p->playMatch();
    }

    
    for (Player* p : team) {
        delete p;
    }

    return 0;
}