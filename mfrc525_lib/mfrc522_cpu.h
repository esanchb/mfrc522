#ifndef MF522_CPU_H_
#define MF522_CPU_H_

//-----------------------------------
//		 REGISTER DESCRIPTION
//-----------------------------------

//-----------------------------------
//  Page 0:Command and Status
//-----------------------------------
#define     Reserved00            0x00
#define     CommandReg            0x01
#define     CommIEnReg            0x02
#define     DivlEnReg             0x03
#define     CommIrqReg            0x04
#define     DivIrqReg             0x05
#define     ErrorReg              0x06
#define     Status1Reg            0x07
#define     Status2Reg            0x08
#define     FIFODataReg           0x09
#define     FIFOLevelReg          0x0A
#define     WaterLevelReg         0x0B
#define     ControlReg            0x0C
#define     BitFramingReg         0x0D
#define     CollReg               0x0E
#define     Reserved01            0x0F

//-----------------------------------
//Page 1: Communication
//-----------------------------------
#define     Reserved10            0x10
#define     ModeReg               0x11
#define     TxModeReg             0x12
#define     RxModeReg             0x13
#define     TxControlReg          0x14
#define     TxAutoReg             0x15
#define     TxSelReg              0x16
#define     RxSelReg              0x17
#define     RxThresholdReg        0x18
#define     DemodReg              0x19
#define     Reserved11            0x1A
#define     Reserved12            0x1B
#define     MifareReg             0x1C
#define     Reserved13            0x1D
#define     Reserved14            0x1E
#define     SerialSpeedReg        0x1F

//-----------------------------------
//Page 2: Configuration
//-----------------------------------
#define     Reserved20            0x20
#define     CRCResultRegM         0x21
#define     CRCResultRegL         0x22
#define     Reserved21            0x23
#define     ModWidthReg           0x24
#define     Reserved22            0x25
#define     RFCfgReg              0x26
#define     GsNReg                0x27
#define     CWGsPReg	          0x28
#define     ModGsPReg             0x29
#define     TModeReg              0x2A
#define     TPrescalerReg         0x2B
#define     TReloadRegH           0x2C
#define     TReloadRegL           0x2D
#define     TCounterValueRegH     0x2E
#define     TCounterValueRegL     0x2F

//-----------------------------------
//Page 3:TestRegister
//-----------------------------------
#define     Reserved30            0x30
#define     TestSel1Reg           0x31
#define     TestSel2Reg           0x32
#define     TestPinEnReg          0x33
#define     TestPinValueReg       0x34
#define     TestBusReg            0x35
#define     AutoTestReg           0x36
#define     VersionReg            0x37
#define     AnalogTestReg         0x38
#define     TestDAC1Reg           0x39
#define     TestDAC2Reg           0x3A
#define     TestADCReg            0x3B
#define     Reserved31            0x3C
#define     Reserved32            0x3D
#define     Reserved33            0x3E
#define     Reserved34			  0x3F

//    *  MFRC522 command descriptions *
// 10.3 MFRC522 command overview
#define PCD_IDLE              0x00  // NO action; canceling the current command
#define PCD_MEM				  0x01	// Stores 25 bytes into the internal buffer
#define PCD_GEN_RANDOM_ID	  0x02  // generates a 10-byte random ID number
#define PCD_CALCCRC           0x03  // CRC calculation
#define PCD_TRANSMIT          0x04  // Send data
#define PCD_NO_CMD_CHANGE	  0x07  // no command change, can be used to modify the CommandReg register bits without affecting the command, for example, the PowerDown bit
#define PCD_RECEIVE           0x08  // Receive data
#define PCD_TRANSCEIVE        0x0C  // Send and receive data
#define PCD_AUTHENT           0x0E  // Authentication Key
#define PCD_RESETPHASE        0x0F  // Reset


//9.3.2.5 TxControlReg register
#define InvTx2RFOn 		(1<<7)//1 output signal on pin TX2 inverted when driver TX2 is enabled
#define InvTx1RFOn 		(1<<6)//1 output signal on pin TX1 inverted when driver TX1 is enabled
#define InvTx2RFOff 	(1<<5)//1 output signal on pin TX2 inverted when driver TX2 is disabled
#define InvTx1RFOff 	(1<<4)//1 output signal on pin TX1 inverted when driver TX1 is disabled
#define Tx2CW 			(1<<3)//1 //output signal on pin TX2 continuously delivers the unmodulated 13.56 MHz energy carrier
							   //0 Tx2CW bit is enabled to modulate the 13.56 MHz energy carrier

#define Tx2RFEn 		(1<<1)//1 output signal on pin TX2 delivers the 13.56 MHz energy carrier modulated by the transmission data
#define Tx1RFEn 		(1<<0)//1 output signal on pin TX1 delivers the 13.56 MHz energy carrier modulated by the transmission data


#endif /* MF522_CPU_H_ */
