//
// Created by sages on 10/10/2018.
//

#include <iostream>
#include "date.h"

namespace datum{
    date::date():

    days{1},
    months{1},
    years{0}
    {}

    std::string date::get_date(){

        int year = days/365;

        int temp = days%year;
        int month{0};

        for (int i=0;i<monthnumbers.size();i++){
            if ((temp-monthnumbers[i])<=0)
            {
                int month = i +1;
                break;
            }
            else{
                month = 0;
            }
        }

        int day = days - (years*365) - (months*31);
        std::cout<<days<<"\n";
        return std::to_string(day) + "-" + std::to_string(month) + "-" + std::to_string(year);
    }

    void date::increment_date(int increment) {
        days = days + increment;
    }
}