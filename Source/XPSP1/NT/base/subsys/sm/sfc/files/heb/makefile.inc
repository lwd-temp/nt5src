# Makefile to put the header files where the autogenerated header files
# would be in main.

headers:
!if !$(WIN64)
    $(BINPLACE_CMD) x86_per.h
    $(BINPLACE_CMD) x86_wks.h
!endif
!if $(WIN64)
    $(BINPLACE_CMD) ia64_wks.h
!endif
