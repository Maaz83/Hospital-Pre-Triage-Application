/*
------------------------------------------------------

// Name: Maaz Saiyed
// SID: 113485205
// Email: mmmsaiyed@myseneca.ca
// Project: Milestone 5

------------------------------------------------------
*/


#include "IOAble.h"

using namespace std;

namespace sdds
{
  std::ostream &operator<<(std::ostream &ostr, const IOAble &src)
  {
    return src.write(ostr);
  }

  std::istream &operator>>(std::istream &istr, IOAble &src)
  {
    return src.read(istr);
  }
}
