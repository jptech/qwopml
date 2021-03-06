#ifndef BIPED_DEF_H
#define BIPED_DEF_H

#include "Box2D.h"

class BipedDef
{
public:
	BipedDef();
	~BipedDef(void);

	void EnableMotor();
	void SetUserData();
	void SetMotorTorque(float);
	void SetMotorSpeed(float);
	void SetDensity(float);
	void SetFriction(float);
	void SetRestitution(float);
	void SetLinearDamping(float);
	void SetAngularDamping(float);
	void EnableLimit();
	void DisableLimit();
	void SetLimit(bool);
	void DisableMotor();
	void SetMotor(bool);
	void SetGroupIndex(int16);
	void SetPosition(float, float);
	void SetPosition(b2Vec2);
	void IsFast(bool);

	static int16 count;

	b2BodyDef			LFootDef, RFootDef, LCalfDef, RCalfDef, LThighDef, RThighDef,
						PelvisDef, ChestDef, NeckDef, HeadDef,
						LUpperArmDef, RUpperArmDef, LForearmDef, RForearmDef, LHandDef, RHandDef;

	b2PolygonDef		LFootPoly, RFootPoly, LCalfPoly, RCalfPoly, LThighPoly, RThighPoly,
						PelvisPoly, ChestPoly, NeckPoly,
						LUpperArmPoly, RUpperArmPoly, LForearmPoly, RForearmPoly, LHandPoly, RHandPoly;

	b2CircleDef			HeadCirc;

	b2RevoluteJointDef	LAnkleDef, RAnkleDef, LKneeDef, RKneeDef, LHipDef, RHipDef,
						AbsDef, LowerNeckDef, UpperNeckDef,
						LShoulderDef, RShoulderDef, LElbowDef, RElbowDef, LWristDef, RWristDef;

	void DefaultVertices();
	void DefaultPositions();
	void DefaultJoints();
};

#endif
