#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

struct student {
    char name[20];
    char roll[20];
    int marks, random;
};

student st;

void cpp()
{
    st.marks = 0;
    int i = 0;
    int arr[5] = { -1, -1, -1, -1, -1 };
    while (i < 5)
    {
        st.random = rand() % 5;
        bool exists = false;
        for (int j = 0; j < i; j++)
        {
            if (st.random == arr[j])
            {
                exists = true;
                break;
            }
        }
        if (exists)
        {
            continue;
        }
        arr[i] = st.random;
        i++;
        char choice;

        switch (st.random)
        {
        case 0:
            cout << i << ". What is a correct syntax to output \"Hello World\" in C++" << endl;
            cout << "a) System.out.println(\"Hello world\");" << endl;
            cout << "b) Console.WriteLine(\"Hello world\");" << endl;
            cout << "c) \"Hello world\";" << endl;
            cout << "d) None of these" << endl;
            cout << endl;
            choice = getch();
            if (choice == 'C' || choice == 'c')
            {
                cout << "Your answer is correct" << endl;
                st.marks++;
            }
            else {
                cout << "Your answer is incorrect " << endl;
            }
            break;
        case 1:
            cout << i << ". Which language has the capability to generate new data" << endl;
            cout << "a) Extensible" << endl;
            cout << "b) Overloaded " << endl;
            cout << "c) Encapsulated" << endl;
            cout << "d) None of these" << endl;
            cout << endl;
            choice = getch();
            if (choice == 'A' || choice == 'a')
            {
                cout << "Your answer is correct" << endl;
                st.marks++;
            }
            else {
                cout << "Your answer is incorrect " << endl;
            }
            break;
        case 2:
            cout << i << ". Which of the following is called extersion operator " << endl;
            cout << "a) >" << endl;
            cout << "b) < " << endl;
            cout << "c) <<" << endl;
            cout << "d) >>" << endl;
            cout << endl;
            choice = getch();
            if (choice == 'C' || choice == 'c')
            {
                cout << "Your answer is correct" << endl;
                st.marks++;
            }
            else {
                cout << "Your answer is incorrect " << endl;
            }
            break;
        case 3:
            cout << i << ". Which of the following is called the address operator in C++ " << endl;
            cout << "a) *" << endl;
            cout << "b) & " << endl;
            cout << "c) -" << endl;
            cout << "d) %" << endl;
            cout << endl;
            choice = getch();
            if (choice == 'B' || choice == 'b')
            {
                cout << "Your answer is correct" << endl;
                st.marks++;
            }
            else {
                cout << "Your answer is incorrect " << endl;
            }
            break;
        case 4:
            cout << i << ". Which of the following is called insertion/put to operator " << endl;
            cout << "a) >" << endl;
            cout << "b) < " << endl;
            cout << "c) <<" << endl;
            cout << "d) >>" << endl;
            cout << endl;
            choice = getch();
            if (choice == 'D' || choice == 'd')
            {
                cout << "Your answer is correct" << endl;
                st.marks++;
            }
            else {
                cout << "Your answer is incorrect " << endl;
            }
            break;
        }
    }
}

void java()
{
    // Implement Java quiz questions...
}

void html()
{
    // Implement HTML quiz questions...
}

void result()
{
    int per = 0;
    cout << "Student Name : " << st.name << endl;
    cout << "Roll no : " << st.roll << endl;
    cout << "Marks :" << st.marks << " Out of 5" << endl;
    per = 100 * st.marks / 5;
    cout << "Percentage :" << per << "%" << endl;
    if (per >= 50)
    {
        cout << "Status : Pass" << endl;
    }
    else {
        cout << "Status : Fail" << endl;
    }
}

int main()
{
    char press;
    char select;

    do {
        cout << "\n\n\t\t********************" << endl;
        cout << "\t\t   QUIZ SYSTEM " << endl;
        cout << "\t\t    Enter name: ";
        cin.getline(st.name, 20);
        cout << "\t\t  Roll no :";
        cin.getline(st.roll, 20);
        cout << "Press y to continue or any key to terminate";
        press = getch();
        system("CLS");
        cout << "\t\t Marks less than 50% will be fail" << endl << endl;
        cout << "Select which subject quiz you want to perform " << endl;
        cout << "1) C++" << endl;
        cout << "2) Java" << endl;
        cout << "3) HTML " << endl;
        select = getch();
        system("CLS");
        switch (select)
        {
        case '1':
            cout << "\t\tC++ Quiz" << endl;
            cpp();
            system("CLS");
            cout << "C++ Quiz Result" << endl;
            result();
            break;
        case '2':
            cout << "\t\tJava Quiz" << endl;
            java();
            break;
        case '3':
            cout << "\t\tHTML Quiz" << endl;
            html();
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    } while (press == 'y' || press == 'Y');

    return 0;
}
