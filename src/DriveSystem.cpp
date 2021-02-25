class L298N_Motor {
    public: 
	int EnA;
	int In1;
	int In2; 

	void forward(int speed);
	void backward(int speed);
	void stop();

	L298N_Motor(int EnA, int In1, int In2);
};

L298N_Motor::L298N_Motor(int EnA, int In1, int In2) {
    // Setting pin port
    this->EnA = EnA;
    this->In1 = In1;
    this->In2 = In2;
    
    pinmode(EnA, OUTPUT);
    pinmode(In1, OUTPUT);
    pinmode(In2, OUTPUT);
}

// Only use values from 150 -> 255 for these functions
// I'm not sure what happens if you don't 
void L298N_Motor::forward(int speed) {
    digitalWrite(In1, HIGH); 
    digitalWrite(In2, LOW);
    analogWrite(EnA, speed);
}

void L298N_Motor::backward(int speed) {
    digitalWrite(In1, LOW); 
    digitalWrite(In2, HIGH);
    analogWrite(EnA, speed);
}

void L298N_Motor::stop() {
    digitalWrite(In1, LOW); 
    digitalWrite(In2, LOW);
    analogWrite(EnA, 0);
}


class DriveSystem {
    public: 
	L298N_Motor R; 
	L298N_Motor L;
	DriveSystem(L298N_Motor R, L298N_Motor L);
	void drive(int x, int y, int scale);
};

DriveSystem::DriveSystem(L298N_Motor R, L298N_Motor L) {
    this->R = R;
    this->L = L;
}

// Takes values from joysticks and interpolates them to speed values and forward values
void DriveSystem::drive(int x, int y, int scale) { 
    // to be implemented. 
}
