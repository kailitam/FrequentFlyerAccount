//
//  FrequentFlyerAccount.hpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/3/23.
//

#ifndef FrequentFlyerAccount_h
#define FrequentFlyerAccount_h

#include <stdio.h>
#include <string>
#include "PlaneFlight.h"

using namespace std;

class FrequentFlyerAccount
{
public:
    FrequentFlyerAccount(string name);
    
    double getBalance();
    double getName();
    
    bool addFlightToAccount(PlaneFlight flight);
    bool canEarnFreeFlight(double mileage);
    bool freeFlight(string FromCity, string ToCity, double mileage, PlaneFlight& flight);
    
private:
    string mName;
    double mBalance;
};

#endif /* FrequentFlyerAccount_h */
