#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
int total = 0;

string calculateGrade(int marks) {
    if(marks >= 90) return "A";
    else if(marks >= 80) return "B";
    else if(marks >= 70) return "C";
    else if(marks >= 60) return "D";
    else return "F";
}

void enter() {
    int choice;
    cout << "How many students do you want to enter: ";
    cin >> choice;
    if(total == 0) {
        total = total + choice;
        for(int i = 0; i < choice; i++) {
            cout << "Enter data of student: " << i+1 << endl;
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter Roll no.: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact: ";
            cin >> arr5[i];
            int marks;
            cout << "Enter marks: ";
            cin >> marks;
            arr6[i] = calculateGrade(marks);
        }
    } else {
        for(int i = total; i < total + choice; i++) {
            cout << "Enter data of student: " << i+1 << endl;
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter Roll no.: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact: ";
            cin >> arr5[i];
            int marks;
            cout << "Enter marks: ";
            cin >> marks;
            arr6[i] = calculateGrade(marks);
        }
        total = total + choice;
    }
}

void show() {
    if(total == 0) {
        cout << "No data is entered" << endl;
    } else {
        for(int i = 0; i < total; i++) {
            cout << "Data of Student: " << i+1 << endl;
            cout << "Name: " << arr1[i] << endl;
            cout << "Roll no.: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl;
            cout << "Grade: " << arr6[i] << endl;
        }
    }
}

void search() {
    if(total == 0) {
        cout << "No data is entered" << endl;
    } else {
        string rollno;
        cout << "Enter rollno of student which you want to search: ";
        cin >> rollno;
        bool found = false;
        for(int i = 0; i < total; i++) {
            if(rollno == arr2[i]) {
                found = true;
                cout << "Data of Student: " << i+1 << endl;
                cout << "Name: " << arr1[i] << endl;
                cout << "Roll no.: " << arr2[i] << endl;
                cout << "Course: " << arr3[i] << endl;
                cout << "Class: " << arr4[i] << endl;
                cout << "Contact: " << arr5[i] << endl;
                cout << "Grade: " << arr6[i] << endl;
                break;
            }
        }
        if(!found) {
            cout << "Student with roll number " << rollno << " not found." << endl;
        }
    }
}

void update() {
    if(total == 0) {
        cout << "No data is entered" << endl;
    } else {
        string rollno;
        cout << "Enter rollno of student which you want to update: ";
        cin >> rollno;
        bool found = false;
        for(int i = 0; i < total; i++) {
            if(rollno == arr2[i]) {
                found = true;
                cout << "Previous data" << endl;
                cout << "Data of Student: " << i+1 << endl;
                cout << "Name: " << arr1[i] << endl;
                cout << "Roll no.: " << arr2[i] << endl;
                cout << "Course: " << arr3[i] << endl;
                cout << "Class: " << arr4[i] << endl;
                cout << "Contact: " << arr5[i] << endl;
                cout << "Grade: " << arr6[i] << endl;

                cout << "\nEnter new data" << endl;
                cout << "Enter name: ";
                cin >> arr1[i];
                cout << "Enter Roll no.: ";
                cin >> arr2[i];
                cout << "Enter course: ";
                cin >> arr3[i];
                cout << "Enter class: ";
                cin >> arr4[i];
                cout << "Enter contact: ";
                cin >> arr5[i];
                int marks;
                cout << "Enter marks: ";
                cin >> marks;
                arr6[i] = calculateGrade(marks);
                break;
            }
        }
        if(!found) {
            cout << "Student with roll number " << rollno << " not found." << endl;
        }
    }
}

void deleteRecord() {
    if(total == 0) {
        cout << "No data is entered" << endl;
    } else {
        int a;
        cout << "Press 1 to delete full record" << endl;
        cout << "Press 2 to delete specific record" << endl;
        cin >> a;
        if(a == 1) {
            total = 0;
            cout << "All records are deleted." << endl;
        } else if(a == 2) {
            string rollno;
            cout << "Enter rollno which you want to delete" << endl;
            cin >> rollno;
            bool found = false;
            for(int i = 0; i < total; i++) {
                if(rollno == arr2[i]) {
                    found = true;
                    for(int j = i; j < total - 1; j++) {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 1];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                        arr5[j] = arr5[j + 1];
                        arr6[j] = arr6[j + 1];
                    }
                    total--;
                    cout << "The required record is deleted." << endl;
                    break;
                }
            }
            if(!found) {
                cout << "Student with roll number " << rollno << " not found." << endl;
            }
        } else {
            cout << "Invalid input." << endl;
        }
    }
}

int main() {
    int value;
    while(true) {
        cout << "Press 1 to enter data" << endl;
        cout << "Press 2 to show data" << endl;
        cout << "Press 3 to search data" << endl;
        cout << "Press 4 to update data" << endl;
        cout << "Press 5 to delete data" << endl;
        cout << "Press 6 to exit" << endl;
        cin >> value;
        switch(value) {
            case 1:
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleteRecord();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
}
