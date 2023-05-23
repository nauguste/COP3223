// Making Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// November 17, 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WEEKS 10
#define MAXCHARGE 3

// Function prototypes - do not change these
int menu();
int weather();
int startWeek(int current_week);
void status(int current_week, int robot_charge);

int update_charge(int robot_charge, int weather_status, int weekly_task,
                  int success);

int is_complete(int habitat_flag, int hydrofarm_flag, int chargestation_flag,
                int elecfarm_flag, int water_flag);

void final_report(int habitat_flag, int hydrofarm_flag, int chargestation_flag,
                  int elecfarm_flag, int water_flag);

int build_habitat(int habitat_flag, int weather_status, int robot_charge,
                  int hydrofarm_flag, int elecfarm_flag);

int build_hydrofarm(int hydrofarm_flag, int weather_status, int robot_charge,
                    int water_flag, int elecfarm_flag);

int build_chargestation(int chargestation_flag, int weather_status,
                        int robot_charge, int elecfarm_flag);

int build_elecfarm(int elecfarm_flag, int weather_status, int robot_charge);
int build_waterpipes(int water_flag, int weather_status, int robot_charge);
int recharge(int elecfarm_flag, int chargestation_flag);

// Main function - This is the final version of main.  Any changes you make
// While creating the functions should be removed prior to submission.
int main(void) {
    // Variables to store the current week, weather, task, success flag
	int current_week, weather_status, weekly_task, success;
	// Flags to denote whether or not critical buildings have been built yet
	// Robots begin with maximum charge
	int habitat_flag = 0, hydrofarm_flag = 0, chargestation_flag = 0;
	int elecfarm_flag = 0, water_flag = 0, robot_charge = MAXCHARGE;

	srand(time(0));

    // Week Loop
    // At the beginning of each week, prompt the user with the weather
    // And request task to be performed
	for(current_week = 1; current_week <= WEEKS; current_week++) {
		weather_status = startWeek(current_week);
		weekly_task = menu();

        // Call the function that matches the task and check to see if the
        // Robots are successful. When successful, update the building flag
		switch (weekly_task) {
			case 1:
				success = build_habitat(habitat_flag, weather_status,
                            robot_charge, hydrofarm_flag, elecfarm_flag);
				if (habitat_flag == 0 && success == 1)
					habitat_flag = 1;
				break;
			case 2:
				success = build_hydrofarm(hydrofarm_flag, weather_status,
                              robot_charge, water_flag, elecfarm_flag);
				if (hydrofarm_flag == 0 && success == 1)
					hydrofarm_flag = 1;
				break;
			case 3:
				success = build_chargestation(chargestation_flag,
                                  weather_status, robot_charge, elecfarm_flag);
				if (chargestation_flag == 0 && success == 1)
					chargestation_flag = 1;
				break;
			case 4:
				success = build_elecfarm(elecfarm_flag, weather_status,
                             robot_charge);
				if (elecfarm_flag == 0 && success == 1)
					elecfarm_flag = 1;
				break;
			case 5:
				success = build_waterpipes(water_flag, weather_status,
                               robot_charge);
				if (water_flag == 0 && success == 1)
					water_flag = 1;
				break;
			case 6:
				success = recharge(elecfarm_flag, chargestation_flag);
				break;
			default:
				printf("You have chosen to do nothing this week.\n");
				break;
		}

        // Check to see if the colony is complete
		if(is_complete(habitat_flag, hydrofarm_flag, chargestation_flag,
                 elecfarm_flag, water_flag))
			break;

        // At the end of the week, update the robot's charge and
        // Print the end of week status report
		robot_charge = update_charge(robot_charge, weather_status,
                               weekly_task, success);
		status(current_week, robot_charge);
	}

    // When all the week are complete - or if is_complete causes
    // the loop to terminate early, print the final report
	final_report(habitat_flag, hydrofarm_flag, chargestation_flag,
              elecfarm_flag, water_flag);

	return 0;
}

