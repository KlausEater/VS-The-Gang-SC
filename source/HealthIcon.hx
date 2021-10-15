package;

import flixel.FlxSprite;

class HealthIcon extends FlxSprite
{
	/**
	 * Used for FreeplayState! If you use it elsewhere, prob gonna annoying
	 */
	public var sprTracker:FlxSprite;

	public function new(char:String = 'bf', isPlayer:Bool = false)
	{
		super();
		loadGraphic(Paths.image('iconGrid'), true, 150, 150);

		antialiasing = true;
		animation.add('bf', [0, 1, 2], 0, false, isPlayer);
		animation.add('bf-guitar', [0, 1, 2], 0, false, isPlayer);
		animation.add('gf', [24, 25, 26], 0, false, isPlayer);
		animation.add('dad', [15, 16, 17], 0, false, isPlayer);
		animation.add('tom', [18, 19, 20], 0, false, isPlayer);
		animation.play(char);
		switch(char){
			case 'bf-pixel' | 'senpai' | 'senpai-angry' | 'spirit' | 'gf-pixel':
				{

				}
			default:
				{
					antialiasing = true;
				}
		}
		scrollFactor.set();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
