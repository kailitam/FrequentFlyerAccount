//
//  FrequentFlyerAccount.cpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/3/23.
//

#include "FrequentFlyerAccount.h"

FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
    mBalance = 0;
    mName = name;
}

bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
    if (flight.getName() == mName)
    {
        mBalance += flight.getMileage();
        return true;
    }
    else
    {
        return false;
    }
}

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage)
{
    if (mBalance >= mileage)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool FrequentFlyerAccount::freeFlight(string FromCity, string ToCity, double mileage, PlaneFlight &flight)
{
    if (canEarnFreeFlight(mileage))
    {
        flight.setCost(0.0);
        flight.setFromCity(FromCity);
        flight.setToCity(ToCity);
        flight.setMileage(mileage);
        flight.setName(mName);
        mBalance -= mileage;
        return true;
    }
    
    return false;
}

double FrequentFlyerAccount::getBalance()
{
    return mBalance;
}

string FrequentFlyerAccount::getName()
{
    return mName;
}
