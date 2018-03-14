#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      xecc_z	15
#define      xecc	((&data[2]))
	"\027\151\314\343\344\031\235\100\232\325\351\162\221\163\105\202"
	"\351\061\154"
#define      rlax_z	1
#define      rlax	((&data[19]))
	"\065"
#define      chk2_z	19
#define      chk2	((&data[22]))
	"\376\062\332\076\244\121\335\240\367\264\263\250\116\345\301\121"
	"\234\013\140\070\264"
#define      pswd_z	256
#define      pswd	((&data[60]))
	"\271\371\011\205\227\014\316\011\202\117\215\223\322\356\052\143"
	"\006\223\224\211\342\373\063\315\057\205\111\252\157\123\363\143"
	"\175\252\213\045\320\301\046\110\216\242\345\001\022\036\111\241"
	"\132\115\052\074\110\136\012\170\343\123\042\123\247\025\267\045"
	"\300\102\113\221\004\162\331\222\024\277\224\047\336\336\310\070"
	"\054\362\164\164\121\177\355\065\323\017\210\172\045\077\240\346"
	"\202\353\167\207\135\121\031\162\020\256\231\357\215\141\047\271"
	"\124\234\056\245\033\033\332\356\053\143\151\120\243\011\066\045"
	"\364\256\255\122\377\307\304\020\165\136\377\002\277\046\274\024"
	"\303\352\271\337\005\224\315\060\370\067\201\233\100\270\301\065"
	"\146\157\207\146\066\114\166\254\252\165\256\152\234\153\176\140"
	"\125\070\077\133\314\015\214\305\104\015\141\205\305\042\272\054"
	"\221\102\222\310\216\011\164\070\176\043\243\033\216\041\173\343"
	"\131\273\076\046\310\313\353\014\330\114\222\236\157\114\313\001"
	"\216\135\312\035\146\076\126\345\141\371\001\357\032\175\323\163"
	"\070\022\232\001\335\205\016\266\322\240\125\102\354\040\104\173"
	"\175\016\230\344\114\356\312\256\350\313\236\002\110\161\166\201"
	"\203\020\202\163\077\263\000\057\114\013\056"
#define      tst1_z	22
#define      tst1	((&data[329]))
	"\237\264\163\251\071\212\155\352\050\131\306\237\340\223\376\233"
	"\104\164\377\244\044\303\005\154\272\135\011\013\265"
#define      msg1_z	42
#define      msg1	((&data[353]))
	"\355\135\054\230\266\163\335\233\073\224\307\017\207\226\237\136"
	"\100\004\270\326\101\003\301\035\123\346\215\264\312\340\324\105"
	"\275\021\225\125\016\170\160\010\367\223\127\242"
#define      opts_z	1
#define      opts	((&data[397]))
	"\177"
#define      date_z	8
#define      date	((time_t*)(&data[400]))
	"\211\042\117\074\353\043\144\021\003\345\013"
