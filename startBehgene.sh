#! /bin/sh

 

 #change /direct/path/to/your/application to the path your application is in.
 cd /home/pi/Documents/App/      # example cd /home/pi/myprogram/
 export LD_LIBRARY_PATH=/home/pi/Documents/App/:$LD_LIBRARY_PATH
 export XDG_RUNTIME_DIR=/home/pi/Documents/App/Tmp
 export DISPLAY=:0
 export XAUTHORITY=/home/pi/.Xauthority
 export HOME=/home/pi/
 export USER=pi
 DISPLAY=:0
# chmod +777 /home/pi/Documents/App/programsList.txt
 chmod +777 /home/pi/.config/BehGene/BehGeneFirmware.ini
 #change YourProgramExactName to Exact name of your program that you want to auto start
 exec ./BehgeneGUI

exit 0
