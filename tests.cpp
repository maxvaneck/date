//
// Created by sages on 10/10/2018.
//
#include "gtest/gtest.h"
#include "date.h"

TEST(dateTests,year){
    datum::date data{};

    ASSERT_EQ("1-1-0",data.get_date());
}

TEST(dateTests,month){
    datum::date data{};
    data.increment_date(31);
    ASSERT_EQ("1-2-1",data.get_date());
}

TEST(dateTests,days){
    datum::date data{};
    data.increment_date(1);
    ASSERT_EQ("2-1-1",data.get_date());
}


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
