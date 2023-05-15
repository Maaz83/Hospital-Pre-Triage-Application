/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#ifndef SDDS_UTILS_H_
#define SDDS_UTILS_H_

#include <iostream>

namespace sdds
{
  extern bool debug; // making sdds::debug variable global to all the files
                     // which include: "utils.h"

  const int BUFFER_SIZE = 32767;

  // returns the time of day in minutes
  int getTime();

  // Performs a fool-proof integer entry from the console
  int getInt(const char *prompt = nullptr);

  // Performs a fool-proof integer entry from the console
  int getInt(int min, int max, const char *prompt = nullptr,
             const char *errorMessage = nullptr, bool showRangeAtError = true);

  char *getcstr(const char *prompt = nullptr, std::istream &istr = std::cin,
        char delimiter = '\n');

  template <typename type>
  void removeDynamicElement(type *array[], int index, int &size)
  {
    delete array[index];
    for (int j = index; j < size; j++)
    {
      array[j] = array[j + 1];
    }
    size--;
  }
}
#endif // !SDDS_UTILS_H_
