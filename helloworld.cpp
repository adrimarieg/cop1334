#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    string myString = "Hello there!";
    cout << "myString is " << myString.length() << " bytes long." << endl;

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    bool myBool = false;
    cout << "myBool = " << myBool << ", sizeof(myBool) = " << sizeof(myBool) << endl;

    
    
    cout << endl;
}
