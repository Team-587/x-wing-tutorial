/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <frc/Relay.h>

#include "Constants.h"

#include "commands/FlyCommand.h"

FlyCommand::FlyCommand(frc::Joystick *stick, FlySubsystem *flySubsystem, std::string name) :
    m_stick(stick),
    m_flySubsystem(flySubsystem),
    m_name(name) {
        AddRequirements({ m_flySubsystem });
}

void FlyCommand::Initialize() {
    wpi::outs() << "Initialize " << m_name << "\n";
    m_flySubsystem->Hyperspace(false);
}

void FlyCommand::Execute() {
    wpi::outs() << "Execute " << m_name << "\n";
    
}

bool FlyCommand::IsFinished() {
    return false;
}
