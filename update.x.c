#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -T -r -f ./update 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[1]))
	"\050\101\335\225\346\014\357\067\126\163\147\004"
#define      xecc_z	15
#define      xecc	((&data[15]))
	"\145\372\335\051\377\007\034\103\222\000\320\362\372\205\016\237"
	"\271\124\067\053"
#define      pswd_z	256
#define      pswd	((&data[33]))
	"\147\210\263\116\142\316\166\020\304\045\111\320\362\354\352\322"
	"\255\072\054\132\110\341\126\236\201\346\271\022\153\324\242\130"
	"\135\125\246\277\043\035\317\350\103\030\270\066\005\243\010\263"
	"\336\065\016\047\026\145\305\230\113\177\252\267\123\114\017\261"
	"\242\266\160\306\324\100\256\030\130\147\116\136\013\127\022\351"
	"\214\041\020\243\206\326\073\321\125\346\211\251\063\230\132\325"
	"\116\313\234\043\013\112\073\144\262\211\302\275\340\325\246\155"
	"\366\267\020\174\216\114\116\343\063\327\215\146\157\350\074\276"
	"\264\330\341\277\043\035\043\325\246\346\222\207\273\071\365\261"
	"\360\006\055\177\122\174\142\206\123\360\354\303\331\050\201\215"
	"\001\143\114\045\201\160\372\050\126\215\257\022\306\244\303\267"
	"\252\361\066\375\155\231\203\301\212\160\204\143\231\006\361\232"
	"\152\075\277\353\256\272\023\005\110\303\027\017\150\333\306\023"
	"\315\375\020\073\227\224\374\041\004\200\205\236\207\166\071\361"
	"\264\370\335\142\263\361\147\373\264\177\012\035\132\321\060\047"
	"\317\101\142\146\326\136\210\333\337\015\171\147\204\262\131\071"
	"\253\155\102\306\365\035\246\003\227\016\210\111\147\301\364\236"
	"\135\123\306\141\256\244\345\024\237\303\113\312"
#define      opts_z	1
#define      opts	((&data[316]))
	"\276"
#define      date_z	1
#define      date	((&data[317]))
	"\131"
#define      chk2_z	19
#define      chk2	((&data[321]))
	"\235\270\056\036\000\340\306\232\367\160\366\173\102\356\023\025"
	"\335\233\246\027\370\042\253\100"
#define      tst1_z	22
#define      tst1	((&data[342]))
	"\247\257\203\342\231\222\342\203\332\020\337\056\007\157\011\335"
	"\000\206\275\213\156\220"
#define      lsto_z	1
#define      lsto	((&data[364]))
	"\105"
#define      text_z	410
#define      text	((&data[413]))
	"\157\034\245\203\273\150\317\206\061\041\275\141\340\066\130\225"
	"\316\366\115\375\241\215\165\264\216\343\146\355\244\337\256\023"
	"\374\124\227\270\275\146\076\356\210\373\120\150\062\250\375\000"
	"\236\017\127\214\077\245\362\276\153\060\203\336\021\223\353\064"
	"\160\256\125\007\004\155\110\172\217\115\076\102\254\237\030\054"
	"\003\072\006\260\253\067\142\011\220\351\224\350\033\304\262\256"
	"\043\315\243\060\051\135\343\254\110\177\061\000\066\263\143\310"
	"\370\364\377\327\223\373\016\332\334\053\054\052\204\136\143\301"
	"\355\023\073\145\164\053\055\074\371\022\256\105\216\250\027\170"
	"\267\057\031\247\351\333\101\156\302\205\367\000\375\362\231\105"
	"\137\332\006\275\015\316\034\377\350\310\363\121\367\313\257\123"
	"\314\062\340\304\310\230\213\373\367\313\270\347\124\300\027\125"
	"\004\117\206\301\352\102\102\023\347\077\273\203\271\001\006\164"
	"\020\131\064\344\142\332\212\057\132\106\144\137\237\150\304\015"
	"\153\242\350\134\150\007\257\015\160\237\203\155\001\123\352\261"
	"\343\304\356\124\327\010\254\221\207\146\141\031\103\034\024\200"
	"\202\377\340\052\061\175\221\360\320\047\056\240\276\265\365\343"
	"\355\245\261\214\074\300\155\174\010\366\000\345\165\371\233\302"
	"\027\272\216\247\364\060\043\177\063\025\143\026\060\020\065\352"
	"\236\217\373\046\241\274\332\212\230\077\133\106\240\145\217\374"
	"\217\273\206\010\267\370\342\150\100\116\371\327\212\066\373\350"
	"\271\064\227\040\321\005\131\372\236\062\111\113\323\060\371\165"
	"\151\216\077\263\263\141\125\163\156\035\234\026\160\136\017\107"
	"\141\050\043\224\360\043\260\063\024\376\020\131\271\103\311\206"
	"\163\005\315\147\162\170\233\111\155\351\064\174\317\032\342\262"
	"\055\275\216\137\205\054\035\171\016\026\172\235\276\043\252\274"
	"\227\115\357\231\173\123\025\266\075\301\224\050\335\000\205\106"
	"\217\304\063\005\356\072\307\367\145\104\205\374\160\312\026\323"
	"\101\175\274\154\303\344\115\107\161\137\236\112\376\100\330\164"
	"\365\146\127\133\124\373\072\003\017\066\127\247\356\025\016\055"
	"\003\226\050\123\377\132\374\374\133\232\107\131\333\037\315\320"
	"\206\044\053\333\040\146\336\060\235\066\327\214\113\345\271\117"
	"\173\342\242\172\075\237\167\230\072\277\362\025\337\277\345\146"
	"\344\021\101\005\170\040\065"
#define      msg1_z	42
#define      msg1	((&data[903]))
	"\242\242\361\121\356\121\241\132\302\027\232\226\046\102\360\104"
	"\224\024\071\164\050\052\201\012\152\332\346\134\373\026\020\370"
	"\357\057\057\054\215\274\255\366\303\156\111\202\167"
#define      chk1_z	22
#define      chk1	((&data[950]))
	"\076\224\350\173\063\001\023\016\167\001\043\205\077\334\164\353"
	"\234\231\202\330\111\311\310\076\057\322\242\137\024"
#define      msg2_z	19
#define      msg2	((&data[974]))
	"\017\176\126\067\342\370\244\174\235\302\270\260\132\113\205\155"
	"\256\146\130"
#define      rlax_z	1
#define      rlax	((&data[993]))
	"\155"
#define      tst2_z	19
#define      tst2	((&data[995]))
	"\172\002\106\073\055\013\320\176\330\012\373\336\345\116\013\310"
	"\160\133\137\141\246\257\362"
#define      inlo_z	3
#define      inlo	((&data[1017]))
	"\223\174\005"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

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
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

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
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
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
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
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
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
