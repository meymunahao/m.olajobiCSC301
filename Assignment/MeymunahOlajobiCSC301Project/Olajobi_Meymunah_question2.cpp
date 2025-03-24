#include <iostream>
#include <queue>
#include <list>
#include <string>
using namespace std;

//Used ChatGPT in getting an outline of how to go about the project (to help structure my disorganised thoughts).
//Used ChatGPT in places I kept having errors in, which I needed to fix after countless tries myself like (cin.ignore etc)

//Parcel Details
struct Parcel {
    int id; //ID for each parcel
    string recipient; //Recipient's name
    string address; //Delivery address
    int priority; //Delivery priority (the higher the number, the higher the importance)
};

list<Parcel> parcels; //Linked list to store all parcels

queue<Parcel> loadingQueue; //Queue to manage loading parcels (first-come, first-served; FIFO)

//To register a new parcel;
void registerParcel() {
    Parcel newParcel;
    cout << "Enter Parcel ID: ";
    cin >> newParcel.id;
    cin.ignore(); //To clear the input buffer, to avoid any probblems as getline is also here
    cout << "Enter Recipient Name: ";
    getline(cin, newParcel.recipient);
    cout << "Enter Address: ";
    getline(cin, newParcel.address);
    cout << "Enter Priority (1-10; 1 being 'Not so Important', 10 being 'Very Important'): ";
    cin >> newParcel.priority;

    parcels.push_back(newParcel); //Add the parcel to the linked list
    cout << "Parcel registered successfully!\n";
}

//To load parcels into the loading queue
void loadParcel() {
    if (parcels.empty()) {
        cout << "No parcels to load.\n";
        return;
    }

    //Load parcels from the list into the queue
    Parcel parcel = parcels.front();
    parcels.pop_front();
    loadingQueue.push(parcel);
    cout << "Parcel with ID " << parcel.id << " loaded into the queue.\n";
}

//To deliver a parcel
void deliverParcel() {
    if (loadingQueue.empty()) {
        cout << "No parcels in the queue to deliver.\n";
        return;
    }

    //Deliver the parcel at the front of the queue
    Parcel parcel = loadingQueue.front();
    loadingQueue.pop();
    cout << "Parcel with ID " << parcel.id << " delivered to " << parcel.address << ".\n";
}

//To display all parcels
void displayParcels() {
    if (parcels.empty()) {
        cout << "No parcels registered.\n";
        return;
    }

    cout << "List of Registered Parcels:\n";
    for (const Parcel& parcel : parcels) {
        cout << "ID: " << parcel.id << ", Recipient: " << parcel.recipient << ", Address: " << parcel.address << ", Priority: " << parcel.priority << "\n";
    }
}

//Main menu function
void menu() {
    int choice;
    do {
        cout << "\nParcel Delivery System Menu:\n";
        cout << "1. Register Parcel\n";
        cout << "2. Load Parcel\n";
        cout << "3. Deliver Parcel\n";
        cout << "4. Display Parcels\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerParcel();
                break;
            case 2:
                loadParcel();
                break;
            case 3:
                deliverParcel();
                break;
            case 4:
                displayParcels();
                break;
            case 5:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

//Main function
int main() {
    menu();
    return 0;
}