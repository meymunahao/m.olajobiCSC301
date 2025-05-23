// A beginner-friendly C++ program for an Event Management System
#include <iostream>
#include <list>
#include <queue>
#include <string>
using namespace std;

// Structure to hold event details
struct Event {
    int id; // Unique ID for the event
    string name; // Event name
    string category; // Event category (e.g., Seminar, Sports, etc.)
    list<string> participants; // List of participants for the event
};

// Linked list to store all events
list<Event> events;

// Queue to manage event check-ins (first-come, first-served)
queue<string> checkInQueue;

// Function to create a new event
void createEvent() {
    Event newEvent;
    cout << "Enter Event ID: ";
    cin >> newEvent.id;
    cin.ignore(); // To clear the input buffer
    cout << "Enter Event Name: ";
    getline(cin, newEvent.name);
    cout << "Enter Event Category: ";
    getline(cin, newEvent.category);

    events.push_back(newEvent);
    cout << "Event created successfully!\n";
}

// Function to display all events
void displayEvents() {
    if (events.empty()) {
        cout << "No events available.\n";
        return;
    }

    cout << "List of Events:\n";
    for (const Event& event : events) {
        cout << "ID: " << event.id << ", Name: " << event.name << ", Category: " << event.category << "\n";
        if (!event.participants.empty()) {
            cout << "  Participants: ";
            for (const string& participant : event.participants) {
                cout << participant << ", ";
            }
            cout << "\n";
        }
    }
}

// Function to add a participant to an event
void addParticipant() {
    int eventId;
    string participantName;
    cout << "Enter Event ID: ";
    cin >> eventId;
    cin.ignore(); // Clear input buffer
    cout << "Enter Participant Name: ";
    getline(cin, participantName);

    for (Event& event : events) {
        if (event.id == eventId) {
            event.participants.push_back(participantName);
            checkInQueue.push(participantName); // Add participant to check-in queue
            cout << "Participant added successfully!\n";
            return;
        }
    }

    cout << "Event with ID " << eventId << " not found.\n";
}

// Function to check in a participant
void checkInParticipant() {
    if (checkInQueue.empty()) {
        cout << "No participants in the check-in queue.\n";
        return;
    }

    string participant = checkInQueue.front();
    checkInQueue.pop();
    cout << "Checked in participant: " << participant << "\n";
}

// Main menu function
void menu() {
    int choice;
    do {
        cout << "\nEvent Management System Menu:\n";
        cout << "1. Create Event\n";
        cout << "2. Display Events\n";
        cout << "3. Add Participant\n";
        cout << "4. Check In Participant\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createEvent();
                break;
            case 2:
                displayEvents();
                break;
            case 3:
                addParticipant();
                break;
            case 4:
                checkInParticipant();
                break;
            case 5:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

// Main function
int main() {
    menu();
    return 0;
}
