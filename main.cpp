#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Please enter a number: ";
  cin >> n;

  int sum = sum(n);

  cout << "The sum is :" << sum << endl;
}

int sum(int n){
  n = n + 1;
  return n;
}
