call POVARS64
echo on

del /Q out\*.*
for %%F in (*.c) do pocc /Ze /Zl /Tx86-coff /Gz "%%F" /Fo "out\%%~nF.obj"
for %%F in (extra\*.c) do pocc /Ze /Zl /Tx86-coff /Gz "%%F" /Fo "out\%%~nF.obj"
rem POLIB /DEF:"Uuid.def" /OUT:"..\..\Win\\Uuid.lib\" /MACHINE:X86 out\*.obj
POLIB /DEF:"Uuid.def" /OUT:Uuid.lib /MACHINE:X86 out\*.obj

del /Q /Y out\*.*
for %%F in (*.c) do pocc /Ze /Zl /Tx64-coff /Gz "%%F" /Fo "out\%%~nF.obj"
for %%F in (extra\*.c) do pocc /Ze /Zl /Tx64-coff /Gz "%%F" /Fo "out\%%~nF.obj"
rem POLIB /DEF:"Uuid.def" /OUT:"..\..\Win64\\Uuid.lib\" /MACHINE:X64 out\*.obj
POLIB /DEF:"Uuid.def" /OUT:Uuid64.lib /MACHINE:X64 out\*.obj
