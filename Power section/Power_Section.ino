//This is the example code.
//You can modify it based on your experimental design.



//#include "arduino_secrets.h"

// Hardware Pin and Constant Definitions
#define IN 9       // Hardware PWM output pin connected to the 20x20cm fan array control line
#define MAX 255    // Maximum 8-bit PWM duty cycle value (100% duty ratio)

// ============================================================================
// ⚙️ USER CONFIGURATION: Set your test parameters here
// ============================================================================
float outputValue = 102;          // Set fan PWM output (Range: 0 - 255)
unsigned long RUN_TIME_SECONDS = 30; // Set run duration in SECONDS
// ============================================================================

int sensorPin = A0;   // Analog input pin (e.g., connected to airflow or pressure sensor)
int sensorValue = 0;  // Variable to store raw sensor readings

void setup() {  
  Serial.begin(9600);   // Initialize serial communication at 9600 bps baud rate
  pinMode(IN, OUTPUT);  // Configure Pin D9 as PWM output mode
  analogWrite(IN, 0);   // Default fan speed to 0 at power-on for system safety
}

void loop() {
  // Main control loop
  while (true) {
    sensorValue = analogRead(sensorPin);  // Read sensor voltage level from A0
    analogWrite(IN, outputValue);         // Send PWM signal to drive the fan array
    
    // Print current PWM value and calculated Duty Ratio (%) to Serial Monitor
    Serial.print("output = ");
    Serial.print(outputValue);
    Serial.print("\t Duty_Ratio = ");
    Serial.println(outputValue * 20 / 51); // Map 0-255 range to percentage: (outputValue * 100 / 255)
    
    // Maintain steady-state fan operation based on user input time (converted to ms)
    delay(RUN_TIME_SECONDS * 1000UL);  
    
    // Safety Deceleration Routine: Trigger gradual step-down if speed exceeds 80% duty ratio (> 204)
    if (outputValue > 204) {
      // Step 1: Reduce speed to PWM 160 (~63% duty ratio)
      outputValue = 160;
      analogWrite(IN, outputValue);
      delay(5000); // Hold for 5 seconds
      
      // Step 2: Reduce speed to PWM 120 (~47% duty ratio)
      outputValue = 120;
      analogWrite(IN, outputValue);
      delay(5000); // Hold for 5 seconds
      
      // Step 3: Reduce speed to PWM 80 (~31% duty ratio)
      outputValue = 80;
      analogWrite(IN, outputValue);
      delay(5000); // Hold for 5 seconds
      
      // Step 4: Reduce speed to PWM 40 (~16% duty ratio)
      outputValue = 40;
      analogWrite(IN, outputValue);
      
      // Extended idle/cooldown delay to prevent abrupt motor stoppage
      delay(60000); 
    } 
  }
}
