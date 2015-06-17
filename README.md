# shellcode-linux
Just because our fuzzer worked or the PoC was fantastic doesn't mean that running calc is gonna put a smile on your face. If you got RCE try our shellcodes to actually do something useful. 

execve_linux.c 	
Type: 	setuid(0); execve("/bin/sh", foobar, NULL);
OS 	Linux
Arch: 	x86
Size: 	47 bytes
MD5: 	93a247178a751a0f195852d19ae86eca
Author: 	noptrix

chmod_linux.c 	
Type: 	chmod("/etc/shadow", 666); exit();
OS 	Linux
Arch: 	x86
Size: 	32 bytes
MD5: 	20f5b12240eaa55d50cf93b7169d151c
Author: 	noptrix

reboot_linux.c 	
Type: 	reboot(0x1234567);
OS 	Linux
Arch: 	x86
Size: 	21 bytes
MD5: 	15d6609784eabbebe24f537a065a83ef
Author: 	noptrix
