@echo off
set "v_s1=%~1"		&rem after saving as var, it gets 1 level of Escaping . for commands
set "v_sh1=%v_s1:!=^^^!%"		&rem "echo"
setlocal enableExtensions enableDelayedExpansion
set br=^


rem br;
cd /d "%~dp0"		&rem Working/{temp files} Directory . pat>->paf ;


for /f usebackq^ tokens^=*^ delims^=^ eol^= %%f in (`dir /b /a /s "!v_s1!"`) do (
	echo(%%f
	
	if "%%~xf"==".bin" (
		rem pushd P:\
		CfgConvert.exe -txt -dst "%%~dpnf.cpp" "%%~f"
		if Errorlevel 1 (
			rem pause		&rem #cont Uncomment for error output
		) else (
			del /q "%%~f"
		)
		rem popd
	)
)


:sc_n
rem endlocal
rem pause
rem exit /b
