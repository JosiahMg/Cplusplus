#ifndef _RMB_H_
#define _RMB_H_

#include <iostream>

using namespace std;

typedef unsigned int uint;

class RMB
{

public:
  RMB(uint y, uint jf);
  ~RMB();

  RMB operator+(const RMB&);
  bool operator>(const RMB&);


  void display() const
  {
    cout << "RMB" << yuan << ".";
    if(jf < 10)
    {
      cout << "0";
    }
    cout << jf << endl;
  }

private:
  uint yuan;
  uint jf;

};





#endif
