#include <iostream>

using namespace std;

int main()
{
    char text[200];

    cin.getline(text, 200);

    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;

        left++;
        right--;
    }

    cout << text << endl;

    return 0;
}
