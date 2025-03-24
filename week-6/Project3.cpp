#include <iostream>
#define MAX_SIZE 10

using namespace std;

class Queue {
	private:
		int arr[MAX_SIZE];
		int front, rear;
	public:
		Queue() {
			front = -1;
			rear = -1;
		}
		bool isEmpty(){
			return (front == -1 && rear == -1);
		}
		bool isFull(){
			return (rear == MAX_SIZE -1);
		}
		void enqueue(int x){
			if (isFull()) {
				cout << "Queue overflow!\n";
				return;
			}
			else if (isEmpty()){
				front = 0;
				rear = 0;
			}
			else {
				rear++;
			}
			arr[rear] = x;
		}
		void dequeue(){
			if (isEmpty()) {
				cout << "Queue underflow!\n";
				return;
			}
			else if (front == rear) {
				front = -1;
				rear = -1;
			}
			else {
				front++;
			}
		}
		void display(){
			if (isEmpty()) {
				cout << "Queue is empty.\n";
				return;
			}
			for (int i = front; i <= rear; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}		
};

int main(){
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.display();
	q.dequeue();
	q.display();
	q.enqueue(50);
	q.enqueue(60);
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();
	
	return 0;
}