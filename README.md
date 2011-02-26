Quake II Source
===

What is this?
---

This is the Quake 2 source (originally from http://icculus.org/quake2) stripped of as much game specific code as I can manage, and with a Chicken Scheme interpreter embedded into it.

All of the interesting stuff is under src/modgame, and with any luck that should work with an unmodified src/client and src/server, and also should hopefully work on platforms other than Linux.

Since this whole thing has so far been an experiment, the embedded chicken scheme code isn't even compiled at compile time, and is instead compiled manually from src/modgame/chicken.scm and appended to src/modgame/g_chicken.c.

I'll be stoked if anyone manages to use this in any way, but mostly I'm uploading this to abide by the GPL which this source is licensed under :)
