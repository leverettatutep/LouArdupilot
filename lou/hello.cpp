#include <iostream>
#include <vector>
#include <string>
#include "this.h"
#include <that.h>

using namespace std;

int main(int argc, char* argv[])
{
    printf("You entered %d arguments:\n",argc);
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
