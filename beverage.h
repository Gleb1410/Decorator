#ifndef __BEVERAGE_H
#ifndef __BEVERAGE_H

class Beverage {
protected:
      char *description;
public:
       Beverage():
                 virtual char* getDescription();
                 virtual double cost() = 0;
       };
       

#endif;            
