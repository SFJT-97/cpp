#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    /* Vectors let to add values dynamically */

    vector<string> words1;

    // Push values to words1
    words1.push_back("Hello ");
    words1.push_back("I'm ");
    words1.push_back("getting ");
    
    string words2[3] = { "World! ", "just ", "started."};

    string helloworld = words1[0] + words2[0];
    string imjust = words1[1] + words2[1];
    string gettingstarted = words1[2] + words2[2];

    string phrase = helloworld + imjust + gettingstarted;

    cout << "Phrase: " << phrase << endl;

    return 0;
}