//
// Created by sages on 10/10/2018.
//

#ifndef DATE_DATE_H
#define DATE_DATE_H

#include <string>
#include <vector>

namespace datum {
    class date {
    private:
        int days;
        int months;
        int years;
        std::vector<int> monthnumbers{31,28,31,30,31,30,31,31,30,31,30,31};

    public:
        date();

        void increment_date(int increment);
        std::string get_date();
    };
}

#endif //DATE_DATE_H
