//
//  main.cpp
//  FrequentFlyerAccount
//
//  Created by Kaili Tam on 3/1/23.
//

#include <iostream>
#include <string>
#include <cassert>

#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"

using namespace std;


int main()
{
    PlaneFlight shortleg( "Howard", "LAX", "LAS", 49.00, 285 );
    PlaneFlight longleg( "Howard", "LAS", "NYC", 399.00, 2800 );
    PlaneFlight sample( "Sample", "Sample", "Sample", 0, 1 );
    PlaneFlight sample2( "Sample", "Sample", "Sample", -100, 0 );

    assert( shortleg.getFromCity( ) == "LAX" );
    assert( shortleg.getToCity( ) == "LAS" );
    assert( shortleg.getName( ) == "Howard" );
    assert( sample.getToCity() == "" );
    assert( sample.getCost() == 0 );
    assert( sample.getMileage() == 1 );
    assert( sample2.getCost() == -1 );
    assert( sample2.getMileage() == -1 );
    assert( std::to_string( shortleg.getCost( ) ) == "49.000000" ); //not sure why we are doing this assert
    assert( std::to_string( shortleg.getMileage( ) ) == "285.000000" );
    
    cout << "all tests passed!" << endl;
    return( 0 );
}
