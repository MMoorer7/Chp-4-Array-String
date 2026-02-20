#include <iostream>

using namespace std;

int main()
{
    char word[100];

    cin >> word;

    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }

    int left = 0;
    int right = length - 1;

    bool isPalindrome = true;

    while (left < right)
    {
        if (word[left] != word[right])
        {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
