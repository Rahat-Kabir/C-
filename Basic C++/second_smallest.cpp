//Find the second smallest elements in a given array of integers

#include <iostream>
using namespace std;

// Function to find the second smallest element in an array
int find_Second_Smallest(int array_num[], int n) {
  int smallest_num, second_smallest_num; // Declaring variables to store smallest and second smallest numbers

  // Determining initial smallest and second smallest numbers from the first two elements of the array
  if (array_num[0] < array_num[1]) {
    smallest_num = array_num[0];
    second_smallest_num = array_num[1];
  } else {
    smallest_num = array_num[1];
    second_smallest_num = array_num[0];
  }

  // Loop to find the second smallest number in the array
  for (int i = 0; i < n; i++) {
    // If current element is smaller than the smallest number
    if (smallest_num > array_num[i]) {
      second_smallest_num = smallest_num; // Assign the smallest number to second smallest
      smallest_num = array_num[i]; // Update the smallest number
    }
    // If current element is greater than smallest but smaller than second smallest
    else if (array_num[i] < second_smallest_num && array_num[i] > smallest_num) {
      second_smallest_num = array_num[i]; // Update the second smallest number
    }
  }

  return second_smallest_num;
}

int main() {
  int n = 7;
  int array_num[7] = {5, 6, 7, 2, 3, 4, 12}; // Declaration and initialization of an integer array
  int s = sizeof(array_num) / sizeof(array_num[0]); // Determining the size of the array

  cout << "Original array: "; // Output message indicating the original array is being displayed
  for (int i=0; i < s; i++)
    cout << array_num[i] <<" ";

  int second_smallest_num = find_Second_Smallest(array_num, n);
  cout<<"\nSecond smallest number: "<<second_smallest_num;

  return 0;
}
