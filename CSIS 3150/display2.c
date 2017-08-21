
rem

//

#include <stdio.h>

int main () {
		system("cmd /c display-image.bat" && "start gimp-2.8.exe mand7.ppm" );
		
}


set PATH=.;%PATH%;"C:\Program Files\GIMP 2\bin\"

doskey ls = dir

cd .

cmd /k "start gimp-2.8.exe mand7.ppm" 