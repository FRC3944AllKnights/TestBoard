/*
 * RobotDrive.cpp
 *
 *  Created on: Nov 18, 2018
 *      Author: Spencer
 */

#include <RobotDrive.h>
#include <ctre/Phoenix.h>
#include <SpeedControllerGroup.h>
#include <Drive/DifferentialDrive.h>

class RobotDrive : public frc:: DifferentialDrive   {
public:
	TalonSRX talon = new TalonSRX(4);

	FrontLeftMotor = new WPI_TalonSRX(1);
	FrontRightMotor = new WPI_TalonSRX(2);
	RearLeftMotor = new WPI_TalonSRX(3);
	RearRightMotor = new WPI_TalonSRX(4);
	drive = new RobotDrive(FrontLeftMotor, RearLeftMotor, FrontRightMotor,
	RearRightMotor);FrontLeftMotor = new WPI_TalonSRX(1);



