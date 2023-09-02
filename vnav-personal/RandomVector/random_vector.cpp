#include "random_vector.h"
// TODO: add any include you might require

RandomVector::RandomVector(int size, double max_val) { 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std; 
double doubleRand() {
  return double(rand()) / (double(RAND_MAX) + max_val);
}
int main() {
  srand(static_cast<unsigned int>(clock()));
  vector<double> vect;
  for (int i=0; i < size; i++) {
    double randomvalue = doubleRand();
    cout << randomvalue << "\n";
    vect.push_back(randomvalue);
  }
  cout << "Vector begins"<< "\n";
    copy(vect.begin(),
         vect.end(),
         ostream_iterator<double>(cout, " "));
  return 0;
}




  
}

void RandomVector::print(){
  // TODO: Write your code here
}

double RandomVector::mean(){
  // TODO: Write your code here
}

double RandomVector::max(){
  // TODO: Write your code here
}

double RandomVector::min(){
  //TODO:  Write your code here
}

void RandomVector::printHistogram(int bins){
  // TODO: Write your code here
}
