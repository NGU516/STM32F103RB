################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/hw/hw.c 

OBJS += \
./src/hw/hw.o 

C_DEPS += \
./src/hw/hw.d 


# Each subdirectory must supply rules for building sources it contributes
src/hw/%.o src/hw/%.su src/hw/%.cyclo: ../src/hw/%.c src/hw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/common/hw/include" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/bsp" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/ap" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/common" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/hw" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/lib" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Include" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"/home/cdm/STM32CubeIDE/workspace_1.18.0/nucleo/stm32f103_fw/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-hw

clean-src-2f-hw:
	-$(RM) ./src/hw/hw.cyclo ./src/hw/hw.d ./src/hw/hw.o ./src/hw/hw.su

.PHONY: clean-src-2f-hw

