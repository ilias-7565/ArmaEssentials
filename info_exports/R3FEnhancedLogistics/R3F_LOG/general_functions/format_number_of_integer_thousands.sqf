/**
 * Formate un nombre entier avec des séparateurs de milliers
 *
 * @param 0 le nombre à formater
 * @return chaîne de caractère représentant le nombre formaté
 *
 * Copyright (C) 2014 Team ~R3F~
 *
 * This program is free software under the terms of the GNU General Public License version 3.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

private ["_namebre", "_centaines", "_str_signe", "_str_namebre", "_str_centaines"];

_namebre = _this select 0;

_str_signe = if (_namebre < 0) then {"-"} else {""};
_namebre = floor abs _namebre;

_str_namebre = "";
while {_namebre >= 1000} do
{
	_centaines = _namebre - (1000 * floor (0.001 * _namebre));
	_namebre = floor (0.001 * _namebre);

	if (_centaines < 100) then
	{
		if (_centaines < 10) then
		{
			_str_centaines = "00" + str _centaines;
		}
		else
		{
			_str_centaines = "0" + str _centaines;
		};
	}
	else
	{
		_str_centaines = str _centaines;
	};

	_str_namebre = "." + _str_centaines + _str_namebre;
};

_str_signe + str _namebre + _str_namebre