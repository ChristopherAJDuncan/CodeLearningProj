#include <iostream>
#include <chrono>
#include <ctime>

double mult(double a, double b){ 
  double result = a;
  for (int i = 0; i< 1; i++){
    result*=b;
  }
  return result;
}

int main()
{
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();
  std::cout << "f(42) = " << mult(1,2) << '\n';
  end = std::chrono::system_clock::now();
 
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
  std::cout << "finished computation at " << std::ctime(&end_time)
	    << "elapsed time: " << elapsed_seconds.count() << "s\n";
}
