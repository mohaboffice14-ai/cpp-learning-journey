#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;
    int brightness, speed, temperature;

    cout << "===== Smart Home Control System =====\n";
    cout << "1. Lights\n";
    cout << "2. Fan\n";
    cout << "3. AC\n";
    cout << "4. Security System\n";

    cout << "\nEnter your choice: ";
    cin >> mainChoice;

    switch(mainChoice) {

        case 1: // Lights
            cout << "\n--- Lights Menu ---\n";
            cout << "1. Turn ON\n";
            cout << "2. Turn OFF\n";
            cout << "3. Brightness Control\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Lights Turned ON" << endl;
                    break;

                case 2:
                    cout << "Lights Turned OFF" << endl;
                    break;

                case 3:
                    cout << "Enter Brightness Level (0-100): ";
                    cin >> brightness;
                    cout << "Brightness set to " << brightness << "%" << endl;
                    break;

                default:
                    cout << "Invalid Lights Option!" << endl;
            }
            break;

        case 2: // Fan
            cout << "\n--- Fan Menu ---\n";
            cout << "1. ON\n";
            cout << "2. OFF\n";
            cout << "3. Speed Control\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Fan Turned ON" << endl;
                    break;

                case 2:
                    cout << "Fan Turned OFF" << endl;
                    break;

                case 3:
                    cout << "Enter Fan Speed (1-5): ";
                    cin >> speed;
                    cout << "Fan Speed set to " << speed << endl;
                    break;

                default:
                    cout << "Invalid Fan Option!" << endl;
            }
            break;

        case 3: // AC
            cout << "\n--- AC Menu ---\n";
            cout << "1. ON\n";
            cout << "2. OFF\n";
            cout << "3. Set Temperature\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "AC Turned ON" << endl;
                    break;

                case 2:
                    cout << "AC Turned OFF" << endl;
                    break;

                case 3:
                    cout << "Enter Temperature: ";
                    cin >> temperature;
                    cout << "Temperature set to "
                         << temperature << "°C" << endl;
                    break;

                default:
                    cout << "Invalid AC Option!" << endl;
            }
            break;

        case 4: // Security System
            cout << "\n--- Security System Menu ---\n";
            cout << "1. Arm System\n";
            cout << "2. Disarm System\n";
            cout << "3. View Status\n";

            cout << "Enter your choice: ";
            cin >> subChoice;

            switch(subChoice) {
                case 1:
                    cout << "Security System Armed" << endl;
                    break;

                case 2:
                    cout << "Security System Disarmed" << endl;
                    break;

                case 3:
                    cout << "Security System Status: Active" << endl;
                    break;

                default:
                    cout << "Invalid Security Option!" << endl;
            }
            break;

        default:
            cout << "Invalid Main Menu Option!" << endl;
    }

    return 0;
}