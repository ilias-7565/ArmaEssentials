[arma essentials]

Keep in mind that the presets/samples are intended to let you know about the most of options you have, large parts of it all is not required, see the info pages for descriptions of minimum requirements .

Feel free to participate in improvement of any part of this project.

# Information

For info pages see the [Wiki](https://github.com/ilias-7565/ArmaEssentials/wiki/) part.  
See also [CBA Repository](https://github.com/CBATeam/CBA_A3), for more of editing related info (for example configs).

Userconfig folder is not required for our Addons/Mod (#d_modFolder),
	 its only to support other Mods that require it, because they usually require to manually make/paste it.

See also our Steam Workshop's Mods management [Collections](https://steamcommunity.com/sharedfiles/filedetails/?id=2120634028).

See also [Mods management](assets//info_cont_Mods.md).

# Content

Arma 3 Samples from Steam -- using and fixing, which belong to Bohemia Interactive . A lot of them are not re-sorted and doesn't have descriptions, but all should work.

## Features/changes

[EDN Fortification](https://steamcommunity.com/sharedfiles/filedetails/?id=933801347&searchtext=fortif), lightly updated. [Originally](https://www.armaholic.com/page.php?id=26964) made by Eden of Sol-diers .
* Added CBA Keybinding support .
* Changed Item Type of the materials to Misc (CBA) .

## Additional/optional

Config enhancement/fixes for CUP . (low)

Compatibility files from/for [NATO_Rus_Weapons by Massi](https://steamcommunity.com/sharedfiles/filedetails/?id=500929500) .

## External tools

BinToCppAll.bat = works for all files in a folder and subfolders, or the single file . used the same way as default BINToCPP.bat in CfgConvert from { Arma [_] | DayZ } Tools on Steam <sup title="(put it in `DayZ Tools\Bin\CfgConvert` folder and drag the target file/folder on it)" style="color:dodgerBlue;"><i>[i]</i></sup> ;

Arma3Sync, see [Mods management](assets//info_cont_Mods.md).

## Exports

FullConfigDump_Arma3_1.99.146398_CUP_ACE.cpp (**note** -- 24 447 905 lines. VSCode will handle it) .  
All regards to https://forums.bohemia.net/forums/topic/191737-updated-all-in-one-config-dumps/?do=findComment&comment=3408530 .

[NATO_Rus_Weapons by Massi](https://steamcommunity.com/sharedfiles/filedetails/?id=500929500) not locked configs.

[R3F Enhanced Logistic](https://steamcommunity.com/sharedfiles/filedetails/?id=2412164804) .

[SPS Weapons](https://steamcommunity.com/sharedfiles/filedetails/?id=1078436541&searchtext=SPS-Weapons) configs.

[Zeus Enhanced](https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631), partial.

[Drongos Command Enhancement](https://steamcommunity.com/sharedfiles/filedetails/?id=1515249845) configs.

# Dev

Mostly done r3f_log support for Zeus Enhanced 's clipboard and scripted export/save.
	 I abandoned it {not because / with no} issues about implementation.
https://github.com/ilias-7565/ArmaEssentials/tree/supportAn_r3f_log
