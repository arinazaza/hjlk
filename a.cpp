#include <iostream>
#include <chrono>
using namespace std;
int main() {
auto t1 = chrono::high_resolution_clock::now();
cout << "Hello World!\n";
auto t2 = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();
cout << "Time taken to print the message: " << duration << " nanoseconds\n";
return 0;
}