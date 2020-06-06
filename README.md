
# Arma/DayZ Essentials

## Content

BinToCppAll.bat = works for all files in a folder and subfolders, or the single file, the same way as default BINToCPP.bat in CfgConvert from Dayz Tools on Steam <sup title="(put it in `DayZ Tools\Bin\CfgConvert` folder and drag the target file/folder on it)" style="color:dodgerBlue;">__[i]__</sup> ;

## Arma Editing

This all is tested on Arma 3, the most of it should apply to DayZ and Arma 2 .

### Making/Loading an Addon

The game checks some locations for folders with "addons" name, and load Addons from these folders . These locations are preset (default/vanilla addons/content) or added with `-mod=<<path>><<|";"[path] ..>>` Startup Parameter<sup>[*](https://community.bistudio.com/wiki/Category:Startup_Parameters)</sup> .

The `-mod` accept Absolute paths, and ones Relative to the `.exe` file .

For example, in `Properties\Target` field of a shortcut file :
```
"D:\<<1>>\Arma 3\arma3.exe" -mod=modFolder_1;folder_1\modFolder_2;D:\modFolder_3
```
will lead to "`D:\<<1>>\Arma 3\modFolder_1`" , "`D:\<<1>>\Arma 3\folder_1\modFolder_2`" and `D:\modFolder_3` .

For the Addon to be loaded, you need to use `-filePatching` Startup Parameter, or pack it into `.pbo`: see "**Packing, Signing and Publishing**" .

### Mod files

`modFolder\addons\addonFolder\config.cpp`<sup>[*](https://community.bistudio.com/wiki/Config.cpp/bin_File_Format)</sup> is the initial Addon's file, everything that your Addon will implement, will be loaded through it .

`modFolder\addons\addonFolder\$PBOPREFIX$`<sup>[*](https://community.bistudio.com/wiki/PBOPREFIX)</sup> allow you to define a string as a path to the addonFolder . It allow you to rename the addonFolder, without editing the paths in code .

Since Arma 2 OA, optional `modFolder\mod.cpp`<sup>[*](https://community.bistudio.com/wiki/Mod.cpp/bin_File_Format)</sup> allow you to define `CfgMods` class so it would be processed every time when you load the modFolder, regardless of contained addonFolder-s (you can define these classes from other locations too) .

### Loading code with a Mission

After creating a Mission in an [|in-game] editor, you can find it at "`%userprofile%\Documents\Arma 3\`".. or "`%userprofile%\Documents\Arma 3 - Other Profiles\`".. . Some files in the mission's folder are automatically loaded : [Scripts](https://community.bistudio.com/wiki/Event_Scripts#init.sqf) and [MissionConfig](https://community.bistudio.com/wiki/Description.ext) .

MissionConfig allow you to define alot of what you can with the [d]config, including interfaces, items and so on .

### Packing, Signing and Publishing

You can download Arma 3 Tools from Steam, and PBO Manager from [here](http://www.armaholic.com/page.php?id=16369) .  

Then you can pack the `.cpp` and `.hpp` files into `.bin` -s and addonFolder-s into `.pbo` -s .

Then, in DSUtils click "N" on the side of top right, to create a new Private Key (if don't have), select the key trough the button that is adjacent to the "N" and with a folder icon, add the .pbo /-s and sign it/them . The keys are used on servers, to allow clients to join: only with Addons with allowed keys . The Private Keys allow to sign and load modified Addons, so do not share or loose them .<sup>[[i]](https://community.bistudio.com/wiki/ArmA:_Addon_Signatures)</sup>

You can share or find Mods/Missions trough :
* Steam Workshop, using Publisher from Arma 3 Tools to publish .
* [Bohemia Interactive Forum](https://forums.bohemia.net/forums/forum/156-arma-3-addons-mods-complete/) .
* [Armaholic](http://www.armaholic.com/) ;

And additionally you can share/find more information about them, using :
* [GitHub](https://github.com/) .
* or [Xrud Wiki](https://xrud-Wiki.fandom.com/wiki/Xrud_Wiki) ;