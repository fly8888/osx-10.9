NAME = Convert-UUlib
VERSION = 1.4

include ../Makefile.inc

custompatching:
	ed - $(DIR)/Makefile.PL < $(MYSRC)/Makefile.PL.ed
	ed - $(DIR)/uulib/uuencode.c < $(MYSRC)/uulib_uuencode.c.ed
