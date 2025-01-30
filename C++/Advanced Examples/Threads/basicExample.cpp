#include <iostream>
#include <thread>

static bool s_Finished = false;

void doWorkA(){
    using namespace std::literals::chrono_literals;

    std::cout << "Started Work on " << std::this_thread::get_id() << std::endl;
    int count = 5;
    while(!s_Finished){
        std::cout << "Working on thread A....\n";
        std::this_thread::sleep_for(1s);
    }
}

int main(){
    std::thread workerA(doWorkA);

    std::cin.get();
    s_Finished = true;

    workerA.join();
    std::cout << "Started Work on " << std::this_thread::get_id() << std::endl;
    std::cout << "Hello World";
}