// Pre-condition:  None
// Post-condition: The weather report for the day is printed and the
//                 corresponding weather status in between 1 and 10,
//                 inclusive, is returned.
int weather() {
	// Generate weather status value.
 	int retval = rand() % 10 + 1;

 	printf ("Meteorologist Bot: ");



 	// Print out the appropriate forecast for that status.
 	switch (retval) {
 		case 1:
  		case 2:
  		case 3:
  		case 4:
  			printf("'Weather is Optimal.'\n");
  			break;
	  	case 5:
	  	case 6:
	  		printf("'Warning! Cosmic Debris Entering the Atmosphere!'\n");
	  		break;
	  	case 7:
	  	case 8:
	  		printf("'Warning! Wind Levels are Maximal.'\n");
	  		break;
	  	case 9:
	  	case 10:
	  		printf("'Danger! Solar Flare Emission Imminent...'\n");
	  		break;
	  }
	  // Return this status value.
	  return retval;
}

// Pre-condition:  current_week is an integer representing the current week
// Post-condition: returns the weather status value for the current week

// What to do in this function: Tell the user what week they are in,
//                             obtain the weather value by calling the weather
//                             function and return the weather value

// Note: Please see the output specification text document for exact
//      output formats
int startWeek(int current_week)
{
    printf ("\nWeek: #%d of 10...\n\n", current_week);
    return weather();
}

// Pre-condition:  current_week is an integer representing the current week
//                 robot_charge is an integer representing the current charge
//                 of the building robots
// Post-condition: print the status report for the end of the week

// What to do in this function: Tell the user how many weeks remain and how
//                             much charge the robots currently have

// Note: Please see the output specification text document for exact
//      output formats
void status(int current_week, int robot_charge)
{
    current_week = WEEKS - current_week ;
    printf ("\nMission Time Left: %d Earth Weeks.\n", current_week);
    printf ("Digi-Structor Bots have %d Blueprints Remaining.\n", robot_charge);
    printf ("\n----------------------------------------------------------------------------------------------\n");
    return;
}

// Pre-condition:  robot_charge is an integer representing the current charge
//                 of the building robots, weather status is an integer
//                 representing the weather for this week
//                 weekly_task is an integer representing the task the robots
//                 undertook for the week.
//                 success is flag that indicates whether or not the robots
//                 were successful in their weekly task
// Post-condition: return the updated charge for the robots

// What to do in this function: By default, the robot's charge should go down
//                             by 1 if they were successful this week.  If they
//                             were not successful or if there was no task to
//                             be completed, their charge should not change.
//                             If they were successful and there is a solar
//                             flare happening, the charge should go to 0.
//                             If the robots are charging, the charge should be
//                             reset to the maximum charge.
//                             At no point should the charge be reduced below 0
int update_charge(int robot_charge, int weather_status, int weekly_task, int success)
{
    if (weather_status == 9 && success == 1 && weekly_task != 6 && weekly_task != 7)
        robot_charge = 0;
    if (weather_status == 10 && success == 1 && weekly_task != 6 && weekly_task != 7)
        robot_charge = 0;
    else if (weekly_task == 6 && success == 1)
        robot_charge = 3;
    else if (weekly_task == 5 && success == 1 && robot_charge > 0)
        robot_charge--;
    else if (weekly_task == 4 && success == 1 && robot_charge > 0)
        robot_charge--;
    else if (weekly_task == 3 && success == 1 && robot_charge > 0)
        robot_charge--;
    else if (weekly_task == 2 && success == 1 && robot_charge > 0)
        robot_charge--;
    else if (weekly_task == 1 && success == 1 && robot_charge > 0)
        robot_charge--;
    else if (weekly_task == 7);

    return robot_charge;
}

// Pre-condition:  none
// Post-condition: return the user's choice of task for the week

// What to do in this function: Prompt the user with the menu and
//                             read in their response. Ensure that their
//                             response is a valid menu option and reprompt
//                             them if their response is not valid. Return
//                             their response once it is verified.

