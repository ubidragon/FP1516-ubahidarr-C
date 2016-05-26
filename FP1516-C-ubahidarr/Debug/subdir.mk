################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../asignatura.c \
../cadena.c \
../centro.c \
../espacio.c \
../grado.c \
../testAsignatura.c \
../testCadena.c \
../testCentro.c \
../testEspacio.c \
../testGrado.c 

OBJS += \
./asignatura.o \
./cadena.o \
./centro.o \
./espacio.o \
./grado.o \
./testAsignatura.o \
./testCadena.o \
./testCentro.o \
./testEspacio.o \
./testGrado.o 

C_DEPS += \
./asignatura.d \
./cadena.d \
./centro.d \
./espacio.d \
./grado.d \
./testAsignatura.d \
./testCadena.d \
./testCentro.d \
./testEspacio.d \
./testGrado.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


