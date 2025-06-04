#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void increment(){
    for(int i = 0; i < 10000; i++){
        mtx.lock();
        ++counter;
        mtx.unlock();
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

int main(){
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << counter << std::endl;
}

