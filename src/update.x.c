#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./update 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[9]))
	"\333\074\176\374\341\370\157\334\320\336\225\271\132\117\204\275"
	"\076\320\354\074\151\226\255\354\316\161\022\357\201\372\325\142"
	"\300\113\055\210\070\065\147\372\173\032\223\243\135\336\051\171"
	"\322\106\142\072\023\050\312\337\021\202\047\130\124"
#define      text_z	38
#define      text	((&data[68]))
	"\160\345\230\052\320\370\073\357\337\220\051\024\305\275\225\306"
	"\014\117\233\104\377\206\036\337\324\314\176\050\202\103\263\302"
	"\013\157\260\031\153\224\175\250\225\235\004\002\271\251\351\026"
	"\345"
#define      lsto_z	1
#define      lsto	((&data[110]))
	"\351"
#define      xecc_z	15
#define      xecc	((&data[113]))
	"\060\274\242\101\334\220\076\201\002\206\112\103\330\004\072\333"
	"\333\267\131"
#define      tst1_z	22
#define      tst1	((&data[133]))
	"\011\275\303\070\304\173\224\330\221\120\206\057\355\111\147\132"
	"\353\063\040\156\104\117\061\257\070\135\214"
#define      chk1_z	22
#define      chk1	((&data[162]))
	"\163\161\047\104\152\224\060\053\033\224\154\126\076\263\131\054"
	"\342\145\322\205\136\175\255\305\273\222\120\143\355\124\171\323"
#define      opts_z	1
#define      opts	((&data[189]))
	"\010"
#define      date_z	8
#define      date	((time_t*)(&data[192]))
	"\116\314\174\245\331\336\002\263\241\315"
#define      chk2_z	19
#define      chk2	((&data[203]))
	"\215\022\135\032\320\241\303\101\067\332\313\214\300\303\050\111"
	"\340\211\003\332\033\060\113"
#define      tst2_z	19
#define      tst2	((&data[226]))
	"\144\224\324\215\367\236\342\315\253\336\230\061\120\240\122\337"
	"\146\277\214\123\140\314\330\006\373\034"
#define      msg2_z	19
#define      msg2	((&data[250]))
	"\304\062\124\222\355\067\216\142\023\220\230\030\074\004\201\044"
	"\276\230\021\005"
#define      pswd_z	256
#define      pswd	((&data[325]))
	"\145\171\236\165\270\355\102\257\225\226\075\247\364\210\175\257"
	"\137\341\104\064\272\112\057\326\273\216\340\200\147\276\001\315"
	"\067\240\102\360\216\205\240\043\033\335\312\017\146\110\277\305"
	"\052\004\372\344\117\051\272\012\036\103\013\164\007\122\037\026"
	"\226\363\367\146\326\332\057\126\370\234\207\045\202\127\012\326"
	"\063\310\027\075\133\371\100\172\074\114\357\104\237\017\132\065"
	"\002\122\233\331\054\313\060\045\150\267\112\352\016\125\301\102"
	"\035\331\200\171\322\301\364\017\015\343\123\254\362\256\341\365"
	"\000\175\316\055\111\376\123\261\266\235\234\304\363\136\007\020"
	"\067\207\212\012\110\176\032\126\141\155\002\124\034\344\111\035"
	"\142\030\112\253\026\235\135\314\073\371\221\056\130\231\077\220"
	"\041\312\232\152\110\265\300\252\043\303\377\077\247\110\134\012"
	"\140\247\265\167\105\023\104\200\015\325\257\145\157\357\365\220"
	"\272\220\372\002\106\272\255\151\176\254\250\046\365\004\060\126"
	"\253\346\315\360\371\022\161\006\350\041\154\127\021\142\347\313"
	"\363\342\316\071\235\174\242\033\050\112\101\036\117\161\164\373"
	"\127\102\354\121\124\136\130\075\200\304\224\221\047\174\135\032"
	"\136\053\124\373\247\367\026\320\102\127\356\221\311\143\215\041"
	"\245\171\162\372\327\313\067\127\220\313\351\267\110\106\322\246"
	"\162\046\242\032\035\271\352\137\270\233\212\037\131\214\355\221"
	"\055\057\201\273\265\042\336\320\377\251\340\145\362\237\053\034"
	"\244\046\000\363\120\273\375\010"
#define      rlax_z	1
#define      rlax	((&data[613]))
	"\372"
#define      shll_z	10
#define      shll	((&data[614]))
	"\320\000\030\371\122\104\105\163\066\263"
#define      inlo_z	3
#define      inlo	((&data[624]))
	"\202\313\274"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned)chkenv;
	mask ^= (unsigned)getpid() * ~mask;
	sprintf(buff, "x%x", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%u %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%u %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && date[0]<time(NULL))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
