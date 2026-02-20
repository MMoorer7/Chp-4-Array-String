#include <iostream>

using namespace std;

int main()
{
    char first[200];
    char second[200];

    cin.getline(first, 200);
    cin.getline(second, 200);

    int first_count[256] = { 0 };
    int second_count[256] = { 0 };

    for (int i = 0; first[i] != '\0'; i++)
    {
        if (first[i] != ' ')
        {
            first_count[(int)first[i]]++;
        }
    }

    for (int i = 0; second[i] != '\0'; i++)
    {
        if (second[i] != ' ')
        {
            second_count[(int)second[i]]++;
        }
    }

    bool is_anagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (first_count[i] != second_count[i])
        {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram)
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl;
    }

    return 0;
}