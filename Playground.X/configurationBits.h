// DSPIC33EV256GM102 Configuration Bit Settings
// FSEC
#pragma config BWRP = OFF        // Boot Segment Write-Protect Bit (Boot Segment may be written)
#pragma config BSS = DISABLED    // Boot Segment Code-Protect Level bits (No Protection (other than BWRP))
#pragma config BSS2 = OFF        // Boot Segment Control Bit (No Boot Segment)
#pragma config GWRP = OFF        // General Segment Write-Protect Bit (General Segment may be written)
#pragma config GSS = DISABLED    // General Segment Code-Protect Level bits (No Protection (other than GWRP))
#pragma config CWRP = OFF        // Configuration Segment Write-Protect Bit (Configuration Segment may be written)
#pragma config CSS = DISABLED    // Configuration Segment Code-Protect Level bits (No Protection (other than CWRP))
#pragma config AIVTDIS = DISABLE // Alternate Interrupt Vector Table Disable Bit  (Disable Alternate Vector Table)

// FBSLIM
#pragma config BSLIM = 0x1FFF // Boot Segment Code Flash Page Address Limit Bits (Boot Segment Flash Page Address Limit (0-0x1FFF))

// FOSCSEL
#pragma config FNOSC = FRCPLL // Initial oscillator Source Selection Bits (Internal Fast RC (FRC) Oscillator with postscaler)
#pragma config IESO = ON       // Two Speed Oscillator Start-Up Bit (Start up device with FRC,then automatically switch to user selected oscillator source)

// FOSC
#pragma config POSCMD = NONE  // Primary Oscillator Mode Select Bits (Primary Oscillator disabled)
#pragma config OSCIOFNC = ON  // OSC2 Pin I/O Function Enable Bit (OSC2 is general purpose digital I/O pin)
#pragma config IOL1WAY = ON   // Peripheral Pin Select Configuration Bit (Allow Only One reconfiguration)
#pragma config FCKSM = CSECMD // Clock Switching Mode Bits (Clock switch enabled and Fail-safe Clock Monitor disabled)
#pragma config PLLKEN = OFF    // PLL Lock Enable Bit (Clock switch to PLL source will wait until the PLL lock signal is valid)

// FWDT
#pragma config WDTPOST = PS512 // Watchdog Timer Postscaler Bits (1:32,768)
#pragma config WDTPRE = PR32    // Watchdog Timer Prescaler Bit (1:128)
#pragma config FWDTEN = OFF      // Watchdog Timer Enable Bits (WDT and SWDTEN Disabled)
#pragma config WINDIS = OFF      // Watchdog Timer Window Enable Bit (Watchdog timer in Non-Window Mode)
#pragma config WDTWIN = WIN25    // Watchdog Window Select Bits (WDT Window is 25% of WDT period)

// FPOR
#pragma config BOREN0 = ON // Brown Out Reset Detection Bit (BOR is Enabled)

// FICD
#pragma config ICS = PGD3 // ICD Communication Channel Select Bits (Communicate on PGEC3 and PGED3)

// FDMTINTVL
#pragma config DMTIVTL = 0xFFFF // Lower 16 Bits of 32 Bit DMT Window Interval (Lower 16 bits of 32 bit DMT window interval (0-0xFFFF))

// FDMTINTVH
#pragma config DMTIVTH = 0xFFFF // Upper 16 Bits of 32 Bit DMT Window Interval (Upper 16 bits of 32 bit DMT window interval (0-0xFFFF))

// FDMTCNTL
#pragma config DMTCNTL = 0xFFFF // Lower 16 Bits of 32 Bit DMT Instruction Count Time-Out Value (Lower 16 bits of 32 bit DMT instruction count time-out value (0-0xFFFF))

// FDMTCNTH
#pragma config DMTCNTH = 0xFFFF // Upper 16 Bits of 32 Bit DMT Instruction Count Time-Out Value (Upper 16 bits of 32 bit DMT instruction count time-out value (0-0xFFFF))

// FDMT
#pragma config DMTEN = DISABLE // Dead Man Timer Enable Bit (Dead Man Timer is Disabled and can be enabled by software)

// FDEVOPT
#pragma config PWMLOCK = OFF // PWM Lock Enable Bit (Certain PWM registers may only be written after key sequence)
#pragma config ALTI2C1 = OFF // Alternate I2C1 Pins Selection Bit (I2C1 mapped to SDA1/SCL1 pins)

// FALTREG
#pragma config CTXT1 = NONE // Interrupt Priority Level (IPL) Selection Bits For Alternate Working Register Set 1 (Not Assigned)
#pragma config CTXT2 = NONE // Interrupt Priority Level (IPL) Selection Bits For Alternate Working Register Set 2 (Not Assigned)
