#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

const int numPhilosophers = 5;
std::vector<std::mutex> chopsticks(numPhilosophers);
std::mutex coutMutex;

void Philosopher(int id){
    int leftChopstick = id;
    int rightChopstick = (id + 1) % numPhilosophers;

    while(true){
        // Thinking
        std::unique_lock<std::mutex> coutLock(coutMutex);
        std::cout << "Philosopher " << id << " is thinking....\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        coutLock.unlock();

        // Picking Up Chopsticks
        std::lock(chopsticks[leftChopstick], chopsticks[rightChopstick]);
        std::lock_guard<std::mutex> left(chopsticks[leftChopstick], std::adopt_lock);
        std::lock_guard<std::mutex> right(chopsticks[rightChopstick], std::adopt_lock);

        // Eat
        coutLock.lock();
        std::cout << "Philosopher " << id << " is eating...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        coutLock.unlock();
    }
}

int main(){
    std::vector<std::thread> philosophers;

    // Create Threads for each philosopher
    for(int i = 0; i < numPhilosophers; ++i){
        // Vector's Method emplace_back() creates the thread object in the memory of the vector itself.
        // You can also use vector's method push_back() but you would first need to create a thread object manually
        // The Thread Object can then be moved (not copied) in the vector as:
        // philosophers.push_back(std::thread(Philosopher, i));
        philosophers.emplace_back(Philosopher, i);
    }

    // Run join() method on each philosopher to prevent main thread from exiting before each philosopher thread
    // auto& is used to reference philosophers ds copying thread is not possible by design
    // detach() method could also be used, as it allows to detach the threads from main executing them independently
    // However detach() makes it harder to manage each individual thread
    for (auto& philosopher: philosophers){
        philosopher.join();
    }
}