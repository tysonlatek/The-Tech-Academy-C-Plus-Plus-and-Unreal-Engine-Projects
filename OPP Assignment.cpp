// OPP Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string breed;
    string color;
    int height;
    int weight;

    void Shake() {
        cout << "Shaking!";
    }
    void Sit() {
        cout << "Sitting!";
    }
    void LayDown() {
        cout << "Laying down!";
    }


    Dog(string a, string b, int c, int d) {
        breed = a;
        color = b;
        height = c;
        weight = d;
    }
};

int main()
{
    Dog dog1("Hound", "Brown", 2, 60);

    cout << dog1.breed << ", " << dog1.color << ", " << dog1.height << ", " << dog1.weight;

    dog1.Shake();
    dog1.Sit();
    dog1.LayDown();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
