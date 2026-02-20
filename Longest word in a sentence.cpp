#include <iostream>

using namespace std;

int main()
{
    char sentence[300];
    cin.getline(sentence, 300);

    int longest_start = 0;
    int longest_length = 0;

    int current_start = 0;
    int current_length = 0;

    for (int i = 0; ; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (current_length > longest_length)
            {
                longest_length = current_length;
                longest_start = current_start;
            }

            if (sentence[i] == '\0')
            {
                break;
            }

            current_length = 0;
            current_start = i + 1;
        }
        else
        {
            current_length++;
        }
    }

    for (int i = 0; i < longest_length; i++)
    {
        cout << sentence[longest_start + i];
    }

    cout << endl;

    return 0;
}