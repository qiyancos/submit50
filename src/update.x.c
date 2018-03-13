#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./update 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\130"
#define      pswd_z	256
#define      pswd	((&data[17]))
	"\252\056\040\106\004\174\071\050\114\331\006\151\022\341\030\005"
	"\306\100\314\166\252\062\277\350\204\126\363\157\044\226\277\154"
	"\117\125\147\115\127\220\366\202\041\114\244\166\026\270\200\334"
	"\370\114\122\242\177\022\213\003\150\176\163\215\025\063\371\144"
	"\210\141\261\340\361\250\142\022\364\007\211\012\277\011\347\267"
	"\126\071\132\325\113\346\331\264\144\114\101\172\177\073\337\010"
	"\234\221\350\216\071\113\241\056\122\052\071\021\064\041\311\212"
	"\132\043\140\246\012\071\132\157\206\234\351\006\327\310\016\164"
	"\132\367\002\224\102\243\302\225\316\374\247\002\035\160\215\170"
	"\224\356\037\236\047\171\015\255\026\366\263\355\277\302\141\031"
	"\271\143\255\374\007\160\222\325\155\071\330\212\251\146\003\076"
	"\124\042\334\174\234\351\052\262\340\335\240\240\240\001\272\132"
	"\145\147\127\154\330\351\102\105\043\033\320\314\202\324\012\327"
	"\366\347\123\223\321\175\106\262\133\346\122\374\350\014\126\115"
	"\164\256\272\114\227\375\222\272\030\142\207\233\067\222\162\055"
	"\172\306\301\113\103\007\375\237\356\117\233\326\134\362\043\320"
	"\240\335\034\070\333\257\363\363\022\173\217\111\015\001\167\207"
	"\325\052\201\144\164\216\146\353\026\056\043\351\071\143\272\344"
	"\222\332\053\227\126\144\277\243\076\306\014\120\247\045\126\175"
	"\120\327\341\304\146\110\257\175\166\323\147\260\066\041\224\311"
	"\374\277\140\122"
#define      date_z	8
#define      date	((time_t*)(&data[328]))
	"\142\346\002\041\045\061\351\001\073\136\011\263\216"
#define      shll_z	10
#define      shll	((&data[338]))
	"\054\365\220\303\003\117\154\174\146\363"
#define      tst1_z	22
#define      tst1	((&data[353]))
	"\074\110\065\353\306\264\060\174\143\262\323\174\000\074\216\370"
	"\112\026\121\271\072\224\217\311\256\163\274\253\276\056\133\365"
#define      inlo_z	3
#define      inlo	((&data[380]))
	"\014\114\173"
#define      xecc_z	15
#define      xecc	((&data[385]))
	"\237\324\145\062\206\325\152\072\056\251\046\346\343\261\154\003"
	"\161"
#define      lsto_z	1
#define      lsto	((&data[400]))
	"\245"
#define      chk1_z	22
#define      chk1	((&data[404]))
	"\265\277\364\274\222\251\153\154\144\002\144\001\153\171\111\026"
	"\057\316\275\367\306\215\365\350\113\300\067\325\255\163"
#define      msg1_z	42
#define      msg1	((&data[440]))
	"\345\216\036\023\351\023\143\332\323\206\223\066\206\033\145\312"
	"\001\150\057\057\110\122\123\257\203\174\160\242\331\136\164\166"
	"\253\256\254\104\330\247\127\130\113\116\123\336\152\323\147\270"
	"\072\031\104\257\212\363\117"
#define      msg2_z	19
#define      msg2	((&data[487]))
	"\225\130\237\044\102\062\052\223\234\270\133\204\274\023\221\344"
	"\257\150\131\052\132\173\177\017"
#define      rlax_z	1
#define      rlax	((&data[510]))
	"\173"
#define      text_z	125
#define      text	((&data[520]))
	"\346\147\137\106\115\355\144\140\327\072\023\202\171\233\104\142"
	"\175\163\312\366\310\375\117\146\352\205\017\333\253\376\167\231"
	"\127\257\217\347\366\230\052\063\245\135\245\372\252\003\363\363"
	"\064\346\231\041\177\327\205\342\122\015\114\153\365\067\134\205"
	"\141\015\333\006\304\132\365\377\052\244\363\167\374\315\256\374"
	"\072\303\175\064\031\362\336\127\246\360\312\156\133\126\042\244"
	"\367\127\317\272\272\367\341\342\010\116\075\272\110\352\344\170"
	"\237\052\253\111\150\236\077\144\303\345\111\131\004\135\105\140"
	"\166\366\216\346\006\066\170\303\261\113\163\073\076\302\232\162"
	"\246\057\314\042\256"
#define      tst2_z	19
#define      tst2	((&data[661]))
	"\253\326\273\166\261\101\210\260\222\070\276\363\232\040\335\073"
	"\151\106\176\361"
#define      chk2_z	19
#define      chk2	((&data[682]))
	"\267\322\235\354\372\307\063\022\010\333\324\100\313\212\163\341"
	"\057\130\376\115\175"/* End of data[] */;
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
