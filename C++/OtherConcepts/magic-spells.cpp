#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {

  /* Enter your code here */
if(Fireball* v = dynamic_cast<Fireball*>(spell)) {
      v->revealFirepower();
  } else {
      if(Frostbite* v = dynamic_cast<Frostbite*>(spell)) {
      v->revealFrostpower();
  } else {
      if(Thunderstorm* v = dynamic_cast<Thunderstorm*>(spell)) {
      v->revealThunderpower();
  } else {
      if(Waterbolt* v = dynamic_cast<Waterbolt*>(spell)) {
      v->revealWaterpower();
  } else {
      string spellWord = spell->revealScrollName();
      string journal = SpellJournal::read();
      int** array = new int*[spellWord.length() + 1];
          for(int i = 0; i < spellWord.length() + 1; i++) {
              array[i] = new int[journal.length() + 1];
              for(int j = 0; j < journal.length() + 1; j++) {
                  if(i == 0 || j == 0) {
                      array[i][j] = 0;
                  } else {
                      if(spellWord[i - 1] == journal[j - 1]) {
                          array[i][j] = array[i - 1][j - 1] + 1;
                      } else {
                          array[i][j] = (array[i-1][j] > array[i][j-1]) ? array[i-1][j] : array[i][j-1];
                      }
                  }
              }
          }
          
          cout << array[spellWord.length()][journal.length()] << endl;
        }
      }
    }
  }
}