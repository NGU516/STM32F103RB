################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.c \
../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.c 

OBJS += \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.o \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.o 

C_DEPS += \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.d \
./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.d 


# Each subdirectory must supply rules for building sources it contributes
src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/%.o src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/%.su src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/%.cyclo: ../src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/%.c src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g -DSTM32F103xB -c -I"D:/workspace_STM/stm32f103_fw/src" -I"D:/workspace_STM/stm32f103_fw/src/ap" -I"D:/workspace_STM/stm32f103_fw/src/bsp" -I"D:/workspace_STM/stm32f103_fw/src/common" -I"D:/workspace_STM/stm32f103_fw/src/hw" -I"D:/workspace_STM/stm32f103_fw/src/lib" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Include" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"D:/workspace_STM/stm32f103_fw/src/common/hw/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-lib-2f-cube_f103-2f-Drivers-2f-STM32F1xx_HAL_Driver-2f-Src

clean-src-2f-lib-2f-cube_f103-2f-Drivers-2f-STM32F1xx_HAL_Driver-2f-Src:
	-$(RM) ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.su ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.cyclo ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.d ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.o ./src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.su

.PHONY: clean-src-2f-lib-2f-cube_f103-2f-Drivers-2f-STM32F1xx_HAL_Driver-2f-Src

