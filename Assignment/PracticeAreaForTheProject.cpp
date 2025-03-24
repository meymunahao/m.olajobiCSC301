/* A robust offline application to keep track of all the events happening on campus*/
/* Leveraging core DS like linked lists, stacks, queues, trees*/
/* 1. Create, view, update, delete*/
/* 2. Store events in a tree to organize them by category*/
/* 3. Allow participants to register for events, storing their details in linked lists for dynamic handling*/
/* 4. Each event will maintain a linked list of participants*/
/* 5. Use a queue to handle event check-ins, ensuring a first-come, first-served system*/
/* 6. Provide options to process a participant (dequeue) or view the next in line*/
/* 7. Use a stack to implement undo/redo operations for participant registrations and event updates*/
/* 8. Implement a priority queue to schedule events based on their importance or urgency*/
/* 9. Higher-priority events are displayed first in the schedule*/
/* 10. Use a binary search tree (BST) to allow efficient searching for events by name or ID*/
/* 11. Display the event details, including participants and schedule*/
/* 12. Generate reports showing; 1. list of events and their participants, 2. event schedules, 3. check-in statistics*/

/* 
Some key fuunctionalities
	1. Event Registration by participant (store their details)
	2. Prioritize Registration
	3. Loading Registration
	4. Undo/Redo Actions
	5. Priortizing Scheduled Events
	6. Search Events (by name/ID) & Display Event Details
	7. Generate Reports


Classes
	EventRegistration
	LinkedList (Linked list for event w/participant)
	PriorityQueue
	Queue
	Stack
	Tree (BST for Event Search)

Data Structure
	Linked List: For participant details and lists of participants per event
	Priority Queue: For high-priority events (Based on importance & urgency)
	Queue: For viewing participants waiting
	Stack: For undo/redo actions
	Binary Search Tree: For efficient search of events (By name or ID)

Building Functionalities
	Event Registration
		- addRegister(); to register a participant and store the details in a linked list
		- making use of prriority enqueue to enqueue high-priority events
		
	Event Loading
		- making use of a queue to load events in first-come first-served order
		- enqueue()
		- dequeue()
		
	Undo/Redo
		- making use of stacks to manage actions for adding/deleting events
	
	Registration Tracking
		- Having registered for an event, move the list to the linked list of participants for each event
	
	Event Search
		- searchEventByName() using BST
		- searchEventByID() using BST
		
	Generate Reports
		- Summarize the total events;
			1. list of events and their participants
			2. event schedules
			3. check-in statistics

*/

/*
Hello! Welcome to this offline robust application used to keep track of all events happening on PAU campus.
Are you a user (U) or an admin (A)? U/A

U- User
	1. Register for events (storing their details)
	2. Undo/Redo operations for participant registrations 
	3. Effiicient searching for events by name/ID
	4. Display event details including participants and schedule

A- Admin
	1. CRUD function
	2. Store of events in a tree, organizing them by category
	3. Display of linked list for each event consisting of all registered participants for that event
	4. Process a participant/View next-in-line
	5. Undo/Redo operations for event updates
	6. Schedule events based on importance/urgency; using priority queue
	7. Reports generation showing 1. list of events and their participants, 2. event schedules, 3. check-in statistics

Are you done with the operations you came here for? (Y/N) 
Yes
	Terminate
No
	Back to the top


void exit() {
    cout << "Are you done with the operations you came here for? (Y/N)" << endl << endl;
}


*/

/*
Hello! Welcome to this offline robust application used to keep track of all events happening on PAU campus.
What would you like to do?

	1. Register for an event
	2. View pending registration/participants
	3. Load participant details onto list
	4. Undo/Redo actionns
	5. Search for a parcel
	6. Generate Reports
	7. CRUD operations


*/
