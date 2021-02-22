#include <iostream>
#include <string>
using namespace std;

void boughtAndFed(string name);
void makeSound(string name, string soundOfAnimal, char endingCharacter);

int main()
{
    // 1st verse
    boughtAndFed("cat");   
    makeSound("Cat", "fiddle-i-fee", '.');
    cout << '\n';

    // 2nd verse
    boughtAndFed("hen");   
    makeSound("Hen", "chimmy-chuck, chimmy-chuck", ',');
    makeSound("Cat", "fiddle-i-fee", '.');
    cout << '\n';

    // 3rd verse
    boughtAndFed("duck"); 
    cout << '\n'; 

    // 4th verse
    boughtAndFed("goose");  
    cout << '\n';

    return 0;
}

void boughtAndFed(string name)
{
    cout << "Bought me a " << name << " and the " << name << " pleased me,\n";
    cout << "I fed my " << name << " under yonder tree.\n";
}

void makeSound(string name, string soundOfAnimal, char endingCharacter)
{
    cout << name << " goes " << soundOfAnimal << endingCharacter << endl;
}