// Note: Please see the output specification text document for exact
//      output formats
int menu()
{
    int response;
    printf ("Select a task for the Digi-Structors to Complete:\n\n");

    printf ("\t1 - Human Civilization Center\n");
    printf ("\t2 - Hydroponic Farm\n");
    printf ("\t3 - Maintenance Station\n");
    printf ("\t4 - Photo-voltaic and Kinetic Power Infrastructure\n");
    printf ("\t5 - DiHydrogen Monoxide Duct\n");
    printf ("\t6 - Restore Memory\n");
    printf ("\t7 - Power Save Mode (Idle)\n\n");



    scanf ("%d", &response);

    while (response < 1 || response > 7 )
    {
    printf ("ERROR: Invalid input response. Please Try Again.\n");
    printf ("Select a task for the Digi-Structors to Complete:\n\n");

    printf ("\t1 - Human Civilization Center\n");
    printf ("\t2 - Hydroponic Farm\n");
    printf ("\t3 - Maintenance Station\n");
    printf ("\t4 - Photo-voltaic and Kinetic Power Infrastructure\n");
    printf ("\t5 - DiHydrogen Monoxide Duct\n");
    printf ("\t6 - Restore Memory\n");
    printf ("\t7 - Power Save Mode\n\n");

    scanf ("%d", &response);
    }

    return response;
}

// Pre-condition:  habitat_flag is an integer that represents whether or not
//                 the colony habitat has been built
//                 hydrofarm_flag is an integer that represents whether or not
//                 the colony hydroponics farm has been built
//                 chargestation_flag is an integer that represents whether or
//                 not the colony charging station has been built
//                 elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
//                 water_flag is an integer that represents whether or not
//                 the colony water pipes have been built
// Post-condition: return 1 for true if all the buildings have been built, and
//                 0 for false if any building has not been build yet.
int is_complete(int habitat_flag, int hydrofarm_flag, int chargestation_flag,
                int elecfarm_flag, int water_flag)
{
    if (habitat_flag == 1 && hydrofarm_flag == 1 && chargestation_flag == 1 && elecfarm_flag == 1 && water_flag == 1)
        return 1;
    else
        return 0;

}

// Pre-condition:  habitat_flag is an integer that represents whether or not
//                 the colony habitat has been built
//                 hydrofarm_flag is an integer that represents whether or not
//                 the colony hydroponics farm has been built
//                 chargestation_flag is an integer that represents whether or
//                 not the colony charging station has been built
//                 elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
//                 water_flag is an integer that represents whether or not
//                 the colony water pipes have been built
// Post-condition: print a final report for the colony, based on whether the
//                 colony is complete or not

// Note: Please see the output specification text document for exact
//      output formats
void final_report(int habitat_flag, int hydrofarm_flag, int chargestation_flag,
	int elecfarm_flag, int water_flag)
{
        if (habitat_flag == 1 && hydrofarm_flag == 1 && chargestation_flag == 1 && elecfarm_flag == 1 && water_flag == 1)
            printf( "Colony is fully prepared for human settlement. Good Job team!\n");
        else
            printf ("Colony is not suitable for human life. Better luck next time...\n");
        return;
}

// Pre-condition:  habitat_flag is an integer that represents whether or not
//                 the colony habitat has been built
//                 weather status is an integer representing the weather
//                 robot_charge is an integer representing the current charge
//                 of the building robots,
//                 hydrofarm_flag is an integer that represents whether or not
//                 the colony hydroponics farm has been built
//                 elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
// Post-condition: return 1 if the robots are able to successfully build a
//                 habitat and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                             if the habitat already exists, if the robots
//                             have enough charge to build, and if the weather
//                             is favorable for building a habitat.
//                             Habitats cannot be built during a meteor shower
//                             or a wind storm.
//                             Check to see if the habitat has the needed
//                             support structures: hydroponics farm and
//                             wind and solar farm and print warnings if either
//                             is not present.
//                             When the habitat is successfully built, inform
//                             the user.

