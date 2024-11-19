################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/gsc_sch_core.c \
../Src/gsc_sch_core_cfg.c \
../Src/gsc_sch_core_tick_isr.c \
../Src/led.c \
../Src/main.c \
../Src/periodic_tasks_exec.c \
../Src/periodic_tasks_init.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/gsc_sch_core.o \
./Src/gsc_sch_core_cfg.o \
./Src/gsc_sch_core_tick_isr.o \
./Src/led.o \
./Src/main.o \
./Src/periodic_tasks_exec.o \
./Src/periodic_tasks_init.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/gsc_sch_core.d \
./Src/gsc_sch_core_cfg.d \
./Src/gsc_sch_core_tick_isr.d \
./Src/led.d \
./Src/main.d \
./Src/periodic_tasks_exec.d \
./Src/periodic_tasks_init.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F411xE -c -I../Inc -I"C:/Users/Robert Pasztor/Documents/Sandbox/Scheduler/0_Scheduler/chip_headers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Robert Pasztor/Documents/Sandbox/Scheduler/0_Scheduler/chip_headers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/gsc_sch_core.cyclo ./Src/gsc_sch_core.d ./Src/gsc_sch_core.o ./Src/gsc_sch_core.su ./Src/gsc_sch_core_cfg.cyclo ./Src/gsc_sch_core_cfg.d ./Src/gsc_sch_core_cfg.o ./Src/gsc_sch_core_cfg.su ./Src/gsc_sch_core_tick_isr.cyclo ./Src/gsc_sch_core_tick_isr.d ./Src/gsc_sch_core_tick_isr.o ./Src/gsc_sch_core_tick_isr.su ./Src/led.cyclo ./Src/led.d ./Src/led.o ./Src/led.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/periodic_tasks_exec.cyclo ./Src/periodic_tasks_exec.d ./Src/periodic_tasks_exec.o ./Src/periodic_tasks_exec.su ./Src/periodic_tasks_init.cyclo ./Src/periodic_tasks_init.d ./Src/periodic_tasks_init.o ./Src/periodic_tasks_init.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

