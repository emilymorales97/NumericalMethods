#include "fit.h"

using namespace std;

class DirectFit : public Fit {
 public:
 DirectFit(const vector<float> &x, const vector<float> &f) : Fit(x, f) {};
  function<float (float)> fit(const float point, const int deg);
};
