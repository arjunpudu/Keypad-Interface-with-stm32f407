/*
 * keypad.h
 *
 *  Created on: Jan 20, 2021
 *      Author: ARJUNPUDU
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

typedef struct{
    uint32_t    gpio_aen           :1;
    uint32_t    gpio_ben           :1;
    uint32_t    gpio_cen           :1;
    uint32_t    gpio_den           :1;
    uint32_t    gpio_een           :1;
    uint32_t    gpio_fen           :1;
    uint32_t    gpio_gen           :1;
    uint32_t    gpio_hen           :1;
    uint32_t    gpio_ien           :1;
    uint32_t    reserved1          :3;
    uint32_t    crc_en             :1;
    uint32_t    reserved2          :5;
    uint32_t    bkpsr_amen         :1;
    uint32_t    reserved3          :1;
    uint32_t    ccmdat_aramen      :1;
    uint32_t    dma1_en            :1;
    uint32_t    dma2_en            :1;
    uint32_t    reserved4          :2;
    uint32_t    ethma_cen          :1;
    uint32_t    ethm_actxen        :1;
    uint32_t    ethm_acrxen        :1;
    uint32_t    ethm_acptpen       :1;
    uint32_t    otgh_sen           :1;
    uint32_t    otghs_ulpien       :1;
    uint32_t    reserved5          :1;




}RCC_AHB1ENR_t;

typedef struct
{
	uint32_t MODER0 :2;
	uint32_t MODER1 :2;
	uint32_t MODER2 :2;
	uint32_t MODER3 :2;

	uint32_t MODER4 :2;
	uint32_t MODER5 :2;
	uint32_t MODER6 :2;
	uint32_t MODER7 :2;

	uint32_t MODER8  :2;
	uint32_t MODER9  :2;
	uint32_t MODER10 :2;
	uint32_t MODER11 :2;

	uint32_t MODER12 :2;
	uint32_t MODER13 :2;
	uint32_t MODER14 :2;
	uint32_t MODER15 :2;


}gpio_mode;


typedef struct
{
	uint32_t odr0 :1;
	uint32_t odr1 :1;
	uint32_t odr2 :1;
	uint32_t odr3 :1;
	uint32_t odr4 :1;
	uint32_t odr5 :1;
	uint32_t odr6 :1;
	uint32_t odr7 :1;
	uint32_t odr8 :1;
	uint32_t odr9 :1;
	uint32_t odr10 :1;
	uint32_t odr11 :1;
	uint32_t odr12 :1;
	uint32_t odr13 :1;
	uint32_t odr14 :1;
	uint32_t odr15 :1;
	uint32_t reserved :16;

}gpio_output;

typedef struct
{
	uint32_t PUPDR0:2;
	uint32_t PUPDR1:2;
	uint32_t PUPDR2:2;
	uint32_t PUPDR3:2;
	uint32_t PUPDR4:2;
	uint32_t PUPDR5:2;
	uint32_t PUPDR6:2;
	uint32_t PUPDR7:2;
	uint32_t PUPDR8:2;
	uint32_t PUPDR9:2;
	uint32_t PUPDR10:2;
	uint32_t PUPDR11:2;
	uint32_t PUPDR12:2;
	uint32_t PUPDR13:2;
	uint32_t PUPDR14:2;
	uint32_t PUPDR15:2;
}pullupdown;

typedef struct
{
	uint32_t ODR0     : 1;
	uint32_t ODR1     : 1;
	uint32_t ODR2     : 1;
	uint32_t ODR3     : 1;
	uint32_t ODR4     : 1;
	uint32_t ODR5     : 1;
	uint32_t ODR6     : 1;
	uint32_t ODR7     : 1;
	uint32_t ODR8     : 1;
	uint32_t ODR9     : 1;
	uint32_t ODR10    : 1;
	uint32_t ODR11    : 1;
	uint32_t ODR12    : 1;
	uint32_t ODR13    : 1;
	uint32_t ODR14    : 1;
	uint32_t ODR15    : 1;
	uint32_t reserved : 16;


}gpio_input;

#endif /* KEYPAD_H_ */
