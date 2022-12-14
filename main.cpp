//
//  main.cpp
//  projectPiConverge
//
//  Created by Pranav Saravanan.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  // Start the outer for loop with n = 2
  int n = 2;
  for (int i = 0; i < 20; i++)
  {
    // Calculate the value of pi using the Leibniz formula with the current value of n
    double pi = 0;
    for (int j = 0; j < n; j++)
    {
      pi += pow(-1, j) / (2 * j + 1);
    }
    pi = pi * 4;

    // Print the result
    std::cout << std::setprecision(15) << std::fixed;
    cout << "The value of pi is approximately: " << pi << " n: " << n << endl;

    // Double the value of n for the next iteration
    n *= 2;
  }

  return 0;
}
