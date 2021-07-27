<p align="center">
	<a href="https://www.youtube.com/watch?v=dQw4w9WgXcQ" target="_blank"><img src="/art/logo.png" alt="fnf vs the gang logo" width="428px" height="286px"></a>
</p>

# VS The Gang source code
The repository of the Friday night funkin vs The Gang [MOD]

**This mod uses FNF Micd Up as the engine, [check it out!](https://github.com/Verwex/Funkin-Mic-d-Up-SC)**

# Credits
### Darami - artist(icons, concecepts) & mod creator/founder:
<img src="/art/darami.png" alt="darami" width="128px" height="128px"></a>

### HenryElVergas(fani name) - animator, musician:
<img src="/art/henry.jpg" alt="henry el vergas" width="128px" height="128px"></a>

### Clive dev(me lol) - programmer:
<img src="/art/clive.png" alt="clive dev" width="128px" height="128px"></a>

### Julio - background artist:
<img src="/art/julio.png" alt="julio" width="128px" height="128px"></a>

# Compiling

**Most of these instructions were gotten from the kade engine compiling guide lol**(it will still work)

1. [Install Haxe 4.1.5](https://haxe.org/download/version/4.1.5/). The newest version of haxe doesnt really work with Friday Night Funkin.

2. After installing Haxe, [Install HaxeFlixel](https://haxeflixel.com/documentation/install-haxeflixel/).

3. Install `git`.
	- Windows and Mac: install from the [git-scm](https://git-scm.com/downloads) website.	
	- Linux: install the `git` package: `sudo apt install git` (ubuntu), `sudo pacman -S git` (arch), etc... (you probably already have it)

4. Install and set up the necessary libraries:
	 - `haxelib install lime 7.9.0`
	 - `haxelib install openfl`
	 - `haxelib install flixel`
	 - `haxelib run lime setup`
	 - `haxelib run lime setup flixel`
	 - `haxelib install flixel-tools`
	 - `haxelib run flixel-tools setup`
	 - `haxelib install flixel-addons`
	 - `haxelib install flixel-ui`
	 - `haxelib install hscript`
	 - `haxelib install newgrounds`
	 - `haxelib install linc_luajit`
	 - `haxelib git faxe https://github.com/uhrobots/faxe`
	 - `haxelib git polymod https://github.com/larsiusprime/polymod.git`
	 - `haxelib git discord_rpc https://github.com/Aidan63/linc_discord-rpc`
	 - `haxelib install actuate`
	 - `haxelib git extension-webm https://github.com/KadeDev/extension-webm`
	 - `lime rebuild extension-webm <ie. windows, macos, linux>`

### Windows-only dependencies (only for building *to* Windows. Building html5 on Windows does not require this)
If you are planning to build for Windows, you also need to install **Visual Studio 2019**. While installing it, *don't click on any of the options to install workloads*. Instead, go to the **individual components** tab and choose the following:

-   MSVC v142 - VS 2019 C++ x64/x86 build tools
-   MSVC v141 - VS 2017 C++ x64/x86 build tools
-   Windows SDK (10.0.17763.0)
-   C++ Profiling tools
-   C++ CMake tools for windows
-   C++ ATL for v142 build tools (x86 & x64)

This will install about 7 GB of crap, but is necessary to build for Windows.

### macOS-only dependencies (these are required for building on macOS at all, including html5.)
If you are running macOS, you'll need to install Xcode. You can download it from the macOS App Store or from the [Xcode website](https://developer.apple.com/xcode/).

If you get an error telling you that you need a newer macOS version, you need to download an older version of Xcode from the [More Software Downloads](https://developer.apple.com/download/more/) section of the Apple Developer website. (You can check which version of Xcode you need for your macOS version on [Wikipedia's comparison table (in the `min macOS to run` column)](https://en.wikipedia.org/wiki/Xcode#Version_comparison_table).)
