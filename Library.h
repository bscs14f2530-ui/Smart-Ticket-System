#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ticket {
private:
    string name;
    string destination;
    float price;
    bool isReserved;

public:
    Ticket() {
        name = "";
        destination = "";
        price = 0;
        isReserved = false;
    }

    void reserveTicket(const string& n, const string& dest, float p) {
        name = n;
        destination = dest;
        price = p;
        isReserved = true;
    }

    void reserveTicket(const Ticket& t) {
        name = t.name;
        destination = t.destination;
        price = t.price;
        isReserved = t.isReserved;
    }

    void cancelTicket() {
        if (isReserved) {
            cout << "Ticket for " << name << " canceled.\n";
            name = "";
            destination = "";
            price = 0;
            isReserved = false;
        }
        else {
            cout << "No ticket reserved at this index.\n";
        }
    }

    void saveToFile() const {
        if (isReserved) {
            ofstream file("tickets.txt", ios::app);
            file << name << " " << destination << " " << price << endl;
        }
    }

    bool operator==(const Ticket& t) const {
        return (name == t.name && destination == t.destination);
    }

    bool operator<(const Ticket& t) const {
        return price < t.price;
    }

    Ticket operator-(float discount) const {
        Ticket temp = *this;
        temp.price -= discount;
        if (temp.price < 0) temp.price = 0;
        return temp;
    }

    friend ostream& operator<<(ostream& out, const Ticket& t) {
        if (t.isReserved) {
            out << "\nName: " << t.name
                << "\nDestination: " << t.destination
                << "\nPrice: " << t.price << "\n";
        }
        return out;
    }
};

#endif