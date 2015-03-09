![Oppai_QuickInjector](http://hnng.moe/f/11J)

Introduction
==============
This is a remake of my old Oppai_QuickInjector. It's a very minimal injector that lets you inject a list 
of dlls into any process you like in a single click. It uses the CreateRemoteThread method and it should work 
with most games. 
It also attempts to randomize the dll's checksum by appending random data at the end (it doesn't seem to work 
with packed DLLs, but it might help if the DLL is not packed).

Requirements
==============
Before you attempt using this tool, make sure you have the 
[Visual C++ Redist 2013](http://www.microsoft.com/en-US/download/details.aspx?id=40784).

Usage
==============
* Edit Oppai_QuickInjector.ini and change the process and DLL list. The file format is as follows:

    [Settings]
    ; Name of the target executable.
    ; You generally won't need to changed this unless you're
    ; playing on a pserver that renamed the executable.
    
    ExecutableName=MapleStory.exe
    
    [Injector]
    ; Add your dlls here like so:
    ;
    ; Count=2
    ; Dll1=MyFile1.dll
    ; Dll1Delay=1000
    ; Dll2=MyFile2.dll
    ; Dll2Delay=500
    ; 
    ; Where the delays are in milliseconds.
    ; Don't forget to adjust Count to match the number of dlls you added!
    
    Count=1 ; Number of DLLs
    Dll1=DllHello.dll ; This is just an example hello world dll. Change it.
    Dll1Delay=1000 ; delay before the dll is injected

Compiling:
==============
The project should compile out of the box in both Debug and Release mode.

Advanced Users:
==============
If for some reason you don't want to use WiFi ADB or you need to change the ip it connects 
to because you want to use it on a real device, you can change the ConnectCommand parameter 
in settings.ini

Troubleshooting:
==============
If the injection fails, make sure you are running it as administrator.

Source code:
==============
The project should compile out of the box in both Debug and Release mode.
The injector is written in pure C and Win32API.

Legal stuff:
==============
Copyright 2014 Franc[e]sco (lolisamurai@tfwno.gf)
This file is part of Oppai_QuickInjector.
Oppai_QuickInjector is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
Oppai_QuickInjector is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with Oppai_QuickInjector. If not, see <http://www.gnu.org/licenses/>.
