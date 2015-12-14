#include "ToteLift.h"
#include "../RobotMap.h"

ToteLift::ToteLift() : Subsystem("ToteLift")
{                     //      vv_vv Location slots
	EncoderRight 	=	new Encoder(0, 1, false, Encoder::EncodingType::k4X);
	                                            ^^
	
}
void ToteLift::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//No default command for ToteLift
}
void ToteLift::Lift()
{
	ToteLiftLeft	->	Set(DoubleSolenoid::Value::kForward);
	ToteLiftRight	->	Set(DoubleSolenoid::Value::kForward);

}
void ToteLift::Lower()
{
	ToteLiftLeft	->	Set(DoubleSolenoid::Value::kReverse);
	ToteLiftRight	->	Set(DoubleSolenoid::Value::kReverse);
}
