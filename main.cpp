#include <iostream>
#include "date.h"

int main() {

    datum::date data{};



    std::cout<<data.get_date()<<"\n";
    data.increment_date(1200);
    std::cout<<data.get_date();


    return 0;
}