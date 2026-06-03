#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

    cout << "===== University Portal =====\n";
    cout << "1. Student\n";
    cout << "2. Teacher\n";
    cout << "3. Admin\n";

    cout << "\nEnter your choice: ";
    cin >> mainChoice;

    switch(mainChoice) {

        case 1: // Student
            cout << "\n--- Student Menu ---\n";
            cout << "1. View Result\n";
            cout << "2. View Attendance\n";
            cout << "3. View Fee Status\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Displaying Result..." << endl;
                    break;

                case 2:
                    cout << "Displaying Attendance..." << endl;
                    break;

                case 3:
                    cout << "Displaying Fee Status..." << endl;
                    break;

                default:
                    cout << "Invalid Student Option!" << endl;
            }
            break;

        case 2: // Teacher
            cout << "\n--- Teacher Menu ---\n";
            cout << "1. Enter Marks\n";
            cout << "2. Mark Attendance\n";
            cout << "3. View Class List\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Entering Marks..." << endl;
                    break;

                case 2:
                    cout << "Marking Attendance..." << endl;
                    break;

                case 3:
                    cout << "Displaying Class List..." << endl;
                    break;

                default:
                    cout << "Invalid Teacher Option!" << endl;
            }
            break;

        case 3: // Admin
            cout << "\n--- Admin Menu ---\n";
            cout << "1. Add Student\n";
            cout << "2. Remove Student\n";
            cout << "3. Generate Report\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Adding Student..." << endl;
                    break;

                case 2:
                    cout << "Removing Student..." << endl;
                    break;

                case 3:
                    cout << "Generating Report..." << endl;
                    break;

                default:
                    cout << "Invalid Admin Option!" << endl;
            }
            break;

        default:
            cout << "Invalid Main Menu Choice!" << endl;
    }

    return 0;
}