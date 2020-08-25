#include <iostream>

using namespace std;

int is_it_number(int max, int min)
{
    int its_number = 0;                                          //variable that determines whether string is a number
    int b;                                                       //temporary variable to save the string as int

    while (its_number != 1)
    {
        cout << "Podaj liczbe z przedzialu: (" << max << " - " << min << ") " << endl;
        string number;                                           //string entered by the user
        cin >> number;
        cout << "Liczba: " << number << endl;
        cout << "D³ugosc stringu liczba: " << number.length() << endl;

        //checking if all characters from the string are numbers / if any character is not interrupted and ask for a new input
        for (int i = 0; i < number.length(); i++)
        {
            cout << "i: " << i << endl;
            cout << "liczba[i]: " << number[i] << endl;
            if (number[i] == '0' || number[i] == '1' || number[i] == '2' || number[i] == '3' || number[i] == '4' || number[i] == '5' || number[i] == '6' || number[i] == '7' || number[i] == '8' || number[i] == '9')
            {
                cout << "To liczba: " << endl;

                b = atoi(number.c_str());
                {
                    if (b <= max && b >= min)
                    {
                        cout << "Liczba z przedzialu" << endl;
                        its_number = 1;
                    }
                    else
                    {
                        cout << "Podana liczba jest z poza mozliwego przedzialu" << endl;
                        its_number = 0;
                    }
                }
            }
            else
            {
                cout << "To nie liczba: " << endl;
                its_number = 0;
                break;
            }
        }
    }
    return b;
}

int main()
{

    int x = 50;                                             //example of the beginning of the numerical interval
    int y = 10;                                             //example of the ending of the numerical interval
    int z;                                                  //if the string is a number, assign it here

    z = is_it_number(x, y);
    cout << "Z: " << z;

    return 0;
}
