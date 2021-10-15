package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import MainVariables._variables;
using StringTools;

#if desktop
import Discord.DiscordClient;
#end

class FirstTimeState extends MusicBeatState
{

	var sinMod:Float = 0;
	var txt:FlxText = new FlxText(0, 360, FlxG.width,
		"THIS IS IMPORTANT PLS READ!\n\n"
		+ "WARNING: This mod may potentially trigger seizures for people with photosensitive epilepsy. Viewer discretion is advised.\n"
		+ "Special thanks to Verwex for making fnf mic'd up\n"
		+ "If you like this mod, cool\n"
		+ "PRESS ENTER IF YOU ARE DONE READING",
		32);

	override function create()
	{

		#if desktop
				DiscordClient.changePresence("Started for the first time.", null);
		#end
		
		txt.setFormat("VCR OSD Mono", 32, FlxColor.WHITE, CENTER);
		add(txt);

		super.create();
	}

	override function update(elapsed:Float)
	{
		sinMod += 0.007;
		txt.y = Math.sin(sinMod)*60+100;

		if (controls.ACCEPT)
		{
			_variables.firstTime = false;
			MainVariables.Save();
			
			FlxG.switchState(new TitleState());
		}
		super.update(elapsed);
	}
}
