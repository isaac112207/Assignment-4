#include <iostream>
#include <iomanip> 

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Function prototypes

int calculateSum(const int scores [], int size);
double calculateAverage(int sum, int size);
void addBonus(int scores [], int size, int bonus);
int findMinimum(const int scores [], int size);
int countHighPerformers(const int scores [], int size);
void printScores(const int scores [], int size);

int main(){
  int ary[10] = {75, 88, 62, 95, 50, 82, 70, 91, 45, 78};
  const int SIZE = 10;

  // Print the original scores
  cout << "Original Scores: ";
  printScores(ary, SIZE);

  // Show sum and average
  int sum = calculateSum(ary, SIZE);
  double average = calculateAverage(sum, SIZE);
  cout << "Sum: " << sum << endl;
  cout << fixed << setprecision(2);
  cout << "Average: " << average << endl;

  // Add bonus to scores and print
  int bonusValue = 10;
  addBonus(ary, SIZE, bonusValue);
  cout << "Scores after +10 bonus: ";
  printScores(ary, SIZE);

  // Find and show minimum score
  int minimum = findMinimum(ary, SIZE);
  cout << "Minimum Score: " << minimum << endl;

  // Count and show high performers
  int highcount = countHighPerformers(ary, SIZE);
  cout << "Number of high performers (>=80): " << highcount << endl;

   return 0;
}
  int calculateSum(const int scores [], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
      total += scores[i];
    }
    return total;
  }
  double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
  }
  void  addBonus(int scores [], int size, int bonus) {
    for (int i = 0; i < size; i++) {
      scores[i] += bonus;
    }
  }
   int findMinimum(const int scores [], int size) {
     int minimum = scores[0];
     for (int i = 1; i < size; i++) {
       if (scores[i] < minimum) {
         minimum = scores[i];
       }
     }
     return minimum;
   }
  int countHighPerformers(const int scores [], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
      if (scores[i] >= 80) {
        count++;
      }
    }
    return count;
  }
   void printScores(const int scores [], int size) {
     for (int i = 0; i < size; i++) {
       cout << scores[i] << " ";
     }
     cout << endl;
   }
