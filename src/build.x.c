#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[3]))
	"\310\250\222\255\266\357\200\203\133\357\225\242\262\304\273\161"
	"\213\106\177\307\163\361\362\053\030\001"
#define      tst2_z	19
#define      tst2	((&data[27]))
	"\265\304\150\344\345\102\213\033\270\363\151\333\326\016\035\361"
	"\107\350\273\161\310"
#define      inlo_z	3
#define      inlo	((&data[47]))
	"\054\145\113"
#define      chk2_z	19
#define      chk2	((&data[52]))
	"\211\141\146\102\345\311\025\220\302\377\364\203\130\012\066\001"
	"\204\173\156\030\127\330\246"
#define      msg1_z	42
#define      msg1	((&data[77]))
	"\221\050\255\057\103\122\034\302\317\362\020\366\122\166\030\066"
	"\344\114\012\204\055\051\106\067\022\251\174\152\050\235\105\337"
	"\150\203\262\117\212\221\336\301\123\156\157\005\340\360\311"
#define      rlax_z	1
#define      rlax	((&data[120]))
	"\034"
#define      shll_z	10
#define      shll	((&data[123]))
	"\122\353\065\223\344\337\320\260\011\265\307\137\174"
#define      opts_z	1
#define      opts	((&data[134]))
	"\102"
#define      tst1_z	22
#define      tst1	((&data[137]))
	"\352\137\125\016\273\023\231\034\306\361\155\142\214\267\000\355"
	"\103\213\353\355\261\335\331\302\367\124\351"
#define      xecc_z	15
#define      xecc	((&data[162]))
	"\262\352\300\370\246\211\310\252\205\310\017\232\342\137\124\163"
	"\224"
#define      text_z	357
#define      text	((&data[180]))
	"\130\220\174\125\270\335\324\274\056\055\337\151\076\230\034\010"
	"\032\041\151\152\144\104\036\042\250\102\361\132\161\216\110\140"
	"\331\024\256\325\153\124\012\375\055\372\302\047\203\234\375\264"
	"\140\352\023\137\262\227\330\100\162\330\164\141\061\255\023\354"
	"\265\010\045\252\177\274\336\031\064\160\015\106\016\152\324\067"
	"\223\177\306\220\275\163\165\310\133\343\175\225\305\125\171\312"
	"\360\121\131\227\247\350\240\154\066\053\267\060\061\131\021\121"
	"\172\061\026\077\116\072\053\164\012\362\216\057\331\063\076\054"
	"\247\173\324\104\003\232\240\003\111\335\114\341\233\155\360\352"
	"\356\200\241\257\375\201\022\035\043\260\241\072\035\327\127\377"
	"\004\236\373\043\271\002\016\231\306\254\333\124\176\043\240\260"
	"\204\300\272\263\245\102\017\025\366\071\375\366\242\115\052\127"
	"\076\206\327\047\252\054\023\003\163\234\376\054\015\234\300\250"
	"\344\103\033\114\156\070\332\115\321\275\370\116\154\243\153\324"
	"\155\176\125\071\052\322\024\066\311\334\014\027\022\216\142\252"
	"\144\220\334\266\106\220\062\250\052\176\316\376\036\056\157\134"
	"\166\212\155\337\107\063\152\114\236\054\023\115\242\363\241\175"
	"\016\262\010\221\153\111\246\332\164\206\234\063\063\117\032\171"
	"\257\354\303\316\233\306\061\273\303\366\320\322\367\115\027\147"
	"\277\172\271\133\150\204\260\207\210\312\112\173\307\071\126\024"
	"\072\266\004\113\151\102\317\315\041\130\021\341\155\324\114\270"
	"\121\151\031\244\372\111\131\372\276\256\035\304\211\247\032\175"
	"\120\000\074\370\345\353\064\206\377\054\371\071\027\227\213\002"
	"\024\100\057\107\276\255\322\251\014\312\376\366\044\053\205\227"
	"\300\060\234\175\211\321\004\210\375\375\301\025\225\115\030\252"
	"\215\107\361\114\365\304\366\002\217\364\370\263\037\176\112\340"
	"\256\347\135\067\270\141\300\266"
#define      lsto_z	1
#define      lsto	((&data[603]))
	"\330"
#define      pswd_z	256
#define      pswd	((&data[656]))
	"\237\135\053\221\252\040\125\240\042\344\224\032\227\264\230\342"
	"\224\107\312\361\177\203\123\100\071\263\302\005\250\222\351\107"
	"\360\024\331\232\065\056\072\127\023\317\162\253\203\013\216\030"
	"\123\130\012\322\001\131\133\253\370\073\002\034\253\015\272\300"
	"\360\234\070\227\107\013\254\070\201\331\344\356\150\246\331\323"
	"\024\005\312\026\137\045\301\127\141\303\164\014\321\057\314\301"
	"\314\005\131\023\020\006\113\222\340\060\201\110\327\132\034\353"
	"\137\346\001\276\014\302\026\155\206\213\172\127\272\107\031\206"
	"\114\162\232\135\171\346\360\131\026\161\242\355\313\276\330\053"
	"\245\332\351\262\235\000\040\044\213\232\174\105\341\225\314\056"
	"\010\146\213\201\114\173\333\142\355\175\117\270\073\050\343\341"
	"\003\315\223\240\315\263\304\130\116\100\235\060\326\151\136\336"
	"\320\352\140\034\146\073\176\123\271\316\014\364\367\357\325\372"
	"\275\151\232\212\035\137\342\153\237\200\234\166\352\373\125\272"
	"\345\265\327\114\361\125\240\253\044\254\237\033\234\165\026\131"
	"\337\260\344\374\020\306\147\257\107\004\046\062\377\173\355\344"
	"\061\304\061\042\032\321\316\076\175\155\132\032\343\160\163\302"
	"\041\127\276\061\036\046\341\146\052\007\230\051\202\206\016\263"
	"\112\077\326\145\021\244\243\216\022\375\251\365\156\034\270\217"
	"\164\167\300\222\333\136\023\025\021\325\033\271\150\004\001\130"
	"\031\332\363\117\010\055\247\034\375\031\307\201\045\125\231\170"
	"\255\244\113\211\002\136\236\023\064\271\314\235\276\315\365\330"
	"\247\351\047\260\027\316\314\024\347\224\225\015\351"
#define      date_z	8
#define      date	((time_t*)(&data[976]))
	"\323\321\040\325\060\277\350\224\155\275\242\242\170\217\004\144"
#define      chk1_z	22
#define      chk1	((&data[989]))
	"\067\202\370\017\136\136\046\076\160\204\232\105\315\316\105\200"
	"\105\134\125\032\201\310\375\057\371\126"/* End of data[] */;
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
