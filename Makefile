TARGET	= app

# do you need the interrupt table in this code
INTTBL	= FALSE

# uncomment the line indicating your board
BOARD	= UNO
# BOARD	= MEGA

# uncomment one of these lines (check for your system)
#PORT	= COM12
#PORT	= /dev/ttyACM0
# PORT	= /dev/cu.usbmodem1411		# left USB Port
PORT	= /dev/cu.usbmodem1421		# right USB Port

MAKE_BASE = ../
include $(MAKE_BASE)include/AVRMaster.mk
