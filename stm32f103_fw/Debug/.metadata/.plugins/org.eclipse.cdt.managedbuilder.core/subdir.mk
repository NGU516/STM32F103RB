################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.c 

OBJS += \
./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.o 

C_DEPS += \
./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.d 


# Each subdirectory must supply rules for building sources it contributes
.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.o .metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.su .metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.cyclo: ../.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.c .metadata/.plugins/org.eclipse.cdt.managedbuilder.core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/common/hw/include" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/bsp" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/ap" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/common" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/hw" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Include" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/USB_DEVICE/App" -I"C:/Users/cdm/Desktop/STM32/stm32f103_fw/src/lib/cube_f103/USB_DEVICE/Target" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core

clean--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core:
	-$(RM) ./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.cyclo ./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.d ./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.o ./.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.su

.PHONY: clean--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core

