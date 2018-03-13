#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\127"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\300\342\126"
#define      opts_z	1
#define      opts	((&data[4]))
	"\201"
#define      text_z	365
#define      text	((&data[60]))
	"\012\212\073\232\014\103\175\202\105\364\351\034\263\246\200\374"
	"\120\054\317\375\111\122\113\227\047\014\320\043\343\153\017\355"
	"\366\112\210\002\216\005\205\323\372\156\360\256\024\161\252\145"
	"\235\171\143\346\314\256\176\141\374\123\346\206\001\372\206\262"
	"\265\057\227\274\344\163\006\037\026\223\112\257\244\064\316\045"
	"\131\124\005\130\121\071\011\141\103\373\311\277\354\105\226\123"
	"\364\153\022\262\007\046\373\300\364\241\222\022\131\234\120\047"
	"\237\340\034\105\016\036\270\117\030\277\064\335\042\034\046\143"
	"\102\005\221\273\146\154\240\331\207\147\302\114\306\363\244\137"
	"\170\172\364\307\110\012\314\230\004\254\215\236\025\075\260\034"
	"\111\367\020\061\331\220\107\004\155\106\032\134\047\317\201\031"
	"\000\246\241\035\211\060\156\077\135\073\357\372\311\167\371\365"
	"\030\353\227\017\057\277\013\251\246\302\135\305\104\213\135\225"
	"\124\215\104\075\134\271\063\377\110\150\335\346\104\073\121\117"
	"\036\124\023\331\176\052\304\201\104\020\115\101\221\272\272\214"
	"\217\173\270\023\202\026\211\234\177\310\252\367\376\241\335\231"
	"\120\350\333\014\027\362\357\343\252\322\207\056\044\165\136\260"
	"\075\200\314\144\300\127\071\356\314\245\146\327\111\071\101\140"
	"\024\370\344\315\367\222\015\027\356\351\115\356\355\007\024\214"
	"\217\152\275\003\050\154\261\231\144\050\227\302\230\205\170\054"
	"\350\246\001\162\003\320\015\150\220\354\200\240\233\164\301\167"
	"\003\073\031\332\053\034\101\044\244\305\056\375\346\245\006\237"
	"\131\067\311\043\243\115\157\325\243\032\076\242\260\250\375\376"
	"\007\255\073\301\277\311\137\014\134\313\053\164\010\026\240\333"
	"\060\054\172\063\131\203\100\305\343\075\327\171\240\335\244\170"
	"\076\363\046\113\361\124\030\352\270\004\027\211\071\004\336\276"
	"\275\056\241\065\364\273\116\027\237\271\047\215\260\161\025\263"
	"\000\033\070\324\025\247\305\303\274\066\156\041\324\350\205\272"
	"\264\064\071\251\357\207\301\217\101\350\034\362\132\061\245\132"
	"\115\335\057\143\205\364\047\101\052\225\143\376\175\350\271\062"
	"\034\363\333\014\172\234\233\274\204\267\256\336\351\124\071\066"
	"\062\150\231\267\135\300\371\207"
#define      xecc_z	15
#define      xecc	((&data[510]))
	"\323\365\147\356\007\273\327\106\025\165\215\005\116\232\352\350"
	"\106\100"
#define      pswd_z	256
#define      pswd	((&data[552]))
	"\341\157\256\176\013\153\002\303\032\341\255\156\033\343\240\204"
	"\175\130\341\075\121\151\223\256\357\112\010\150\240\204\335\045"
	"\005\242\115\177\134\151\173\044\303\026\243\243\225\163\144\362"
	"\032\342\046\332\315\164\007\122\277\020\273\140\224\230\205\231"
	"\073\322\031\227\074\225\273\377\253\137\242\101\323\006\063\356"
	"\351\131\311\266\316\321\010\215\341\303\355\165\134\163\017\227"
	"\106\050\057\202\275\353\201\151\112\043\252\036\052\336\014\023"
	"\067\326\311\006\247\322\223\211\226\201\376\362\364\016\212\072"
	"\066\271\275\364\244\076\135\357\142\007\015\214\345\032\237\035"
	"\360\151\044\230\074\267\041\322\071\040\304\056\056\117\151\145"
	"\010\046\131\254\144\266\234\306\276\251\122\244\304\362\302\265"
	"\134\346\116\230\236\157\153\327\217\060\005\276\177\156\043\207"
	"\225\175\064\371\064\320\300\362\172\023\227\077\005\131\364\142"
	"\077\102\373\335\262\146\265\102\226\273\000\025\052\044\235\277"
	"\241\322\270\325\242\171\310\035\214\137\135\222\270\121\364\370"
	"\224\360\326\107\126\214\211\355\107\212\003\161\257\240\061\121"
	"\162\352\047\025\143\357\063\357\117\220\201\010\342\166\001\167"
	"\146\327\276\274\143\110\252\253\323\147\365\060\154\130\144\116"
	"\310\022\314\323\176\317"
#define      chk1_z	22
#define      chk1	((&data[824]))
	"\104\006\314\303\173\256\360\052\057\367\271\255\245\352\136\070"
	"\317\041\312\043\067\154\325\106\053\050\247\120\245"
#define      chk2_z	19
#define      chk2	((&data[850]))
	"\105\154\330\167\334\114\243\044\100\334\360\262\256\365\040\270"
	"\332\315\371\121\233\167\377"
#define      msg2_z	19
#define      msg2	((&data[877]))
	"\273\113\115\040\130\066\132\202\132\072\150\061\153\273\120\167"
	"\176\154\142\145\222\216\117\231\025\062\145"
#define      tst2_z	19
#define      tst2	((&data[903]))
	"\200\111\345\011\030\025\262\265\335\114\247\212\137\164\220\241"
	"\260\035\216\322\231\202\305"
#define      lsto_z	1
#define      lsto	((&data[923]))
	"\324"
#define      msg1_z	42
#define      msg1	((&data[924]))
	"\160\026\336\033\240\207\157\267\337\370\120\363\254\216\146\242"
	"\317\225\311\066\045\312\343\155\115\344\116\224\226\343\161\130"
	"\173\270\365\012\356\323\107\026\042\025\367\065\166\110\320\355"
#define      tst1_z	22
#define      tst1	((&data[974]))
	"\075\030\335\034\346\231\272\060\046\156\251\067\363\047\134\060"
	"\152\301\363\302\232\354\227\004\027\212\070\260"
#define      date_z	8
#define      date	((time_t*)(&data[1008]))
	"\212\033\112\013\145\060\320\265\221\240\154\035\144\112\160\347"
#define      shll_z	10
#define      shll	((&data[1018]))
	"\344\121\334\016\064\332\241\034\276\322\320\205\245\032"/* End of data[] */;
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
