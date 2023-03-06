//
//  PlaneFlight.cpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/3/23.
//

#include "PlaneFlight.h"

PlaneFlight::PlaneFlight(string PassengerName, string FromCity, string ToCity, double cost, double mileage)
{
    setName(PassengerName);
    setFromCity(FromCity);
    setToCity(ToCity);
    setCost(cost);
    setMileage(mileage);
}

double PlaneFlight::getCost()
{
    return mCost;
}

void PlaneFlight::setCost(double cost)
{
    if (cost >= 0)
    {
        mCost = cost;
    }
    else
    {
        mCost = -1;
    }
}

double PlaneFlight::getMileage()
{
    return mMileage;
}

void PlaneFlight::setMileage(double mileage)
{
    if (mileage > 0)
    {
        mMileage = mileage;
    }
    else
    {
        mMileage = -1;
    }
}

string PlaneFlight::getName()
{
    return mName;
}

void PlaneFlight::setName(string name)
{
    if (name != "")
    {
        mName = name;
    }
}

string PlaneFlight::getFromCity()
{
    return mFromCity;
}

void PlaneFlight::setFromCity(string FromCity)
{
    if (FromCity != "" && FromCity != mToCity)
    {
        mFromCity = FromCity;
    }
            
}

string PlaneFlight::getToCity()
{
    return mToCity;
}

void PlaneFlight::setToCity(string ToCity)
{
    if (ToCity != "" && ToCity != mFromCity)
    {
        mToCity = ToCity;
    }
}
