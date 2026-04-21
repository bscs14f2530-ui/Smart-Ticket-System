Student Name: Nishat Afreen
Roll Number: 30
Project Name: Smart Ticket Reservation System

Description:
This project is a Smart Ticket Reservation System implemented in C++. 
It demonstrates function overloading and operator overloading. 
Users can reserve tickets using three methods: default ticket, parameterized ticket, 
or by copying an existing ticket. The program also allows comparing ticket prices, 
applying discounts, canceling tickets, and displaying ticket details.

Function Overloading Demonstrated:
1. reserveTicket()                  - Default ticket (automatic values)
2. reserveTicket(name, dest, price) - Parameterized ticket
3. reserveTicket(const Ticket &t)   - Copy ticket

Operator Overloading Demonstrated:
1. -   : Apply discount
2. <   : Compare ticket prices
3. ==  : Compare passengers
4. <<  : Display ticket information

Sample Output:
====================================
   SMART TICKET RESERVATION SYSTEM
====================================
1. Reserve Ticket (Parameterized)
2. Reserve Ticket (Default)
3. Reserve Ticket (Copy from another)
4. Show All Tickets
5. Compare Tickets
6. Apply Discount
7. Cancel Ticket
8. Exit
Enter choice: 2
Ticket Reserved with Default Values!

Name: Passenger435
Destination: City6
Price: 278

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 2
Ticket Reserved with Default Values!

Name: Passenger129
Destination: City10
Price: 412

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 1
Enter Name: Ali Khan
Enter Destination: Islamabad
Enter Price: 500
Ticket Reserved!

Name: Ali Khan
Destination: Islamabad
Price: 500

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 3
Enter index of ticket to copy: 0
Ticket Reserved by Copying!

Name: Passenger435
Destination: City6
Price: 278

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 4
Index [0]
Name: Passenger435
Destination: City6
Price: 278
Index [1]
Name: Passenger129
Destination: City10
Price: 412
Index [2]
Name: Ali Khan
Destination: Islamabad
Price: 500
Index [3]
Name: Passenger435
Destination: City6
Price: 278

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 5
Enter index 1: 0
Enter index 2: 2
Different Passengers
Ticket 0 is cheaper

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 6
Enter ticket index: 2
Enter discount: 100

Name: Ali Khan
Destination: Islamabad
Price: 400

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 7
Enter ticket index: 1
Ticket for Passenger129 canceled.

====================================
   SMART TICKET RESERVATION SYSTEM
====================================
Enter choice: 8
System Closed.

GitHub Repository Link:
https://github.com/bscs14f2530-ui/SmartTicket
(Copy and paste this link into your browser to open)