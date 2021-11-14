#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int seed = time(0);
    srand(seed);
    int num = rand() % 6;
    
    string ex1 = "Proxima Cen b";
    string ex1distance = "4.2 light years";
    string ex1mass = "1.27 Earth's masses";
    string ex1period = "11.2 days";
    string ex1type = "M-Warm Terran";
    
    string ex2 = "TRAPPIST-1 d";
    string ex2distance = "41 light years";
    string ex2mass = "0.41 Earth's masses";
    string ex2period = "4 days";
    string ex2type = "M-Warm Subterran";
    
    string ex3 = "Kepler-1649 c";
    string ex3distance = "301 light years";
    string ex3mass = "N/A";
    string ex3period = "19.5 days";
    string ex3type = "M-Warm Terran";
    
    string ex4 = "Ross 128 b";
    string ex4distance = "11 light years";
    string ex4mass = "1.40 Earth's masses";
    string ex4period = "9.9 days";
    string ex4type = "M-Warm Terran";
    
    string ex5 = "Wolf 1061 c";
    string ex5distance = "14 light years";
    string ex5mass = "3.41 Earth's masses";
    string ex5period = "17.9 days";
    string ex5type = "M-Warm Terran";
    
    string answer;
    cout << "Welcome to Exospace!" << endl;
    cout << "Enter an exoplanet or type random" << endl;
    getline(cin,answer);

    cout << endl;
    if (answer == "random")
    {
        if (num == 0) {
            cout << ex1 << endl;
            cout << "Distance from Earth: " << ex1distance << endl;
            cout << "Planet's Mass: " << ex1mass << endl;
            cout << "Planet's Orbit Period: " << ex1period << endl;
            cout << "Planet's Type: " << ex1type << endl;
        } else if (num == 1) {
            cout << ex2 << endl;
            cout << "Distance from Earth: " << ex2distance << endl;
            cout << "Planet's Mass: " << ex2mass << endl;
            cout << "Planet's Orbit Period: " << ex2period << endl;
            cout << "Planet's Type: " << ex2type << endl;
        } else if (num == 2) {
            cout << ex3 << endl;
            cout << "Distance from Earth: " << ex3distance << endl;
            cout << "Planet's Mass: " << ex3mass << endl;
            cout << "Planet's Orbit Period: " << ex3period << endl;
            cout << "Planet's Type: " << ex3type << endl;
        } else if (num == 3) {
            cout << ex4 << endl;
            cout << "Distance from Earth: " << ex4distance << endl;
            cout << "Planet's Mass: " << ex4mass << endl;
            cout << "Planet's Orbit Period: " << ex4period << endl;
            cout << "Planet's Type: " << ex4type << endl;
        } else if (num == 4) {
            cout << ex5 << endl;
            cout << "Distance from Earth: " << ex5distance << endl;
            cout << "Planet's Mass: " << ex5mass << endl;
            cout << "Planet's Orbit Period: " << ex5period << endl;
            cout << "Planet's Type: " << ex5type << endl;
        }
    }
    else if (answer == ex1)
    {
        cout << ex1 << endl;
        cout << "Distance from Earth: " << ex1distance << endl;
        cout << "Planet's Mass: " << ex1mass << endl;
        cout << "Planet's Orbit Period: " << ex1period << endl;
        cout << "Planet's Type: " << ex1type << endl;
    }
    else if (answer == ex2)
    {
        cout << ex2 << endl;
        cout << "Distance from Earth: " << ex2distance << endl;
        cout << "Planet's Mass: " << ex2mass << endl;
        cout << "Planet's Orbit Period: " << ex2period << endl;
        cout << "Planet's Type: " << ex2type << endl;
    }
    cout << endl;
    
    return 0;
}
