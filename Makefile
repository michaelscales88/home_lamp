# Makefile for aBuzz

TARGET	= app

INTTBL	= FALSE

# board definition
BOARD = UNO
# BOARD = MEGA

# uncomment one of these linesand check for your system:
# PORT	= COM12
# PORT	= /dev/ttyACM0
PORT	= /dev/cu.usbmodem1421

# uncomment one of these lines
MAKE_BASE = ../
#MAKE_BASE = /usr/local/
include $(MAKE_BASE)include/AVRMakefile.mak
