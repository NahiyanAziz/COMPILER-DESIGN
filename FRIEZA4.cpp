#include <iostream>
using namespace std;

int main() {
    string input;

    cout << "Enter the input: ";
    getline(cin, input);
    cout << "\n";


    if(input[0]==' ')
    {
        cout << "Not an identifier. First character should be an alphabet character or underscore.\n";
        return 0;
    }


    // Check the first character
    if (!((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || input[0] == '_')) {
        cout << "Not an identifier. First character should be an alphabet character or underscore.\n";
        return 0;
    }


    // Check characters from the second character onwards
    for (int i = 1; i < input.length(); ++i) {
        if (!((input[i] >= '0' && input[i] <= '9') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || input[i] == '_')) {
            cout << "Not an identifier. Characters after the first should be alphanumeric characters or underscore.\n";
            return 0;
        }
        if (input[i]==' ')
        {
           cout << "Not an identifier. Characters after the first should be alphanumeric characters or underscore.\n";
            return 0;
        }

    }

    cout << "Input is an identifier.\n";

    return 0;
}