#define      text_z	729
#define      text	((&data[561]))
	"\370\042\027\046\240\022\240\100\306\024\352\000\037\237\007\065"
	"\330\136\327\244\210\151\232\026\001\044\070\015\354\016\032\345"
	"\060\062\013\321\104\253\022\013\277\374\013\337\233\023\024\164"
	"\162\354\030\372\126\262\021\127\327\112\145\304\130\177\251\211"
	"\261\264\133\366\140\155\001\037\151\015\377\005\040\024\171\223"
	"\001\221\216\127\104\237\257\033\351\024\337\102\224\210\314\106"
	"\075\047\074\235\224\076\275\375\113\275\003\154\321\174\377\322"
	"\016\215\052\122\054\331\156\026\356\116\131\202\327\045\310\025"
	"\114\005\262\340\103\160\336\216\055\341\373\376\135\372\321\153"
	"\210\373\276\265\325\055\313\303\171\236\350\114\207\207\040\111"
	"\115\120\327\066\305\077\060\107\333\210\312\131\216\206\327\120"
	"\030\135\003\017\345\125\142\003\053\301\330\054\035\057\231\252"
	"\167\102\034\255\125\162\237\020\353\066\375\232\162\123\140\304"
	"\203\211\314\273\346\304\333\240\332\201\347\122\277\152\255\361"
	"\217\331\064\272\143\267\201\157\230\106\143\365\054\217\261\061"
	"\022\132\144\120\012\166\137\103\300\271\067\000\176\154\066\034"
	"\001\306\377\233\147\170\003\365\017\222\351\331\027\344\251\052"
	"\173\124\265\061\346\075\074\357\053\023\250\164\126\257\307\226"
	"\165\245\160\361\135\002\136\361\045\032\045\203\127\270\343\136"
	"\351\121\215\017\265\060\163\155\150\107\333\354\157\241\317\371"
	"\377\353\036\176\113\213\025\257\056\230\165\173\072\030\363\027"
	"\270\016\052\163\007\207\056\235\107\236\150\331\327\342\357\040"
	"\141\050\023\211\246\202\327\026\232\247\057\376\134\366\044\335"
	"\022\362\060\157\226\235\336\165\167\132\062\066\140\254\037\202"
	"\322\112\360\323\026\304\330\354\372\022\345\233\353\240\216\255"
	"\233\327\251\105\000\051\365\043\206\011\152\252\217\305\346\020"
	"\112\025\263\230\323\021\070\050\252\235\353\137\235\361\323\073"
	"\156\316\315\114\136\325\122\264\002\134\032\250\200\165\056\261"
	"\036\115\043\155\025\112\370\216\171\032\344\116\023\017\272\355"
	"\313\270\023\355\031\140\336\263\003\030\366\335\143\073\163\204"
	"\266\077\316\151\004\012\011\371\135\277\136\063\002\210\262\061"
	"\215\130\034\272\106\216\136\345\342\373\264\265\137\206\123\251"
	"\042\231\131\243\004\066\052\253\064\300\217\026\031\156\232\170"
	"\342\372\125\263\350\230\134\120\305\332\236\244\265\123\067\333"
	"\351\013\165\071\322\241\272\026\214\201\164\335\202\213\374\146"
	"\001\322\376\022\351\362\372\327\025\305\335\343\171\055\255\053"
	"\360\103\236\333\004\220\166\116\372\116\263\203\022\204\077\211"
	"\001\234\273\166\160\264\204\335\341\102\156\063\164\067\211\030"
	"\072\271\040\143\060\200\015\136\317\106\014\241\344\056\174\125"
	"\045\123\205\224\107\247\324\004\031\122\271\043\140\376\011\007"
	"\330\052\122\350\330\301\134\127\207\304\053\353\360\004\003\375"
	"\046\340\352\017\326\355\301\145\301\271\262\224\073\312\250\150"
	"\045\007\316\165\142\217\031\113\366\246\126\147\364\327\333\253"
	"\015\347\117\316\273\301\263\375\246\314\301\212\201\111\016\157"
	"\354\226\106\233\161\013\030\061\322\045\237\067\102\014\377\357"
	"\346\126\063\312\155\027\201\161\223\115\025\277\270\311\002\153"
	"\331\153\017\075\313\365\353\104\342\244\067\206\353\363\361\020"
	"\124\330\027\063\040\061\251\134\016\045\041\040\112\216\322\163"
	"\031\173\024\057\275\110\121\246\310\346\103\050\126\211\017\024"
	"\352\167\126\176\044\160\064\171\352\010\133\330\065\201\036\042"
	"\206\166\122\222\225\026\066\247\105\322\331\270\324\327\333\120"
	"\004\373\166\020\311\241\203\241\152\365\314\052\127\303\102\106"
	"\074\142\126\375\164\237\074\272\116\232\307\073\164\067\362\025"
	"\267\002\230\173\060\072\047\302\072\236\075\350\234\141\314\255"
	"\352\231\055\151\125\060\017\047\203\364\026\027\261\331\136\166"
	"\071\174\044\106\124\111\017\151\225"
#define      shll_z	10
#define      shll	((&data[1298]))
	"\022\113\363\114\157\312\055\013\075\035\127"
#define      chk1_z	22
#define      chk1	((&data[1310]))
	"\271\023\077\207\351\271\272\172\177\246\066\211\333\244\137\017"
	"\366\315\250\363\346\000\036\066\341\270\224\334"
#define      msg2_z	19
#define      msg2	((&data[1337]))
	"\103\205\107\256\011\160\126\112\006\230\147\142\321\136\205\054"
	"\016\161\071\206"
#define      tst2_z	19
#define      tst2	((&data[1357]))
	"\113\212\154\211\045\030\375\271\356\245\254\105\232\071\035\107"
	"\362\275\267\354"
#define      inlo_z	3
#define      inlo	((&data[1377]))
	"\117\245\147"
#define      lsto_z	1
#define      lsto	((&data[1380]))
	"\255"/* End of data[] */;
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
