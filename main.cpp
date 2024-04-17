#include <iostream>
#include <string>

using namespace std;

class Horse {
public:
    string name;
    string breed;
    int age;

    
    Horse(string horseName, string horseBreed, int horseAge)
        : name(horseName), breed(horseBreed), age(horseAge) {
    }
    void greet() const {
        cout << "Інформація про коня:" << endl <<"Імя коня: " << name << endl << "Порода коня: " << breed << endl << "Вік коня: " << age << endl << "Інформація про заїзд:" << endl;
        
    }
    
   
};

class Race : public Horse {
public:
    string nomer;
    string trace;
    string time;

    
    Race(string horseName, string horseBreed, int horseAge, string raceTrace, string raceNomer, string raceTime)
        : Horse(horseName, horseBreed, horseAge), trace(raceTrace), nomer(raceNomer), time(raceTime) {
    }
    
    void greet() const {
        cout << "Номер коня: " << nomer << endl <<"Імя траси: "<< trace << endl << "Час заїзду: " << time << endl;
        
        
    }
};

int main() {
    
    Horse jack("Jack", "Silver", 8);

   
    Race race("Jack", "Silver", 8, "circule", "23", "12:00");

    jack.greet();
    race.greet();
    
    return 0;
}
