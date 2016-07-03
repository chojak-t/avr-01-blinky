################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
avr-01-blinky.lss \

FLASH_IMAGE += \
avr-01-blinky.hex \

EEPROM_IMAGE += \
avr-01-blinky.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: avr-01-blinky.elf secondary-outputs

# Tool invocations
avr-01-blinky.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,avr-01-blinky.map -mmcu=atmega328p -o "avr-01-blinky.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

avr-01-blinky.lss: avr-01-blinky.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S avr-01-blinky.elf  >"avr-01-blinky.lss"
	@echo 'Finished building: $@'
	@echo ' '

avr-01-blinky.hex: avr-01-blinky.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex avr-01-blinky.elf  "avr-01-blinky.hex"
	@echo 'Finished building: $@'
	@echo ' '

avr-01-blinky.eep: avr-01-blinky.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex avr-01-blinky.elf  "avr-01-blinky.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: avr-01-blinky.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p avr-01-blinky.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) avr-01-blinky.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
