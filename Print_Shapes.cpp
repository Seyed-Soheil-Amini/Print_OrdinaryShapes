//Auther:Seyed Mohammad Soheil Amini
//Up to Date:1400,09,22
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
void Print_Circle(int set, int radius, char ch, int color);                  //function for printing a circle//complete
void Print_H_Line(int length, char ch, int color);                           //function for printing a horizontal line//complete
void Print_V_Line(int height, char ch, int color);                           //function for printing a vertical line//complete
void Print_Square(int set, int side, char ch, int color);                    //function for printing a square//complete
void Print_Rectangle(int set, int len, int weight, char ch, int color);      //function for printing a rectangle//complete
void Print_Diamond(int set, int diameter, char ch, int color);               //function for printing a diamond//complete
void Print_Parallelogram(int set, int side1, int side2, char ch, int color); //function for printing a parallelogram//complete
int Setting_mode_Shape();                                                    //function for setting mode of shape
void printspc(int a);                                                        //function for printing white space
void printchar(int a, char ch, int b);                                       //function for printing character
int setcolor();                                                              //function for setting color of shape
int C_equality(int x, int y);                                                //circle equality
char get_char();                                                             //function for getting character
//--------------------------------------------------------------------------------------------------------
int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int num, radius, length, height, side, len, weight, diameter, side1, side2, color, setting; //the number of shape
    char ch;
    while (1)
    {
        SetConsoleTextAttribute(h, 7);
        cout << "Enter The Number Of Your Shape:"
             << "\n";
        cout << "\t1-Circle"
             << "\n";
        cout << "\t2-Horizontal line"
             << "\n";
        cout << "\t3-Vertical line"
             << "\n";
        cout << "\t4-Square"
             << "\n";
        cout << "\t5-Rectangle"
             << "\n";
        cout << "\t6-Diamond"
             << "\n";
        cout << "\t7-Parallelogram"
             << "\n";
        cout << "\t8-Exit"
             << "\n";
        cin >> num;
        switch (num) //check the type of shape
        {
        case 1:
            cout << "Enter Radius:";
            cin >> radius;
            ch = get_char();
            setting = Setting_mode_Shape();
            color = setcolor();
            Print_Circle(setting, radius, ch, color);
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "Enter The Length:";
            cin >> length;
            ch = get_char();
            color = setcolor();
            Print_H_Line(length, ch, color);
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "Enter The Height:";
            cin >> height;
            ch = get_char();
            color = setcolor();
            Print_V_Line(height, ch, color);
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Enter The Side:";
            cin >> side;
            ch = get_char();
            setting = Setting_mode_Shape();
            color = setcolor();
            Print_Square(setting, side, ch, color);
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "Enter The Length:";
            cin >> len;
            cout << "Enter The Weight:";
            cin >> weight;
            ch = get_char();
            setting = Setting_mode_Shape();
            color = setcolor();
            Print_Rectangle(setting, len, weight, ch, color);
            system("pause");
            system("cls");
            break;
        case 6:
            cout << "Enter Diameter:";
            cin >> diameter;
            ch = get_char();
            setting = Setting_mode_Shape();
            color = setcolor();
            Print_Diamond(setting, diameter, ch, color);
            system("pause");
            system("cls");
            break;
        case 7:
            cout << "Enter Side1:";
            cin >> side1;
            cout << "Enter Side2:";
            cin >> side2;
            ch = get_char();
            setting = Setting_mode_Shape();
            color = setcolor();
            Print_Parallelogram(setting, side1, side2, ch, color);
            system("pause");
            system("cls");
            break;
        default:
            return 0;
        }
        cout << "\n";
    }
}
//--------------------------------------------------------------------------------------------------------
char get_char()
{
    char c;
    cout << "Enter The Character:";
    cin >> c;
    return c;
}
int Setting_mode_Shape() //function for setting mode of shape
{
    int setting;
    cout << "Enter The Number Of Setting Of Shape:"
         << "\n";
    cout << "\t1-Solid"
         << "\n";
    cout << "\t2-Hollow"
         << "\n";
    cin >> setting;
    return setting;
}
int setcolor() //function for setting color of shape
{
    int color;
    cout << "Enter The Color:"
         << "\n";
    cout << "\t0-Black"
         << "\n";
    cout << "\t1-Blue"
         << "\n";
    cout << "\t2-Green"
         << "\n";
    cout << "\t3-Aqua"
         << "\n";
    cout << "\t4-Red"
         << "\n";
    cout << "\t5-Purple"
         << "\n";
    cout << "\t6-Yellow"
         << "\n";
    cout << "\t7-White"
         << "\n";
    cout << "\t8-Gray"
         << "\n";
    cout << "\t9-Light Blue"
         << "\n";
    cout << "\t10-Light Green"
         << "\n";
    cout << "\t11-Light Aqua"
         << "\n";
    cout << "\t12-Light Red"
         << "\n";
    cout << "\t13-Light Purple"
         << "\n";
    cout << "\t14-Light Yellow"
         << "\n";
    cout << "\t15-Bright White"
         << "\n";
    cin >> color;
    switch (color)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 8:
        return 8;
        break;
    case 9:
        return 9;
        break;
    case 10:
        return 10;
        break;
    case 11:
        return 11;
        break;
    case 12:
        return 12;
        break;
    case 13:
        return 13;
        break;
    case 14:
        return 14;
        break;
    case 15:
        return 15;
        break;
    default:
        return 7;
    }
}
void printspc(int a) //function for printing white space
{
    for (int i = 1; i <= a; i++)
    {
        cout << " ";
    }
}
void printchar(int a, char ch, int b) //function for printing character
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 1; i <= a; i++)
    {
        SetConsoleTextAttribute(h, b);
        cout << ch;
    }
}
int C_equality(int x, int y) //circle equality
{
    return sqrt(pow(x, 2) + pow(y, 2));
}
void Print_Circle(int set, int radius, char ch, int color) //function for printing a circle//complete
{
    if (set == 1)
    {
        //In fact, the circle is enclosed in a square
        //print points within the circle
        for (int i = -radius; i <= radius; i++) //Loop for vertical communication (up to down)
        {
            for (int j = -radius; j <= radius; j++) //Loop for horizontal communication (left to right)
            {
                if (C_equality(j, i) <= radius) //Experiment per point on the communication in the circle equation
                {
                    printchar(1, ch, color);
                }
                else
                {
                    printspc(1);
                }
            }
            cout << "\n";
        }
    }
    else
    {
        //In fact, the circle is enclosed in a square
        //print points on the circle
        for (int i = -radius; i <= radius; i++) //Loop for vertical communication (up to down)
        {
            for (int j = -radius; j <= radius; j++) //Loop for horizontal communication (left to right)
            {
                if (C_equality(j, i) == radius) //Experiment per point on the communication in the circle equation
                {
                    printchar(1, ch, color);
                }
                else
                {
                    printspc(1);
                }
            }
            cout << "\n";
        }
    }
}
void Print_H_Line(int length, char ch, int color) //function for printing a horizontal line//complete
{
    printchar(length, ch, color);
}
void Print_V_Line(int height, char ch, int color) //function for printing a vertical line//complete
{
    for (int i = 1; i <= height; i++)
    {
        printchar(1, ch, color);
        cout << "\n";
    }
}
void Print_Square(int set, int side, char ch, int color) //function for printing a square//complete
{
    if (set == 1)
    {
        for (int i = 1; i <= side; i++)
        {
            printchar(side, ch, color);
            cout << "\n";
        }
    }
    else
    {
        for (int i = 1; i <= side; i++)
        {
            if (i == 1 || i == side)
            {
                printchar(side, ch, color);
            }
            else
            {
                printchar(1, ch, color);
                printspc(side - 2);
                printchar(1, ch, color);
            }
            cout << endl;
        }
    }
}
void Print_Rectangle(int set, int len, int weight, char ch, int color) //function for printing a rectangle//complete
{
    if (set == 1)
    {
        for (int i = 1; i <= weight; i++)
        {
            printchar(len, ch, color);
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= weight; i++)
        {
            if (i == 1 || i == weight)
            {
                printchar(len, ch, color);
            }
            else
            {
                printchar(1, ch, color);
                printspc(len - 2);
                printchar(1, ch, color);
            }
            cout << endl;
        }
    }
}
void Print_Diamond(int set, int diameter, char ch, int color) //function for printing a diamond//complete
{
    int spc, spc2, str;
    spc = diameter;
    spc2 = 1;
    str = 1;
    if (set == 1)
    {
        for (int i = 1; i <= 2 * diameter + 1; i++)
        {
            printspc(spc);
            printchar(str, ch, color);
            cout << "\n";
            if (i <= diameter)
            {
                spc--;
                str += 2;
            }
            else
            {
                spc++;
                str -= 2;
            }
        }
    }
    else
    {
        for (int i = 1; i <= 2 * diameter + 1; i++)
        {
            if (i == 1 || i == 2 * diameter + 1)
            {
                printspc(spc + 1);
                printchar(1, ch, color);
            }
            else
            {
                printspc(spc);
                printchar(1, ch, color);
                printspc(spc2);
                printchar(1, ch, color);
            }
            cout << "\n";
            if (i <= diameter)
            {
                spc--;
                spc2 += 2;
            }
            else
            {
                spc++;
                spc2 -= 2;
            }
        }
    }
}
void Print_Parallelogram(int set, int side1, int side2, char ch, int color) //function for printing a parallelogram//complete
{
    int spc, temp;
    if (side1 > side2)
    {
        temp = side2;
        side2 = side1;
        side1 = temp;
    }
    spc = side1;
    if (set == 1)
    {
        for (int i = 1; i <= side1; i++)
        {
            printspc(spc);
            printchar(side2, ch, color);
            cout << "\n";
            spc--;
        }
    }
    else
    {
        for (int i = 1; i <= side1; i++)
        {
            if (i == 1 || i == side1)
            {
                printspc(spc);
                printchar(side2, ch, color);
            }
            else
            {
                printspc(spc);
                printchar(1, ch, color);
                printspc(side2 - 2);
                printchar(1, ch, color);
            }
            cout << "\n";
            spc--;
        }
    }
}