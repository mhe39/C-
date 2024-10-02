#ifndef _PLATFROM_H_
#def _PLATFROM_H_

/*****************************************/
#define CPU_TYPE_8   8
#define CPU_TYPE_16  16
#define CPU_TYPE_32  32
#define CPU_TYPE_64  64

/*****************************************/
#define CPU_TYPE (CPU_TYPE_32) // *****MACHINE DEPENDANT*****
/*****************************************/

#if (CPU_TYPE == CPU_TYPE_8)

/*types in 8_bit cpu*/

#elif (CPU_TYPE == CPU_TYPE_16)

/*types in 16_bit cpu*/


#elif (CPU_TYPE == CPU_TYPE_32)

/*types in 32_bit cpu*/


#elif (CPU_TYPE == CPU_TYPE_64)

 /*types in 64_bit cpu*/

#endif

/*****************************************/

#endif // _PLATFROM_H_

