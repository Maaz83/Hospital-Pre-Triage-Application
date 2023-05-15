/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#include "Ticket.h"

namespace sdds {
  Ticket::Ticket(int number) {
    m_number = number;
  }

  Ticket::operator Time() const {
    return m_time;
  }

  int Ticket::number() const {
    return m_number;
  }

  void Ticket::resetTime() {
    // Sets the Ticket time to the current time.
    m_time.setToNow();
  }

  std::ostream& Ticket::csvWrite(std::ostream& ostr) const {
    // Inserts comma-separated ticket number and time into ostream
    return ostr << m_number << "," << m_time;
  }

  std::istream& Ticket::csvRead(std::istream& istr) {
    // Extracts the ticket number and time in a comma-separated format from istream.
    istr >> m_number;
    istr.ignore();
    return istr >> m_time;
  }

  std::ostream& Ticket::write(std::ostream& ostr) const {
    // Inserts a ticket into the ostream to be displayed on the console.
    return ostr << "Ticket No: " << m_number << ", Issued at: " << m_time ;
  }

  std::istream& Ticket::read(std::istream& istr) {
    // Extracts the ticket information from istream.
    return csvRead(istr);
  }
}
