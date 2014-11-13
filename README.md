Z3-Query-Input-Video
=====================

This app queries input video format and prints video width,height and frame rate. On running this app SDI lock will be achieved in the device.

* To build copy "C file" and CMakeLists.txt to avloop folder and build.
* Copy binary ```vquery``` to board and execute it.

Sample Output
==============
```
isVideoDetect      = 1
frameWidth         = 1920
frameHeight        = 1080
frameInterval      = 40000
isInterlaced       = 1
```
