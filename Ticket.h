/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#ifndef SDDS_TICKET_H_
#define SDDS_TICKET_H_

#include "Time.h"
#include "IOAble.h"

namespace sdds
{
  class Ticket : public IOAble
  {
    Time m_time;  // The time the Ticket was issued
    int m_number; // The ticket number

  public:
    Ticket(int number);
    operator Time() const;
    int number() const;
    void resetTime();
    std::ostream &csvWrite(std::ostream &ostr) const;
    std::istream &csvRead(std::istream &istr);
    std::ostream &write(std::ostream &ostr) const;
    std::istream &read(std::istream &istr);
  };
}
#endif // !SDDS_TICKET_H_
