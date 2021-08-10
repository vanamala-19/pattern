#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "\t __________Welcome To The Program____________" << endl;
    while (true)
    {
        int row, col, size, count = 1;
        char n;
        cout << " \n \n \t \t Enter the below Numbers to get corressponding results: " << endl;
        cout << " \n \n \t \t1>rectanble" << endl;
        cout << "\n \t \t2>Hollow Rectangle" << endl;
        cout << "\n \t \t3>Inverted Half Piramid" << endl;
        cout << "\n \t \t4>Half Piramid" << endl;
        cout << "\n \t \t5>Half Pyramid With NUmbers" << endl;
        cout << "\n \t \t6>Floyd's Triangle" << endl;
        cout << "\n \t \t7>Butterfly Pattern" << endl;
        cout << "\n \t \t8>0-1 Pattern" << endl;
        cout << "\n \t \t9>Rhombus Pattern" << endl;
        cout << "\n \t \t10>Number Pattern" << endl;
        cout << "\n \t \t11>Palindromic Pattern" << endl;
        cout << "\n \t \t12>Star Pattern" << endl;
        cout << "\n \t \t13>Zig-Zag Pattern" << endl;
        cout << "\n \n \t \t Enter Here -->";
        int b;
        cin >> b;
        system("cls");
        if (b == 1 || b == 2)
        {
            cout << "\t \tEnter the no.of Rows:\n"<< endl;
            cout << "\t \t Enter Here -->";
            cin >> row;
            cout << "\t \tEnter the no.of Colums:\n"<< endl;
            cout << "\t \t Enter Here -->";
            cin >> col;
        }
        else
        {
            cout << "\t \tEnter the no.of Size:\n"<< endl;
            cout << "\t \t Enter Here -->";
            cin >> size;
        }
        if(b != 5 && b != 6 && b != 8 && b != 10 && b != 11)
        {
            cout << "\t \tEnter the Symbol(0r)Key:\n"<< endl;
            cout << "\t \t Enter Here -->";
            cin >> n;
        }
        cout << endl;
        switch (b)
        {
        case 1:
            for (int i = 1; i <= row; i++)
            {
                for (int j = 1; j <= col; j++)
                {
                    cout << n << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 1; i <= row; i++)
            {
                for (int j = 1; j <= col; j++)
                {
                    if (i == 1 || i == row || j == 1 || j == col)
                    {
                        cout << n;
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 3:
            for (int i = size; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << n << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size; j++)
                {
                    if (j <= size - i)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << n;
                    }
                }
                cout << endl;
            }
            break;
        case 5:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            break;
        case 6:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << count << " ";
                    count++;
                }
                cout << endl;
            }
            break;
        case 7:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << n;
                }
                int space = 2 * size - 2 * i;
                for (int j = 1; j <= space; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << n;
                }
                cout << endl;
            }
            for (int i = size; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << n;
                }
                int space = 2 * size - 2 * i;
                for (int j = 1; j <= space; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << n;
                }
                cout << endl;
            }
            break;
        case 8:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        cout << " 1";
                    }
                    else
                    {
                        cout << " 0";
                    }
                }
                cout << endl;
            }
            break;
        case 9:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= size; j++)
                {
                    cout << n;
                }
                cout << endl;
            }
            break;
        case 10:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 11:
            for (int i = 1; i <= size; i++)
            {
                int j;
                for (j = 1; j <= size - i; j++)
                {
                    cout << "  ";
                }
                int k = i;
                for (; j <= size; j++)
                {
                    cout << k-- << " ";
                }
                k = 2;
                for (; j <= size + i - 1; j++)
                {
                    cout << k++ << " ";
                }
                cout << endl;
            }
            break;
        case 12:
            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << n;
                }
                cout << endl;
            }
            for (int i = size; i >= 1; i--)
            {
                for (int j = 1; j <= size - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << n;
                }
                cout << endl;
            }
            break;
        case 13:
            for (int i = 1; i <= 3; i++)
            {
                for (int j = 1; j <= size; j++)
                {
                    if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
                    {
                        cout << n << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid Key" << endl;
            break;
        }
        int exit;
        cout << "Press 1 Continue Or press Any key to exit" << endl;
        cin >> exit;
        if (exit == 0)
        {
            break;
        }
        else if (exit == 1)
        {
            system("cls");
            continue;
        }
        else
        {
            cout << "Invalid Key" << endl;
            break;
        }
    }
    return 0;
}