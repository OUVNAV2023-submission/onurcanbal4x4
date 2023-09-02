#include "random_vector.h"
// TODO: add any include you might require

RandomVector::RandomVector(int size, double max_val) { 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <bits/stdc++.h>
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
}

}

void RandomVector::print(){
    copy(vect.begin(),
         vect.end(),
         ostream_iterator<double>(cout, " "));
  return 0;
}

double RandomVector::mean(){
  double sum_of_elems = 0.0 ;
  sum_of_elems = std::accumulate(vect.begin(), vect.end(), 0.0);
  double mean = 0.0;
  mean = sum_of_elems/vect.size();
  cout << "Mean is  " << mean << "\n";
  return mean;
}

double RandomVector::max(){
 double max = 0.0;
  max = *max_element(vect.begin(), vect.end());
    cout <<  "\n" << "Maximum value is " << max << "\n";
  return max;
}

double RandomVector::min(){
  double min = 0.0;
  min = *min_element(vect.begin(), vect.end());
    cout <<  "\n" << "Minimum value is " << min << "\n";
  return min;
}

void RandomVector::printHistogram(int bins){
  // TODO: Write your code here
}
