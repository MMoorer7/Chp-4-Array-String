#include <iostream>

using namespace std;

int main()
{
    char input_text[200];
    char unique_characters[200];

    cin.getline(input_text, 200);

    int unique_index = 0;

    for (int i = 0; input_text[i] != '\0'; i++)
    {
        bool already_present = false;

        for (int j = 0; j < unique_index; j++)
        {
            if (input_text[i] == unique_characters[j])
            {
                already_present = true;
                break;
            }
        }

        if (!already_present)
        {
            unique_characters[unique_index] = input_text[i];
            unique_index++;
        }
    }

    unique_characters[unique_index] = '\0';

    cout << unique_characters << endl;

    return 0;
}
