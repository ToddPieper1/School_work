#include <iostream>
using namespace std;

//Todd Pieper

int main();

int main() {


    //Define a bunch of variables to take as inputs for the madlib
    string adj1, noun1, verb1, adv1, adj2, noun2, noun3, adj3, verb2, adv2, verb3, adj4;

    //Begin taking them one by one
    cout << "(1/10) Give me an adjective: ";
    cin >> adj1;

    cout << "(2/12) And then a noun: ";
    cin >> noun1;

    cout << "(3/12) And then a verb (past tense): ";
    cin >> verb1;

    cout << "(4/12) And then an adverb: ";
    cin >> adv1;

    cout << "(5/12) And then another adjective: ";
    cin >> adj2;

    cout << "(6/12) And then another noun: ";
    cin >> noun2;

    cout << "(7/12) And then another noun: ";
    cin >> noun3;

    cout << "(8/12) And then another adjective: ";
    cin >> adj3;

    cout << "(9/12) And then another verb: ";
    cin >> verb2;

    cout << "(10/12) And then another adverb: ";
    cin >> adv2;

    cout << "(11/12) And then another verb (past tense): ";
    cin >> verb3;

    cout << "(12/12) And then another adjective: ";
    cin >> adj4;

    //Print out the madlib
    cout << "Today I went to the zoo. I saw a(n) " + adj1 + " " + noun1 + " jumping up and down in its tree.\n"
    "He " + verb1 + " " + adv1 + "through the large tunnel that led to its " + adj2 + " " + noun2 + "\n"
    "I got some peanuts and passed them through the cage to a gigantic gray " + noun3 + "\n"
    "towering above my head. Feeding that animal made me hungry. I went to get a " + adj3 + " scoop\n"
    "of ice cream. It filled my stomach. Afterwards I had to" +verb2+ +" " + adv2 + " to catch our bus.\n"
    "When I got home I " +verb3 + " my mom for a " +adj4 + " day at the zoo.";

    //Always return 0 for int main
    return 0;
}