// Note: Please see the output specification text document for exact
//      output formats
int build_habitat(int habitat_flag, int weather_status, int robot_charge,
                  int hydrofarm_flag, int elecfarm_flag)
{
    if (habitat_flag == 1)
        printf("Multiple Civilizations are not apart of the Schematics.\n");

    else if (robot_charge == 0)
        printf("The Digi-Structor bots have corrupted this blueprint.\n");

    else if (habitat_flag == 0 && weather_status == 5 || weather_status == 6)
        printf("Oncoming meteor shower has compromised this task.\n");

    else if (habitat_flag == 0 && weather_status == 7 || weather_status == 8)
        printf("You can not build a Civilization in 60 MPH Winds.\n");

    else if (weather_status != 5 && weather_status != 6 && weather_status != 7 && weather_status != 8 && robot_charge > 0 && habitat_flag == 0)
    {
        habitat_flag = 1;
        printf ("Human habitation zone successfully built.\n");

    if (habitat_flag == 1 && hydrofarm_flag == 0 && elecfarm_flag == 0)
        printf ("ADVISORY: Solar Energy and Hydroponic Farm are Required.\n")
        ;
    if (habitat_flag == 1 && hydrofarm_flag == 1 && elecfarm_flag == 0)
        printf ("ADVISORY: Solar Energy required...\n");

    if (habitat_flag == 1 && hydrofarm_flag == 0 && elecfarm_flag == 1)
        printf ("ADVISORY: Without a Farm, Humans will lack Sustenance.\n");

        return 1;
    }
    else
        return 0;
}

// Pre-condition:  hydrofarm_flag is an integer that represents whether or not
//                 the colony hydroponics farm has been built
//                 weather status is an integer representing the weather
//                 robot_charge is an integer representing the current charge
//                 of the building robots,
//                 water_flag is an integer that represents whether or not
//                 the colony water pipes have been built
//                 elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
// Post-condition: return 1 if the robots are able to successfully build a
//                 hydroponics farm and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                              if the hydroponic farm already exists, if the
//                              robots have enough charge to build, and if the
//                              weather is favorable for building a hydroponic
//                              farm. Hydroponic farms cannot be built during a
//                              meteor shower or a wind storm.
//                              Check to see if the hydroponic farm has the
//                              needed support structures: water pipes and a
//                              wind and solar farm and print warnings if
//                              either is not present.
//                              When the hydroponic farm is successfully built,
//                              inform the user.

// Note: Please see the output specification text document for exact
//      output formats
int build_hydrofarm(int hydrofarm_flag, int weather_status, int robot_charge,
                    int water_flag, int elecfarm_flag)
{
    if (hydrofarm_flag == 1)
        printf("This colony does not require two farms...\n");

    else if (robot_charge == 0)
        printf("The Digi-Structor bots failed to build a farm.\n");

    else if (weather_status == 5 || weather_status == 6)
        printf("A stray asteroid has destroyed our plants.\n");

    else if (weather_status == 7 || weather_status == 8)
        printf("Our vegetation did not root deep enough to withstand the wind storm\n");

    else if (weather_status != 5 && weather_status != 6 && weather_status != 7 && weather_status != 8 && robot_charge > 0 && hydrofarm_flag == 0)
    {
        hydrofarm_flag == 1;
        printf("Vegetation has successfully grown.\n");

    if (water_flag == 0 && elecfarm_flag == 0)
        printf("ADVISORY: Water pipes paired with an energy source is highly preferred.\n");

    if (water_flag == 0 && elecfarm_flag == 1)
        printf("ADVISORY: Seeds require a water source in order to grow.\n");

    if (water_flag == 1 && elecfarm_flag == 0)
        printf("ADVISORY: This structures power supply is missing.\n");

        return 1;
    }
    else
        return 0;

}

// Pre-condition:  chargestation_flag is an integer that represents whether or
//                 not the colony charging station has been built
//                 weather status is an integer representing the weather
//                 robot_charge is an integer representing the current charge
//                 of the building robots,
//                 elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
// Post-condition: return 1 if the robots are able to successfully build a
//                 charging station and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                              if the charging station already exists, if the
//                              robots have enough charge to build, and if the
//                              weather is favorable for building a charging
//                              station. Charging stations cannot be built
//                              during a meteor shower.
//                              Check to see if the charging station has the
//                              needed support structure: a wind and solar farm
//                              and print a warning if it is not present.
//                              When the charing station is successfully built,
//                              inform the user.

