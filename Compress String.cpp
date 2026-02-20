#include <iostream>

using namespace std;

int main()
{
    char input_word[200];
    cin >> input_word;

    for (int i = 0; input_word[i] != '\0'; )
    {
        char current_character = input_word[i];
        int repeat_count = 0;

        while (input_word[i] == current_character)
        {
            repeat_count++;
            i++;
        }

        cout << current_character << repeat_count;
    }

    cout << endl;

    return 0;
}