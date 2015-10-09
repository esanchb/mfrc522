/****************************************************************** 
* mfrc522_interface.h
* Created on: Oct 9, 2015
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*© 2015
*****************************************************************/ 
 
#ifndef MFRC522_MFRC525_LIB_MFRC522_INTERFACE_H_
#define MFRC522_MFRC525_LIB_MFRC522_INTERFACE_H_

#ifndef mfrc522_interface_C_
#define mfrc522_interface_EXTERN extern
#else
#define mfrc522_interface_EXTERN
#endif /* mfrc522_interface_C_ */


mfrc522_interface_EXTERN void mfrc_chip_select(void);
mfrc522_interface_EXTERN void mfrc_chip_unselect(void);
mfrc522_interface_EXTERN unsigned char mfrc_spi_transfer_byte(unsigned char data);

#endif /* MFRC522_MFRC525_LIB_MFRC522_INTERFACE_H_ */
