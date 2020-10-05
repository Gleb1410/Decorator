#include "milk.h"

using namespace std;

Milk::Milk() {
    description = "";
}

char* CondimentDecorator::getDescription() {
      return description;
}
