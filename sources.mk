#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

# Add your Source files to this variable
ifeq ($(PLATFORM), MSP432)
	# Add your Source files to this variable
	SOURCES =	main.c\
				memory.c\
				startup_msp432p401r_gcc.c\
				system_msp432p401r.c\
				interrupts_msp432p401r_gcc.c

	# Add your include paths to this variable
	INCLUDES = 	-I ../include/CMSIS\
				-I ../include/common\
				-I ../include/msp432
# Add your include paths to this variable
else

	SOURCES = 	main.c\
				memory.c

	INCLUDES = -I ../include/common
endif


