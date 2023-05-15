/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/

#ifndef SDDS_PRETRIAGE_H_
#define SDDS_PRETRIAGE_H_

#include "Time.h"
#include "Patient.h"
#include "Menu.h"

namespace sdds
{
  // A constant value to set the maximum number of patients in the lineup (Covid and Triage)
  const int maxNoOfPatients = 100;

  class PreTriage
  {
    // Time objects to hold the average wait time for COVID test and Triage per patient
    Time m_averCovidWait, m_averTriageWait;

    // An array of Patient pointers to hold COVID and Triage Patient lineups dynamicall
    Patient *m_lineup[maxNoOfPatients]{};

    // A character pointer to hold the name of the data file dynamically
    char *m_dataFilename = nullptr;

    // Number of Patients in the lineup.
    int m_lineupSize = 0;

    // m_appMenu object to hold the main menu.
    // m_pMenu object to hold the COVID/Triage patient selection.
    Menu m_appMenu, m_pMenu;
    
    void reg();
    void admit();
    const Time getWaitTime(const Patient &p) const;
    void setAverageWaitTime(const Patient &p);
    void removePatientFromLineup(int index);
    int indexOfFirstInLine(char type) const;
    void load();

  public:
    PreTriage(const char *dataFilename);
    ~PreTriage();
    void run(void);
  };
}

#endif
