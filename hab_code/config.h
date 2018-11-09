#ifndef __CONFIG_H__
#define __CONFIG_H__

// Error LED
#define LED_PIN 7

// Buzzer rings below the defined altitude, BUZZ_CUTOFF (meters)
// Passive buzzer is used, and BUZZER_FREQ tone is sent on BUZZER_PIN
#define BUZZER_CUTOFF 1000.0
#define BUZZER_PIN 9
#define BUZZER_FREQ 1000

// BAUD RATE for serial
#define BAUD_RATE 9600

// Pressure at sea level according to weather forcast
// Used for altitude approximation
#define SEA_LEVEL_PRESSURE 1027.0

// Data pin for SD Card
#define CS_SD 10

#endif