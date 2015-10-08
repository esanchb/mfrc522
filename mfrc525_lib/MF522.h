/*
 * MF522.h
 *
 *  Created on: 03/06/2012
 *      Author: ericsanchez
 */

#ifndef MF522_H_
#define MF522_H_


#define	uchar	unsigned char
#define	uint	unsigned int
#define MAX_LEN 			16







//Mifare_One
#define PICC_REQIDL           0x26  // Find the antenna area it does not enter hibernation
#define PICC_REQALL           0x52  // Find the antenna area all cards
#define PICC_ANTICOLL         0x93  // Anti-collision
#define PICC_SElECTTAG        0x93  // Option Card
#define PICC_AUTHENT1A        0x60  // A key verification
#define PICC_AUTHENT1B        0x61  // Verify B key
#define PICC_READ             0x30  // Read block
#define PICC_WRITE            0xA0  // Write block
#define PICC_DECREMENT        0xC0  // Debit
#define PICC_INCREMENT        0xC1  // Recharge
#define PICC_RESTORE          0xC2  // Transfer block data into the buffer
#define PICC_TRANSFER         0xB0  // Save the data buffer
#define PICC_HALT             0x50  // Sleep

//Table 9. Command overview MIFARE Classic 4K
// http://www.nxp.com/documents/data_sheet/MF1S70YYX.pdf
#define Mifare_Classic_Request  					0x26
#define Mifare_Classic_Wake_up  					0x52
#define Mifare_Classic_Anticollision_CL1  			0x9320
#define Mifare_Classic_Select_CL1  					0x9370
#define Mifare_Classic_Anticollision_CL2  			0x9520
#define Mifare_Classic_Select_CL2  					0x9570
#define Mifare_Classic_Halt  						0x5000
#define Mifare_Classic_Authentication_with_Key_A  	0x60
#define Mifare_Classic_Authentication_with_Key_B  	0x61
#define Mifare_Classic_Personalize_UID_Usage  		0x40
#define Mifare_Classic_MIFARE_Read  				0x30
#define Mifare_Classic_MIFARE_Write  				0xA0
#define Mifare_Classic_MIFARE_Decrement  			0xC0
#define Mifare_Classic_MIFARE_Increment  			0xC1
#define Mifare_Classic_MIFARE_Restore  				0xC2
#define Mifare_Classic_MIFARE_Transfer  			0xB0

#define MI_OK                 0
#define MI_NOTAGERR           1
#define MI_ERR                2







//7 InvTx2RFOn 1 //output signal on pin TX2 inverted when driver TX2 is enabled
//6 InvTx1RFOn 1 //output signal on pin TX1 inverted when driver TX1 is enabled
//5 InvTx2RFOff 1 //output signal on pin TX2 inverted when driver TX2 is disabled
//4 InvTx1RFOff 1 //output signal on pin TX1 inverted when driver TX1 is disabled
//3 Tx2CW 1 //output signal on pin TX2 continuously delivers the unmodulated 13.56 MHz energy carrier
//0 Tx2CW bit is enabled to modulate the 13.56 MHz energy carrier
//2 reserved - reserved for future use
//1 Tx2RFEn 1 output signal on pin TX2 delivers the 13.56 MHz energy carrier modulated by the transmission data
//0 Tx1RFEn 1 output signal on pin TX1 delivers the 13.56 MHz energy carrier modulated by the transmission data



unsigned char MFRC522_ToCard(uchar command, uchar *sendData, uchar sendLen, uchar *backData, uint *backLen);
void Write_MFRC522(uchar addr, uchar val);
uchar Read_MFRC522(uchar addr);
void SetBitMask(uchar reg, uchar mask);
void ClearBitMask(uchar reg, uchar mask);
void AntennaOn(void);
void AntennaOff(void);
void MFRC522_Reset(void);
void MFRC522_Init(void);
uchar MFRC522_Request(uchar reqMode, uchar *TagType);
unsigned char MFRC522_ToCard(uchar command, uchar *sendData, uchar sendLen, uchar *backData, uint *backLen);
uchar MFRC522_Anticoll(uchar *serNum);
void CalulateCRC(uchar *pIndata, uchar len, uchar *pOutData);
uchar MFRC522_SelectTag(uchar *serNum);
uchar MFRC522_Auth(uchar authMode, uchar BlockAddr, uchar *Sectorkey, uchar *serNum);
uchar MFRC522_Read(uchar blockAddr, uchar *recvData);
uchar MFRC522_Write(uchar blockAddr, uchar *writeData);
void MFRC522_Halt(void);



#endif /* MF522_H_ */
