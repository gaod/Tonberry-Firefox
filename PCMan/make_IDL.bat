@echo off

set BIN=..\..\..\..\gecko-sdk\xpcom\bin\xpidl
set IDL=..\..\..\..\gecko-sdk\xpcom\idl

%BIN% -m header -I%IDL% nsIPCMan.idl
%BIN% -m typelib -I%IDL% nsIPCMan.idl
