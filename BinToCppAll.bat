@echo off
setlocal enableExtensions enableDelayedExpansion
set br=^


rem br;
cd /d "%~dp0"		&rem Working/{temp files} Directory . pat>->paf ;


for /f usebackq^ tokens^=*^ delims^=^ eol^= %%f in (`dir /b /a /s "%~1"`) do (
	echo(%%f
	if "%%~xf"==".bin" (
		rem pushd P:\
		CfgConvert.exe -txt -dst "%%~dpnf.cpp" "%%~f"
		del /q "%%~f"
		rem popd
	)
)


:sc_n
rem endlocal
rem pause
rem exit /b
