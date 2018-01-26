/*
  Aquaponics Control TestBed
 */
 

int onboard_led = 13;
int external_switch = 23;  //active low
int Relays[8] = {36,38,40,42,44,46,48,50};

int external_LED = Relays[0];
int Valve = Relays[1];
int Pump = Relays[2];

int STATE = HIGH;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(onboard_led, OUTPUT);
  pinMode(external_switch, INPUT);  //Active Low.
  
  for(int i = 0; i<8;i++){
   pinMode(Relays[i], OUTPUT);
  }
  

  
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  digitalWrite(onboard_led, HIGH);   
  digitalWrite(external_LED, HIGH);   
  digitalWrite(Pump, HIGH);
  digitalWrite(Valve, HIGH);
  delay(3000);               // wait for three seconds
  
  digitalWrite(onboard_led, LOW); 
  digitalWrite(external_LED, LOW);   
  digitalWrite(Pump, LOW);
  digitalWrite(Valve, LOW);
  delay(3000);               // wait for three seconds
}
