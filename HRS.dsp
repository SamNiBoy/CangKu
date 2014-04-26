# Microsoft Developer Studio Project File - Name="HRS" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=HRS - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "HRS.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "HRS.mak" CFG="HRS - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "HRS - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "HRS - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 1
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "HRS - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "HRS - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 1
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "HRS - Win32 Release"
# Name "HRS - Win32 Debug"
# Begin Source File

SOURCE=.\AreaDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\AreaDoc.h
# End Source File
# Begin Source File

SOURCE=.\AreaSet.cpp
# End Source File
# Begin Source File

SOURCE=.\AreaSet.h
# End Source File
# Begin Source File

SOURCE=.\AreaView.cpp
# End Source File
# Begin Source File

SOURCE=.\AreaView.h
# End Source File
# Begin Source File

SOURCE=.\res\bmp00001.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00002.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00003.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00004.bmp
# End Source File
# Begin Source File

SOURCE=.\res\box.bmp
# End Source File
# Begin Source File

SOURCE=.\res\box1.bmp
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\res\cursor_h.cur
# End Source File
# Begin Source File

SOURCE=.\res\customer.bmp
# End Source File
# Begin Source File

SOURCE=.\DbManger.cpp
# End Source File
# Begin Source File

SOURCE=.\DbManger.h
# End Source File
# Begin Source File

SOURCE=.\DlgBoxLayout.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgBoxLayout.h
# End Source File
# Begin Source File

SOURCE=.\DlgFindList.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgFindList.h
# End Source File
# Begin Source File

SOURCE=.\HRS.cpp
# End Source File
# Begin Source File

SOURCE=.\HRS.h
# End Source File
# Begin Source File

SOURCE=.\res\HRS.ico
# End Source File
# Begin Source File

SOURCE=.\HRS.rc

!IF  "$(CFG)" == "HRS - Win32 Release"

!ELSEIF  "$(CFG)" == "HRS - Win32 Debug"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\HRSDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\HRSDoc.h
# End Source File
# Begin Source File

SOURCE=.\res\HRSDoc.ico
# End Source File
# Begin Source File

SOURCE=.\HRSSet.cpp
# End Source File
# Begin Source File

SOURCE=.\HRSSet.h
# End Source File
# Begin Source File

SOURCE=.\hrsview.cpp
# End Source File
# Begin Source File

SOURCE=.\HRSView.h
# End Source File
# Begin Source File

SOURCE=.\res\icn_ok.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\idr_hrst.ico
# End Source File
# Begin Source File

SOURCE=.\res\item.bmp
# End Source File
# Begin Source File

SOURCE=.\res\item1.bmp
# End Source File
# Begin Source File

SOURCE=.\ItemDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\ItemDoc.h
# End Source File
# Begin Source File

SOURCE=.\ItemSet.cpp
# End Source File
# Begin Source File

SOURCE=.\ItemSet.h
# End Source File
# Begin Source File

SOURCE=.\ItemView.cpp
# End Source File
# Begin Source File

SOURCE=.\ItemView.h
# End Source File
# Begin Source File

SOURCE=.\LoginDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\LoginDlg.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\mdi.ico
# End Source File
# Begin Source File

SOURCE=.\res\money1.bmp
# End Source File
# Begin Source File

SOURCE=.\MoneyDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\MoneyDoc.h
# End Source File
# Begin Source File

SOURCE=.\MoneySet.cpp
# End Source File
# Begin Source File

SOURCE=.\MoneySet.h
# End Source File
# Begin Source File

SOURCE=.\MoneyView.cpp
# End Source File
# Begin Source File

SOURCE=.\MoneyView.h
# End Source File
# Begin Source File

SOURCE=.\MySplitter.cpp
# End Source File
# Begin Source File

SOURCE=.\MySplitter.h
# End Source File
# Begin Source File

SOURCE=.\NavView.cpp
# End Source File
# Begin Source File

SOURCE=.\NavView.h
# End Source File
# Begin Source File

SOURCE=.\QueryView.cpp
# End Source File
# Begin Source File

SOURCE=.\QueryView.h
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# Begin Source File

SOURCE=.\res\sale1.bmp
# End Source File
# Begin Source File

SOURCE=.\SaleDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\SaleDoc.h
# End Source File
# Begin Source File

SOURCE=.\SaleSet.cpp
# End Source File
# Begin Source File

SOURCE=.\SaleSet.h
# End Source File
# Begin Source File

SOURCE=.\SaleView.cpp
# End Source File
# Begin Source File

SOURCE=.\SaleView.h
# End Source File
# Begin Source File

SOURCE=.\StaticBox.cpp
# End Source File
# Begin Source File

SOURCE=.\StaticBox.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\res\toolbar1.bmp
# End Source File
# Begin Source File

SOURCE=.\User.cpp
# End Source File
# Begin Source File

SOURCE=.\User.h
# End Source File
# Begin Source File

SOURCE=.\res\user1.bmp
# End Source File
# Begin Source File

SOURCE=.\UserDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\UserDoc.h
# End Source File
# Begin Source File

SOURCE=.\UserSet.cpp
# End Source File
# Begin Source File

SOURCE=.\UserSet.h
# End Source File
# Begin Source File

SOURCE=.\UserView.cpp
# End Source File
# Begin Source File

SOURCE=.\UserView.h
# End Source File
# End Target
# End Project
