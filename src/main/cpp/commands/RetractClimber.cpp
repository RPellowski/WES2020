/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/RetractClimber.h"
#include "subsystems/ClimbMech.h"

RetractClimber::RetractClimber(ClimbMech* subsystem) : climb_motor{subsystem} {
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements({subsystem});
}

// Called repeatedly when this Command is scheduled to run
void RetractClimber::Initialize() {}

void RetractClimber::Execute() {climb_motor->RetractClimber();}

bool RetractClimber::IsFinished() {return false;}

void RetractClimber::End(bool interrupted) {climb_motor->StopClimber();}