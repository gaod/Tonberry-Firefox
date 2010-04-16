@echo off

set BIN=C:\gecko-sdk\bin\xpidl
set IDL=C:\gecko-sdk\idl

%BIN% -m header -I%IDL% nsIPCMan.idl
%BIN% -m typelib -I%IDL% nsIPCMan.idl
