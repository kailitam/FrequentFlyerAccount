//
//  PlaneFlight.hpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/3/23.
//

#ifndef PlaneFlight_h
#define PlaneFlight_h

#include <stdio.h>
#include <string>


using namespace std;

class PlaneFlight
{
public:
    PlaneFlight(string PassengerName, string FromCity, string ToCity, double cost, double mileage);
    
    double getCost();
    void setCost(double cost);
    
    double getMileage();
    void setMileage(double mileage);
    
    string getName();
    void setName(string name);
    
    string getFromCity();
    void setFromCity(string FromCity);
    
    string getToCity();
    void setToCity(string FromCity);
    
private:
    double mCost;
    string mFromCity;
    string mToCity;
    string mName;
    double mMileage;
};

