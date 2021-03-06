Thanks for downloading Lugaru!

This source code is forked from Mercurial revision 269 from http://code.google.com/p/lugaru/

Please note, the codebase is GPLv2 and is freely downloadable through Mercurial.

However, the game assets are for non-commercial use only. See details in COPYING.txt
and CONTENT-LICENSE.txt.

To build and play Lugaru for Linux, you need to have the following dependencies installed on your
system:

* libGLU-dev
* libGL-dev
* OpenAL-dev
* libSDL-dev
* libpng-dev
* libjpeg-dev
* libogg-dev
* libvorbis-dev
* zlib-dev
* CMake

CMake is the preferred build system for all three major platforms. We won't support building by
any other method.

This source tree has been tested on 32-bit Windows as well as 32-bit and 64-bit Mac and Linux. 
However, there are no guarantees whether it will work for you.Make sure you have the dependencies
though. And of course, have fun!

## Quickstart

In the root directory run `cmake .` then run `make` then run `./lugaru
--windowed` in case your graphics drivders aren't quite set right.
