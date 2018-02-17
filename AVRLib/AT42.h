// This file captures the I2C communication interface between the AT42 Capacitive Touch
// Sensor and the ATMega

// ----- Chip Address
#define AT42_CHIP_ADDRESS			0x1B

// ----- Internal Register Addresses (Chapter 5 in Chip Manual)

// Current Status of all keys, indicating whether they are pressed or not (Read only)
#define DETECT_STATUS				0x02
#define KEY_STATUS					0x03

// Negative threshold (sensitivity) for keys (default = count 20, 0 == always detected) (R/W)
#define NEG_THRESH_0				0x20
#define NEG_THRESH_1				0x21
#define NEG_THRESH_2				0x22

// Averaging Factor/Adjacent Key Suppression, higher number = higher sample count = better SNR, but longer
// detection times (default = 0x01)
#define AKS_0						0x27
#define AKS_1						0x28
#define AKS_2						0x29

// Detection Integrator, number of consecutive measurements that must pass before flagging a key as
// "detected" (default = 4)
#define DI_0						0x2E
#define DI_1						0x2F
#define DI_2						0x30

// ----- Settings to initialize
#define NEG_THRESH_VAL				20
#define AKS_VAL						1
#define DI_VAL						4




