/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#ifndef SDDS_MENU_H_
#define SDDS_MENU_H_

#include <iostream>

namespace sdds
{
  class Menu
  {
    char *m_text{nullptr}; // holds the menu content dynamically
    int m_noOfSel{0};      // holds the number of options displayed in menu content
    void display() const;

  public:
    Menu(const char* MenuContent, int NoOfSelections);
    virtual ~Menu();
    int &operator>>(int& Selection);

    // add safe copying logic
    // Make sure the Menu can be safely copied
    Menu(const Menu &src);

    // not be able to be assigned to another Menu object
    Menu &operator=(const Menu &) = delete;
  };
}
#endif