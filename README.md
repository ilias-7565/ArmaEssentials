
# Arma/DayZ Essentials

[arma essentials]

Keep in mind that the presets/samples are intended to let you know about the most of options you have, large parts of it all is not required, see the info pages for descriptions of minimum requirements .

## Information

For info pages see the [Wiki](https://github.com/ilias-7565/ArmaEssentials/wiki/) part.  
See also [CBA Repository](https://github.com/CBATeam/CBA_A3), for more of editing related info (for example configs).

Userconfig folder is not required for our Addons/Mod (#d_modFolder),
	 its only to support other Mods that require it, because they usually require to manually make/paste it.

See also our Steam Workshop's Mods management [Collections](https://steamcommunity.com/sharedfiles/filedetails/?id=2120634028).  
Feel free to participate in improvement of the lists.

### Mods management

!!! To avoid chance of loosing a lot of time, forget about downloading mods without adding each to at least 1 external list.

Steam
* Workshop's Collections have "Subscribe to all"/"Unsubscribe from all" buttons. Default Arma 3 Launcher has "Load all" (Subscribed and Locally included/marked) button.
	<i><sup title="Sometimes Steam won't delete some mods for some time after Unsubscribing in it's interfaces.">[additional]</sup></i>
* There is no adequate/fast way to manage multiple Mods within/between Collection/-s.
* Use Favorites group for marking Mods that you download temporally.

Arma3Sync allow you to separate/sort downloaded Mods to groups,
	 and load multiple of these groups. See [our pack](Additional/ArmA3Sync).

Other:
* Arma 3 Mod Preset Launcher is less functional than Arma3Sync, and even outdated.

## Content

BinToCppAll.bat = works for all files in a folder and subfolders, or the single file . used the same way as default BINToCPP.bat in CfgConvert from { Arma [_] | DayZ } Tools on Steam <sup title="(put it in `DayZ Tools\Bin\CfgConvert` folder and drag the target file/folder on it)" style="color:dodgerBlue;">__[i]__</sup> ;

FullConfigDump_Arma3_1.99.146398_CUP_ACE.cpp (**note** -- 24 447 905 lines . VSCode will handle it) .  
All regards to https://forums.bohemia.net/forums/topic/191737-updated-all-in-one-config-dumps/?do=findComment&comment=3408530 .

Arma 3 Samples from Steam -- it uses and fixes, which belong to Bohemia Interactive . A lot of them are not re-sorted and doesn't have descriptions, but all should work .

[EDN Fortification](https://steamcommunity.com/sharedfiles/filedetails/?id=933801347&searchtext=fortif), lightly updated.

Compatibility files from/for [NATO_Rus_Weapons by Massi](https://steamcommunity.com/sharedfiles/filedetails/?id=500929500) .

### Additional

Config enhancement/fixes for CUP . (low)
​
## Dev

Mostly done r3f_log support for Zeus Enhanced 's clipboard and scripted export/save.
	 I abandoned it {not because / with no} issues about implementation.
https://github.com/ilias-7565/ArmaEssentials/tree/supportAn_r3f_log
