#include "stdio.h"
#include <thread>
#include <mutex>
#include <cstdio>

void print_message(const char* message) {

	printf("%s\n", message);
}

int main() {

	
	std::thread t1(print_message, "thread1");
	t1.join();
	std::thread t2(print_message, "thread2");
	t2.join();
	std::thread t3(print_message, "thread3");
	t3.join();

	return 0;


}