#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Library.h"
using namespace std;

void showMenu() {
    cout << "\n====================================\n";
    cout << "   SMART TICKET RESERVATION SYSTEM  \n";
    cout << "====================================\n";
    cout << "1. Reserve Ticket (Parameterized)\n";
    cout << "2. Reserve Ticket (Default)\n";
    cout << "3. Reserve Ticket (Copy from another)\n";
    cout << "4. Show All Tickets\n";
    cout << "5. Compare Tickets\n";
    cout << "6. Apply Discount\n";
    cout << "7. Cancel Ticket\n";
    cout << "8. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    Ticket tickets[20];
    int count = 0, choice;

    srand((unsigned)time(0));

    do {
        showMenu();
        cin >> choice;

        // 1
        if (choice == 1) {
            string name, dest;
            float price;

            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Destination: ";
            cin >> dest;
            cout << "Enter Price: ";
            cin >> price;

            tickets[count].reserveTicket(name, dest, price);
            tickets[count].saveToFile();

            cout << "Ticket Reserved!\n";
            cout << tickets[count];
            count++;
        }

        // 2
        else if (choice == 2) {
            string name = "Passenger" + to_string(rand() % 1000);
            string dest = "City" + to_string(rand() % 10 + 1);
            float price = 50 + rand() % 451;

            tickets[count].reserveTicket(name, dest, price);
            tickets[count].saveToFile();

            cout << "Ticket Reserved with Default Values!\n";
            cout << tickets[count];
            count++;
        }

        // 3
        else if (choice == 3) {
            int index;
            cout << "Enter index of ticket to copy: ";
            cin >> index;

            if (index >= count || index < 0) {
                cout << "Invalid index!\n";
                continue;
            }

            tickets[count].reserveTicket(tickets[index]);
            tickets[count].saveToFile();

            cout << "Ticket Reserved by Copying!\n";
            cout << tickets[count];
            count++;
        }

        // 4
        else if (choice == 4) {
            for (int i = 0; i < count; i++) {
                cout << "Index [" << i << "]";
                cout << tickets[i];
            }
        }

        // 5
        else if (choice == 5) {
            int a, b;
            cout << "Enter index 1: ";
            cin >> a;
            cout << "Enter index 2: ";
            cin >> b;

            if (a >= count || b >= count || a < 0 || b < 0) {
                cout << "Invalid index!\n";
                continue;
            }

            if (tickets[a] == tickets[b])
                cout << "Same Passenger\n";
            else
                cout << "Different Passengers\n";

            if (tickets[a] < tickets[b])
                cout << "Ticket " << a << " is cheaper\n";
            else
                cout << "Ticket " << b << " is cheaper\n";
        }

        // 6
        else if (choice == 6) {
            int i;
            float d;

            cout << "Enter ticket index: ";
            cin >> i;
            cout << "Enter discount: ";
            cin >> d;

            if (i >= count || i < 0) {
                cout << "Invalid index!\n";
                continue;
            }

            Ticket temp = tickets[i] - d;
            cout << temp;
        }

        // 7
        else if (choice == 7) {
            int i;
            cout << "Enter ticket index: ";
            cin >> i;

            if (i >= count || i < 0) {
                cout << "Invalid index!\n";
                continue;
            }

            tickets[i].cancelTicket();
        }

    } while (choice != 8);

    cout << "System Closed.\n";
    return 0;
}