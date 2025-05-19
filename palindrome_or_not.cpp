#include <iostream>
using namespace std;
int main()
{
    int num, digit_count, reminder, temp;

    // Asking user to input the number
    cout << "You can check whether a number is palindrome or not, using this program" << endl;
    cout << "Enter how much digits are there: ";
    cin >> digit_count;

    cout << "\nEnter the number: ";
    cin >> num;

    int number_array[digit_count];

    // Converting the number into an array, with each digit as its element.
    reminder = num;
    temp = digit_count;

    while (reminder > 0)
    {
        number_array[temp - 1] = reminder % 10;
        reminder /= 10;
        temp--;
    }

    // Checking for palindrome or not
    bool ispalindrome = true;
    for (int i = 0; i < (digit_count / 2); i++)
    {
        if (number_array[i] != number_array[digit_count - 1 - i])
        {
            ispalindrome = false;
        }
    }

    // Outputting whether the number is palindrome or not
    if (ispalindrome) 
    {
        cout << "\nThe number " << num << " is palindrome" << endl;
    }
    else 
    {
        cout << "\nThe number " << num << " is not palindrome" << endl;
    }
    
    return 0;
}