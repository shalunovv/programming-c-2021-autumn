#include <iostream>

using namespace std;

int main() {
    
    int n = 0;
    
    cin >> n;

    if (n < 0)
    {
        cout << "-";
        n *= -1;
    }
    if (n == 0)
    {
        cout << "ноль ";
    }
    
    switch (n / 100)
    {
        case 1:
            cout << "Сто ";
            break;
        case 2:
            cout << "Двести ";
            break;
        case 3:
            cout << "Триста ";
            break;
        case 4:
            cout << "Четыреста ";
            break;
        case 5:
            cout << "Пятсот ";
            break;
        case 6:
            cout << "Шестьсот ";
            break;
        case 7:
            cout << "Семьсот ";
            break;
        case 8:
            cout << "Восемьсот ";
            break;
        case 9:
            cout << "Девятьсот ";
            break;
    }
    switch ((n % 100) / 10)
    {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "Семьдесят ";
            break;
        case 8:
            cout << "Восемьдесят ";
            break;
        case 9:
            cout << "Девяносто ";
            break;
    }
    
    if (n % 100 >= 10 & n % 100 < 20)
    {
        switch (n % 100)
        {
            case 10:
                cout << "десять бананов" << endl;
                break;
            case 11:
                cout << "одинадцать бананов" << endl;
                break;
            case 12:
                cout << "двенадцать бананов" << endl;
                break;
            case 13:
                cout << "тринадцать бананов" << endl;
                break;
            case 14:
                cout << "четырнадцать бананов" << endl;
                break;
            case 15:
                cout << "пятнадцать бананов" << endl;
                break;
            case 16:
                cout << "шестнадцать бананов" << endl;
                break;
            case 17:
                cout << "семнадцать бананов" << endl;
                break;
            case 18:
                cout << "восемнадцать бананов" << endl;
                break;
            case 19:
                cout << "девятнадцать бананов" << endl;
                break;
        }
    }
    else
    {
        switch (n % 10)
        {
            case 0:
                cout << "бананов" << endl;
                break;
            case 1:
                cout << "один банан" << endl;
                break;
            case 2:
                cout << "два банана" << endl;
                break;
            case 3:
                cout << "три банана" << endl;
                break;
            case 4:
                cout << "четыре банана" << endl;
                break;
            case 5:
                cout << "пять бананов" << endl;
                break;
            case 6:
                cout << "шесть банана" << endl;
                break;
            case 7:
                cout << "семь бананов" << endl;
                break;
            case 8:
                cout << "восемь бананов" << endl;
                break;
            case 9:
                cout << "девять бананов" << endl;
                break;
        }
    }

    
    return EXIT_SUCCESS;
}
