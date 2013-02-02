/******************************************************************************
* orientation SERVER
* the orientation service takes raw IMU data and converts it to a useable
*   odometry message
*
* addtl notes: if you're going to be modifying this code, be sure to familarize 
*   yourself with the constants defined in berkconfig.h
*
******************************************************************************/

#include "ros/ros.h"
//Message Types
#include <IMU/spatialRaw.h>
#include <IMU/orientation.h>
//Our headers
#include "orientation_headers/imuFilter.h"
#include "berkconfig.h" //for error rates, other constants ->should include config.h

/*
bool callback(std_servs::Empty::Request&, std_srvs::Empty::Response& response)	{
	return true;
}*/

bool berk(IMU::imu_filter::Request &request, IMU::imu_filter::Response &response)
{
    //this is where the berk code goes
	//Raw IMU data is request.rawIMU.*
	// output is response.* <--these may stil need to be set in the srv file
	return true
}

int main(int argc, char* argv[])
{
//	IMUfilter imuFilter(milliToSeconds(DATA_RATE), gyroscopeErrorRate);
	
	ros::init(argc, argv, "Calculate_Orientation");
	ros::NodeHandle berk;

	ros::ServiceServer service = nh.advertiseService("Orientation", berk);
	ros::spin();
	return 0;
}_
