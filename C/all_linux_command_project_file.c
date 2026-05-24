// This program contain all linux commands which is use in terminal and give detail of this command on your order

#include <stdio.h>
void line(char ch);
void line(char ch)
{
    int a;
    for (a = 1; a <= 100; a++)
        printf("%c", ch);
}
int main()
{
    int i;
    line('-');
    printf("\n\t\tThis is all linux commands are listed which command do you know \n");
    line('-');
    printf("\n1.ls       31.kill       61.apropos    91.bzless     121.csplit     151.enable     191.groupadd\n");
    printf("2.cd       32.df         62.apt-get    92.bzmore     122.ctags      152.env        192.groude1\n");
    printf("3.pwd      33.mount      63.aptitude   93.cal        123.cupsd      153.eval       193.groupmod\n");
    printf("4.mkdir    34.chmod      64.ar         94.case       124.curl       154.ex         194.groups\n");
    printf("5.mv       35.ifconfig   65.arch       95.cat        125.cut        155.exec       195.grpck\n");
    printf("6.cp       36.traceroute 66.arp        96.cc         126.cvs        156.exit       196.grpconv\n");
    printf("7.rm       37.wget       67.aspell     97.ccrypt     127.date       157.expand     197.gs\n");
    printf("8.touch    38.ufw        68.atd        98.cfdisk     128.dc         158.expect     198.gunzip\n");
    printf("9.ln       39.iptables   69.atrm       99.chage      129.dd         159.expr       199.gzexe\n");
    printf("10.clear   40.apt        70.atq        100.chattr    130.declare    160.factor     200.gzip\n");
    printf("11.cat     41.sudo       71.autoconf   101.chfn      131.depmod     161.fc\n");
    printf("12.echo    42.cal        72.autoheader 102.chgrp     132.diff3      162.fc-cache\n");
    printf("13.less    43.alias      73.automake   103.chkconfig 133.dir        163.fc-list\n");
    printf("14.man     44.dd         74.autoreconf 104.chown     134.dirname    164.fdisk\n");
    printf("15.uname   45.whereis    75.autoupdate 105.chpasswd  135.dirs       165.fg\n");
    printf("16.whoami  46.whatis     76.awk        106.chroot    136.disable    166.fgrep\n");
    printf("17.tar     47.top        77.banner     107.chrt      137.dmesg      167.file\n");
    printf("18.grep    48.useradd    78.basename   108.chsh      138.dmidecode  168.find\n");
    printf("19.head    49.passwd     79.batch      109.chvt      139.domainname 169.finger\n");
    printf("20.tail    50.access     80.bc         110.cksum     140.dos2unix   170.fold\n");
    printf("21.diff    51.accton     81.bg         111.col       141.dosfsck    171.free\n");
    printf("22.cmp     52.aclocal    82.biff       112.colcrt    142.dstat      172.fun\n");
    printf("23.comm    53.acpi       83.bind       113.colrm     143.du         173.function\n");
    printf("24.sort    54.acpi_ava   84.bison      114.column    144.dump       174.g++\n");
    printf("25.export  55.acpid      85.break      115.compress  145.dumpe2fs   175.gawk\n");
    printf("26.zip     56.addr2line  86.builtin    116.continue  146.dumpkeys   176.gcc\n");
    printf("27.unzip   57.agetty     87.bzcmp      117.cpio      147.ed         177.gdb\n");
    printf("28.ssh     58.amixer     88.bzdiff     118.cpp       148.egrep      178.getent\n");
    printf("29.service 59.aplay      89.bzgrep     119.cron      149.eject      179.gpasswd\n");
    printf("30.ps      60.aplaymidi  90.bzip2      120.crontab   150.emacs      180.grep\n");
    line('-');
    printf("\nEnter your Command Number: ");
    scanf("%d", &i);
    line('-');
    printf("\n");
    switch (i)
    {
    case 1:
        printf("ls: The most frequently used command in Linux to list directories\n");
        printf("In simple language ye command sabhi files ya folders ko show karta hai terminal pe");
        break;
    case 2:
        printf("cd: Linux command to navigate through directories\n");
        printf("In simple language ye command ek folder se dushre folder me jaane ke liye use krte hai");
        break;
    case 3:
        printf("pwd: Print working directory command in Linux\n");
        printf("In simple language ye command current position ko print krta hai terminal pe ji se pta chalta hai ki user kaun se folder me hai");
        break;
    case 4:
        printf("mkdir: Command used to create directories in Linux");
        printf("In simple language koi bhi ek naya folder banane ke liye use krte hai");
        break;
    case 5:
        printf("mv: Move or rename files in Linux\n");
        printf("In simple language ye command kisi bhi folder ko move karne ke liye ka folder ka name change krne ke liye use hota hai");
        break;
    case 6:
        printf("cp: Similar usage as mv but for copying files in Linux\n");
        printf("In simple language ye command file ko copy krne ke liye use hota hai");
        break;
    case 7:
        printf("rm: Delete files or directories\n");
        printf("In simple language ye command kisi bhi file ya folder ko delet krne ke lye use krte hai");
        break;
    case 8:
        printf("touch: Create blank/empty files\n");
        printf("In simple language ye command koi bhi khali file ko create krne ke liye use krte hai");
        break;
    case 9:
        printf("ln: Create symbolic links (shortcuts) to other files");
        break;
    case 10:
        printf("clear: Clear the terminal display");
        break;
    case 11:
        printf("cat: Display file contents on the terminal");
        break;
    case 12:
        printf("echo: Print any text that follows the command");
        break;
    case 13:
        printf("less: Linux command to display paged outputs in the terminal");
        break;
    case 14:
        printf("man: Access manual pages for all Linux commands");
        break;
    case 15:
        printf("uname: Linux command to get basic information about the OS");
        break;
    case 16:
        printf("whoami: Get the active username");
        break;
    case 17:
        printf("ter: Command to extract and compress files in linux");
        break;
    case 18:
        printf("grep: Search for a string within an output");
        break;
    case 19:
        printf("head: Return the specified number of lines from the top");
        break;
    case 20:
        printf("tail: Return the specified number of lines from the bottom");
        break;
    case 21:
        printf("diff: Find the difference between two files");
        break;
    case 22:
        printf("cmp: Allows you to check if two files are identical");
        break;
    case 23:
        printf("comm: Combines the functionality of diff and cmp");
        break;
    case 24:
        printf("sort: Linux command to sort the content of a file while outputting");
        break;
    case 25: 
        printf("export: Export environment variables in Linux");
        break;
    case 26:
        printf("zip: Zip files in Linux");
        break;
    case 27:
        printf("unzip: UnZip files in Linux");
        break;
    case 28: 
        printf("ssh: Secure shell command in linux");
        break;
    case 29:
        printf("service: It is used to start and stop services in linux os");
        break;
    case 30:
        printf("ps: It is use to DIsplay active processes in linux");
        break;
    case 31:
        printf("kill: Kill active processse by ID or name");
        break;
    case 32:
        printf("df: Display disk filesystem information");
        break;
    case 33:
        printf("mount: Mount filesystem in linux");
        break;
    case 34:
        printf("chmod: command to change file permissions like read, write, and excute permission");
        break;
    case 35:
        printf("ifconfig: Display network interface and IP addresses");
        break;
    case 36:
        printf("traceroute: Trace all the network hops to reach the destination");
        break;
    case 37:
        printf("wget: Direct download file from internet");
        break;
    case 38:
        printf("ufw: It is Firewall command");
        break;
    case 39:
        printf("iptable: Base Firewall for all other firewall utilities to interface with network");
        break;
    case 40:
        printf("apt: Package managers depending on the distribution");
        break;
    case 41:
        printf("sudo: Command to escalate privileges in linux");
        break;
    case 42:
        printf("cal: View a command-line calender");
        break;
    case 43:
        printf("alias: Create custom shortcut for your regularly used commands");
        break;
    case 44:
        printf("dd: Majorly used for creating bootable USB sticks");
        break;
    case 45:
        printf("whereis: Locate the binary, source, and manual pages for a command");
        break;
    case 46:
        printf("whatis: Find what command is use for");
        break;
    case 47:
        printf("top: View active processes live with their system usage");
        break;
    case 48:
        printf("useradd: Add new user or change exiting user data");
        break;
    case 49:
        printf("passwd: Create or update password for exiting user");
        break;
    case 50:
        printf("access: Used to check wheather the calling program has access to a specified file\n");
        printf("Means wo cmmand ko check krta hai ki wo exit kr raha hai ki nahi");
        break;
    case 51:
        printf("accton: Used to turn on/off the process for accounting or change info process accounting file");
        break;
    case 52:
        printf("aclocal: Used to automaticlly generate aclocal.m4 file from configure.in file");
        break;
    case 53:
        printf("acpi: It provides intelligent power management on a system and is used to notify the user-space programs about the ACPI events");
        break;
    case 54:
        printf("acpi_available: Tests whether ACPI (Advanced Configuration and Power Interface) ");
        break;
    case 55:
        printf("acpid: It provides intelligent power management on a system and is used to notify the user-space programs about the ACPI events");
        break;
    case 56:
        printf("addr2line: Used to convert addresses into file names and line numbers");
        break;
    case 57:
        printf("agetty: It is a Linux version of getty, which is a Unix program running on a host computer that manages physical or virtual terminals to allow multi-user access");
        break;
    case 58:
        printf("amixer: It is a command-line mixer for ALSA(Advanced Linux Sound Architecture) sound-card driver");
        break;
    case 59:
        printf("aplay: It is a command-line audio player for ALSA(Advanced Linux Sound Architecture) sound card drivers");
        break;
    case 60:
        printf("aplaymidi: Used to play standard MIDI(Musical Instrument Digital Interface) files, by sending the content of a MIDI file to an ALSA(Advanced Linux Sound Architecture) MIDI port");
        break;
    case 61: 
        printf("apropos: ");
        break;
    case 62:
        printf("apt-get: ");
        break;
    case 63:
        printf("aptitude: ");
        break;
    case 64:
        printf("ar: ");
        break;
    case 65:
        printf("arch: ");
        break;
    default : 
        printf("You Entered Wrong Command Number");
    }
    return 0;
}