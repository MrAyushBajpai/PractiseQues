#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
#include <condition_variable>

std::queue<int> data_queue;
std::mutex memLock;
std::condition_variable dataCondition;
bool finished = 0;

void producer(std::string ThreadName){
    for(int i = 0; i < 200; i++){
        {
            std::lock_guard<std::mutex> lock(memLock);
            data_queue.push(i);
            std::cout << "Produced: " << i << std::endl;
        }

        dataCondition.notify_one();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

    }
    {
        std::lock_guard<std::mutex> lock(memLock);
        finished = true;
    }
    dataCondition.notify_all();
}


void consumer(std::string ThreadName){
    while(true){
        std::unique_lock<std::mutex> lock(memLock);
        dataCondition.wait(lock, [] { return !data_queue.empty() || finished; });

        while(!data_queue.empty()){
            int val = data_queue.front();
            data_queue.pop();
            std::cout << "Consumed " << val << std::endl;
        }

        if (finished) break;
    }
}

int main(){
    std::thread p(producer, "Producer");
    std::thread c(consumer, "Consumer");

    p.join();
    c.join();

    std::cout << "All tasks completed" << std::endl;
}