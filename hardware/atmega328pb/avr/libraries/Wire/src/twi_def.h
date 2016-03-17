#ifndef TwoWire_def_h
#define TwoWire_def_h

// addon 328P I2C0 compatibility
#define PRTWI 7

#define TWBR _SFR_MEM8(0xB8)

#define TWSR _SFR_MEM8(0xB9)

#define TWAR _SFR_MEM8(0xBA)

#define TWDR _SFR_MEM8(0xBB)

#define TWCR _SFR_MEM8(0xBC)

#define TWAMR _SFR_MEM8(0xBD)

#define TWI_vect_num      24
#define TWI_vect          _VECTOR(24)  /* Two-wire Serial Interface */

#endif