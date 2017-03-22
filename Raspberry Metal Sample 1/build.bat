@PATH=C:\SysGCC\Raspberry\arm-linux-gnueabihf\bin:%PATH%
@PATH=C:\SysGCC\Raspberry\bin;%PATH%
@PATH=C:\Program Files (x86)\GnuWin32\bin;%PATH%
make
copy /Y kernel.img C:\SysGCC\deploy\