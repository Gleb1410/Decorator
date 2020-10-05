#include "beverage.h"

using namespace std;

Beverage::Beverage() {
    description = "Napitok";
}

char* Beverage::getDescription() {
      return description;
}
