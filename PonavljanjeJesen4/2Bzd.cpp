////2. (15) Napisati template klasu koja predstavlja red(engl.queue).Implementirati potrebne funkcije.Red ima
////ograniˇcenu maksimalnu veliˇcinu, veliˇcinu, funkcije za dodavanje na kraj reda(enqueue), skidanje elementa
////sa poˇcetka reda(dequeue).Ako red dosegne maksimalnu veliˇcinu, funkcija za dodavanje elemenata treba
////baciti iznimku.
//
//#include<algorithm>
//#include<string>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//template<typename T>
//
//
//class Queue {
//public:
//
//	Queue(int velicina){
//		maxSize = velicina;
//	}
//
//	int maxSize;
//	int size = 0;
//	vector<T> queueue;
//
//	void enqueue(T el) {
//		if (size == maxSize) {
//			throw runtime_error("greska!");
//		}
//		queueue.push_back(el);
//		size++;
//		cout << "Element dodan!" << endl;
//	}
//	void dequeue() {
//			queueue.erase(queueue.begin());
//			cout << "Element s pocetka maknut!" << endl;
//
//			size--;
//	}
//};
//
//int main() {
//
//		try{
//		Queue<int> q1(7);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.dequeue();
//		q1.enqueue(2);
//		q1.enqueue(2);
//		q1.enqueue(2);
//
//		}
//		catch (exception e) {
//			cout << "Maksimalna velicina dostignuta! " << endl;
//		}
//	return 0;
//}
//
//
//
////class LimitedQueue {
////public:
////    LimitedQueue(size_t maxCapacity) : maxCapacity(maxCapacity) {}
////
////    void enqueue(const T& element) {
////        if (queue.size() < maxCapacity) {
////            queue.push_back(element);
////        }
////        else {
////            throw std::overflow_error("Queue is full. Cannot enqueue more elements.");
////        }
////    }
////
////    T dequeue() {
////        if (!queue.empty()) {
////            T frontElement = queue.front();
////            queue.erase(queue.begin());
////            return frontElement;
////        }
////        else {
////            throw std::underflow_error("Queue is empty. Cannot dequeue.");
////        }
////    }
////
////    size_t getSize() const {
////        return queue.size();
////    }
////
////    bool isEmpty() const {
////        return queue.empty();
////    }
////
////    bool isFull() const {
////        return queue.size() == maxCapacity;
////    }
////
////private:
////    vector<T> queue;
////    size_t maxCapacity;
////};
////
////int main() {
////    try {
////        LimitedQueue<int> intQueue(5); // Create a queue with a maximum capacity of 5
////
////        for (int i = 1; i <= 5; i++) {
////            intQueue.enqueue(i); // Enqueue elements 1 through 5
////        }
////
////        std::cout << "Queue size: " << intQueue.getSize() << std::endl; // Should print 5
////
////        while (!intQueue.isEmpty()) {
////            std::cout << "Dequeued: " << intQueue.dequeue() << std::endl; // Dequeue and print elements
////        }
////
////        intQueue.enqueue(6); // This will throw an exception because the queue is full
////    }
////    catch (const std::exception& ex) {
////        std::cerr << "Exception: " << ex.what() << std::endl;
////    }
////
////    return 0;
////}
