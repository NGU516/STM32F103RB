################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib/cube_f103/Core/Src/gpio.c \
../src/lib/cube_f103/Core/Src/main.c \
../src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.c \
../src/lib/cube_f103/Core/Src/stm32f1xx_it.c \
../src/lib/cube_f103/Core/Src/syscalls.c \
../src/lib/cube_f103/Core/Src/sysmem.c \
../src/lib/cube_f103/Core/Src/system_stm32f1xx.c 

OBJS += \
./src/lib/cube_f103/Core/Src/gpio.o \
./src/lib/cube_f103/Core/Src/main.o \
./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.o \
./src/lib/cube_f103/Core/Src/stm32f1xx_it.o \
./src/lib/cube_f103/Core/Src/syscalls.o \
./src/lib/cube_f103/Core/Src/sysmem.o \
./src/lib/cube_f103/Core/Src/system_stm32f1xx.o 

C_DEPS += \
./src/lib/cube_f103/Core/Src/gpio.d \
./src/lib/cube_f103/Core/Src/main.d \
./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.d \
./src/lib/cube_f103/Core/Src/stm32f1xx_it.d \
./src/lib/cube_f103/Core/Src/syscalls.d \
./src/lib/cube_f103/Core/Src/sysmem.d \
./src/lib/cube_f103/Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/lib/cube_f103/Core/Src/%.o src/lib/cube_f103/Core/Src/%.su src/lib/cube_f103/Core/Src/%.cyclo: ../src/lib/cube_f103/Core/Src/%.c src/lib/cube_f103/Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g -DDEBUG -DSTM32F103RBTx -DSTM32 -DSTM32F1 -DNUCLEO_F103RB -c -I"D:/workspace_STM/stm32f103_fw/src" -I"D:/workspace_STM/stm32f103_fw/src/ap" -I"D:/workspace_STM/stm32f103_fw/src/bsp" -I"D:/workspace_STM/stm32f103_fw/src/common" -I"D:/workspace_STM/stm32f103_fw/src/hw" -I"D:/workspace_STM/stm32f103_fw/src/lib" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Core/Inc" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Include" -I"D:/workspace_STM/stm32f103_fw/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"D:/workspace_STM/stm32f103_fw/src/common/hw/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-lib-2f-cube_f103-2f-Core-2f-Src

clean-src-2f-lib-2f-cube_f103-2f-Core-2f-Src:
	-$(RM) ./src/lib/cube_f103/Core/Src/gpio.cyclo ./src/lib/cube_f103/Core/Src/gpio.d ./src/lib/cube_f103/Core/Src/gpio.o ./src/lib/cube_f103/Core/Src/gpio.su ./src/lib/cube_f103/Core/Src/main.cyclo ./src/lib/cube_f103/Core/Src/main.d ./src/lib/cube_f103/Core/Src/main.o ./src/lib/cube_f103/Core/Src/main.su ./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.cyclo ./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.d ./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.o ./src/lib/cube_f103/Core/Src/stm32f1xx_hal_msp.su ./src/lib/cube_f103/Core/Src/stm32f1xx_it.cyclo ./src/lib/cube_f103/Core/Src/stm32f1xx_it.d ./src/lib/cube_f103/Core/Src/stm32f1xx_it.o ./src/lib/cube_f103/Core/Src/stm32f1xx_it.su ./src/lib/cube_f103/Core/Src/syscalls.cyclo ./src/lib/cube_f103/Core/Src/syscalls.d ./src/lib/cube_f103/Core/Src/syscalls.o ./src/lib/cube_f103/Core/Src/syscalls.su ./src/lib/cube_f103/Core/Src/sysmem.cyclo ./src/lib/cube_f103/Core/Src/sysmem.d ./src/lib/cube_f103/Core/Src/sysmem.o ./src/lib/cube_f103/Core/Src/sysmem.su ./src/lib/cube_f103/Core/Src/system_stm32f1xx.cyclo ./src/lib/cube_f103/Core/Src/system_stm32f1xx.d ./src/lib/cube_f103/Core/Src/system_stm32f1xx.o ./src/lib/cube_f103/Core/Src/system_stm32f1xx.su

.PHONY: clean-src-2f-lib-2f-cube_f103-2f-Core-2f-Src

