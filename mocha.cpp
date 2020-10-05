#include "mocha.h"

using namespace std;

Mocha::Mocha() {
    description = "";
}

char* CondimentDecorator::getDescription() {
      return description;
}
