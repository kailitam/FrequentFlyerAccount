//
//  FrequentFlyerAccount.cpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/3/23.
//

#include "FrequentFlyerAccount.h"

FrequentFlyerAccount::FrequentFlyerAccount(string name)
{

}

bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
    if (flight.getName() == mName)
    {
        return true;
    }
    else
    {
        return false;
    }
}


