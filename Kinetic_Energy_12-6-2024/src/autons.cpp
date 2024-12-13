#include "vex.h"

void right_red() {
    Drivetrain.setDriveVelocity(47, pct);
    Clamp.set(true);
    Drivetrain.driveFor(-22,inches);
    Clamp.set(false);
    Intakes.spin(reverse);
    Drivetrain.turnFor(-40,deg);
    Drivetrain.driveFor(10,inches); 
    Drivetrain.turnFor(-90,deg);
    Drivetrain.driveFor(12,inches);
}

void left_red() {
    Drivetrain.setDriveVelocity(47, pct);
    Clamp.set(true);
    Drivetrain.driveFor(-22,inches);
    Clamp.set(false);
    Intakes.spin(reverse);
    Drivetrain.turnFor(40,deg);
    Drivetrain.driveFor(10,inches); 
    Drivetrain.turnFor(90,deg);
    Drivetrain.driveFor(12,inches);
}

void right_blue() {
    Drivetrain.setDriveVelocity(20, pct);
    Clamp.set(true);
    Drivetrain.driveFor(-22,inches);
    Clamp.set(false);
    Intakes.spin(forward);
    Drivetrain.turnFor(-54,deg);
    Drivetrain.driveFor(10,inches); 
    Drivetrain.turnFor(-50,deg);
    Drivetrain.driveFor(8,inches);
    Drivetrain.driveFor(-4,inches);
    Drivetrain.turnFor(10,deg);
    Drivetrain.driveFor(5.5,inches);
    Drivetrain.driveFor(-16,inches);
    Drivetrain.turnFor(65,deg);
    elevated_intake.set(true);
    Drivetrain.driveFor(50,inches);
    Drivetrain.driveFor(-12,inches);
    elevated_intake.set(false);
    Drivetrain.driveFor(12,inches);
    Drivetrain.driveFor(-5,inches);
}

void left_blue() {
    Drivetrain.setDriveVelocity(20, pct);
    Clamp.set(true);
    Drivetrain.driveFor(-25,inches);
    Clamp.set(false);
    Intakes.spin(forward);
    Drivetrain.turnFor(54,deg);
    Drivetrain.driveFor(8,inches);
    Drivetrain.turnFor(-32,deg);
    elevated_intake.set(true);
    Drivetrain.driveFor(50,inches);
    Drivetrain.driveFor(-12,inches);
    elevated_intake.set(false);
    Drivetrain.driveFor(12,inches);
    Drivetrain.driveFor(-5,inches);
}

void skills_auton() {
    Drivetrain.setDriveVelocity(47, pct);
    Intakes.spinFor(-1500,deg,false);
    wait (1,sec);
    Drivetrain.driveFor(13,inches);
    Drivetrain.turnFor(45,deg);
    Clamp.set(true);
    Drivetrain.driveFor(-13,inches);
    Clamp.set(false);
    Drivetrain.turnFor(-95,deg);
    Intakes.spin(reverse);
    Drivetrain.driveFor(18,inches);
    Drivetrain.turnFor(85,deg);
    Drivetrain.driveFor(-7,inches);
    Clamp.set(true);
    Drivetrain.driveFor(5,inches);
}

void right_blue_elims() {
    
}

void right_red_elims() {
    
}

void left_red_elims() {
    
}

void left_blue_elims() {
    
}