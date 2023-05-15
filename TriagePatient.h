/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#ifndef SDDS_TRIAGEPATIENT_H
#define SDDS_TRIAGEPATIENT_H

#include "Patient.h"

namespace sdds
{
  class TriagePatient : public Patient
  {
    char *TP_symptoms;

  public:
    TriagePatient();
    ~TriagePatient();

    // ======== pure virtual function overwrites ========
    char type() const;
    std::ostream &csvWrite(std::ostream &ostr) const;
    std::istream &csvRead(std::istream &istr);
    std::ostream &write(std::ostream &ostr) const;
    std::istream &read(std::istream &istr);
  };
}
#endif // !SDDS_TRIAGEPATIENT_H
