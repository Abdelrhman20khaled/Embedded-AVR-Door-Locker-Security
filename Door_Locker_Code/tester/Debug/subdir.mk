################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../dc_motor.c \
../gpio.c \
../pwm_timer0.c \
../tesssssst.c \
../timer1.c 

OBJS += \
./dc_motor.o \
./gpio.o \
./pwm_timer0.o \
./tesssssst.o \
./timer1.o 

C_DEPS += \
./dc_motor.d \
./gpio.d \
./pwm_timer0.d \
./tesssssst.d \
./timer1.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


