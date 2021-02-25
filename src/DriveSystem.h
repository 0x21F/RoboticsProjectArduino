#ifndef DRIVESYSTEM_H
#define DRIVESYSTEM_H
class L298N_Motor {
    public: 
	int EnA;
	int In1;
	int In2; 
	void forward(int speed);
	void backward(int speed);
	void stop();
	L298N_Motor(int EnA, int In1, int In2);
}

class DriveSystem {
    public: 
	L298N_Motor R; 
	L298N_Motor L;
	DriveSystem(L298N_Motor R, L298N_Motor L);
	void drive(int x, int y, int scale);
}


#ENDIF
