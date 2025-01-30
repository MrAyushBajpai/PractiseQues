#include <iostream>
#include <thread>
#include <mutex>

std::mutex CounterMutex;
int sharedValue = 0;

void incrementCounter(std::string ThreadName){
    for(int i = 0; i < 10000000; i++){
        std::lock_guard<std::mutex> lock(CounterMutex);
        ++sharedValue;
    }
}

int main(){
    std::thread thread1(incrementCounter, "Thread 1");
    std::thread thread2(incrementCounter, "Thread 2");

    thread1.join();
    thread2.join();

    std::cout << "Final Counter Value: " << sharedValue << std::endl;

}