// Note: Please see the output specification text document for exact
//      output formats
int build_chargestation(int chargestation_flag, int weather_status,
                        int robot_charge, int elecfarm_flag)
{
    if (chargestation_flag == 1)
        printf("A single Maintenance hub will suffice.\n");

    else if (robot_charge == 0)
        printf("Our Digi-Structors could really use one of these now...\n");

    else if (weather_status == 5 || weather_status == 6)
        printf("Our Preservation Structure has been Replaced by Cosmic Debris...\n");


    else if (weather_status != 5 && weather_status != 6 && robot_charge > 0 && chargestation_flag == 0)
    {
        chargestation_flag = 1;
        printf("Maintenance center successfully digi-structed.\n");

        if (elecfarm_flag == 0)
        printf("ADVISORY: Need a source of energy for this building to function.\n");

        return 1;
    }
    else
        return 0;
}

// Pre-condition:  elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
//                 weather status is an integer representing the weather
//                 robot_charge is an integer representing the current charge
//                 of the building robots,
// Post-condition: return 1 if the robots are able to successfully build a
//                 wind and solar farm and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                              if the wind and solar farm already exists, if
//                              the robots have enough charge to build, and if
//                              the weather is favorable for building a wind
//                              and solar farm. Wind and solar farms cannot
//                              be built during a meteor shower, wind storm,
//                              or solar flare.
//                              When the wind and solar farm is successfully
//                              built, inform the user.

// Note: Please see the output specification text document for exact
//      output formats
int build_elecfarm(int elecfarm_flag, int weather_status, int robot_charge)
{
    if (elecfarm_flag == 1)
        printf("We already produce an optimal amount of energy.\n");

    else if (robot_charge == 0)
        printf("All of the Digi-Structors ran into a Software Error...\n");

    else if (weather_status == 5 || weather_status == 6)
        printf("A meteor has crashed through our power relay.\n");

    else if (weather_status == 7 || weather_status == 8)
        printf("The wind storm has compromised our digi-structing.\n");

    else if (weather_status == 9 || weather_status == 10)
        printf("The finished equipment has been rendered faulty due to the flare.\n");

    else if (weather_status != 6 && weather_status != 7 && weather_status != 8 && weather_status != 9 && weather_status != 10 && robot_charge > 0 && elecfarm_flag == 0)
    {
        elecfarm_flag = 1;
        printf ("Photo-voltaic farm and wind turbines are fully functioning.\n");
        return 1;
    }
    else
        return 0;


}

// Pre-condition:  water_flag is an integer that represents whether or not
//                 the colony water pipes have been built
//                 weather status is an integer representing the weather
//                 robot_charge is an integer representing the current charge
//                 of the building robots,
// Post-condition: return 1 if the robots are able to successfully build
//                 water pipes and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                              if the water pipes already exists and if
//                              the robots have enough charge to build.
//                              When the water pipes are successfully
//                              built, inform the user.

// Note: Please see the output specification text document for exact
//      output formats
int build_waterpipes(int water_flag, int weather_status, int robot_charge)
{
    if (water_flag == 1)
        printf ("Water pipes have already been built.\n");

    else if (robot_charge == 0)
        printf ("Digi-structor bots have messed up the pipe layout...\n");

    else if (water_flag == 0 && robot_charge > 0)
    {
        water_flag = 1;
        printf ("Water supply has now been established.\n");
        return 1;
    }
    else
        return 0;

}

// Pre-condition:  elecfarm_flag is an integer that represents whether or not
//                 the colony wind and solar farm has been built
//                 chargestation_flag is an integer that represents whether or
//                 not the colony charging station has been built
// Post-condition: return 1 if the robots are able to successfully recharge
//                 and 0 if the robots are unsuccessful

// What to do in this function: Based on the input parameters check for:
//                              if the wind and solar farm exists and if
//                              the charging station exists. Both are
//                              needed to recharge the robots.  If either is
//                              missing, inform the user and return 0.

// Note: Please see the output specification text document for exact
//      output formats
int recharge(int elecfarm_flag, int chargestation_flag)
{
    if (elecfarm_flag == 1 && chargestation_flag == 1)
    {
        printf ("All automatons have been updated and recharged.\n");
        return 1;
    }
    else if (elecfarm_flag == 0 && chargestation_flag == 0)
        printf ("ADVISORY: We need to acquire a fully powered Maintenance Station first.\n");

    else if (elecfarm_flag == 0)
        printf ("ADVISORY: Need a power relay to power the station.\n");

    else if (chargestation_flag == 0)
        printf( "ADVISORY: There is no current hub to perform this action.\n");
        return 0;
}
