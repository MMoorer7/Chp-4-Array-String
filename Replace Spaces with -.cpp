#include <iostream>

using namespace std;

int main()
{
    char input_sentence[200];

    cin.getline(input_sentence, 200);

    for (int i = 0; input_sentence[i] != '\0'; i++)
    {
        if (input_sentence[i] == ' ')
        {
            input_sentence[i] = '-';
        }
    }

    cout << input_sentence << endl;

    return 0;
}