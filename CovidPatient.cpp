/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#include "CovidPatient.h"

using namespace std;

namespace sdds {
  int nextCovidTicket = 1;

  // Sets the Ticket number to the current global value
  CovidPatient::CovidPatient() : Patient(nextCovidTicket) {
    nextCovidTicket++;
  }

  // ======== pure virtual function overwrites ========
  char CovidPatient::type() const {
    return 'C';
  }

  // Reads a comma-separated record of a Patient and sets the global ticket number
  std::istream &CovidPatient::csvRead(std::istream &istr) {
    Patient::csvRead(istr);
    nextCovidTicket = Patient::number() + 1;
    istr.ignore();

    return istr;
  }

  // Write the patient in a comma-separated format or a descriptive format for screen or ticket.
  std::ostream &CovidPatient::write(std::ostream &ostr) const {
    if (Patient::fileIO()) Patient::csvWrite(ostr);
    else {
      ostr << "COVID TEST" << endl;
      Patient::write(ostr) << endl;
    }
    return ostr;
  }

  // Read the patient in a comma-separated format from istream or
  // perform a fool-proof entry from the console
  std::istream &CovidPatient::read(std::istream &istr) {
    Patient::fileIO() == true ? csvRead(istr) : Patient::read(istr);
    return istr;
  }
}
