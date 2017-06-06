#include "iostream"
using namespace std;
int main(){
  int num, i;
  std::cout << "Please enter a number" << '\n';
  std::cin >> num;
  i =2;
  bool prime = true;
  while (i < num) {

  if (num % i == 0){
    prime = false;
  }
  i++;
  }
  if (prime == false){
    std::cout << " not prime" << '\n';
  }
  else{
    std::cout << "prime" << '\n';
  }
}
