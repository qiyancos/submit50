#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./install 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[4]))
	"\277\265\002\124\140\040\046\152\317\141\374\232\053\102\146\012"
	"\306\266\152\250\023\246\314\162\212\147\003\275\356\215"
#define      inlo_z	3
#define      inlo	((&data[30]))
	"\267\304\076"
#define      lsto_z	1
#define      lsto	((&data[33]))
	"\023"
#define      msg1_z	42
#define      msg1	((&data[38]))
	"\027\047\006\116\340\236\106\275\221\335\122\256\127\255\012\345"
	"\204\171\141\311\167\040\340\050\372\241\354\177\355\152\213\011"
	"\255\205\051\216\334\141\014\144\151\060\237\212\050\104\343\255"
	"\240\235\321\357"
#define      date_z	8
#define      date	((time_t*)(&data[88]))
	"\354\014\370\047\205\066\163\262\016\004\135"
#define      chk2_z	19
#define      chk2	((&data[98]))
	"\255\377\246\270\377\327\161\000\316\324\173\146\311\211\325\365"
	"\301\076\216\154\117"
#define      tst2_z	19
#define      tst2	((&data[122]))
	"\024\137\161\215\201\356\357\141\336\322\355\174\107\051\351\352"
	"\326\062\335\264\156\165\354\162\334"
#define      shll_z	10
#define      shll	((&data[144]))
	"\061\047\106\347\106\171\313\237\226\120\011"
#define      text_z	618
#define      text	((&data[294]))
	"\170\205\261\147\253\376\017\230\012\155\207\154\316\065\274\275"
	"\050\062\321\210\243\137\372\200\213\204\204\275\134\154\234\325"
	"\361\116\075\235\114\115\065\127\272\274\303\211\361\200\106\032"
	"\262\030\242\125\167\235\325\003\041\132\300\176\307\134\123\270"
	"\253\221\126\367\336\213\117\231\110\023\043\072\223\151\124\106"
	"\202\366\234\372\223\162\375\265\314\275\064\223\032\210\114\305"
	"\031\242\275\367\055\015\221\165\040\264\257\264\036\004\372\240"
	"\372\226\232\216\010\230\104\325\125\170\151\160\000\265\065\031"
	"\130\363\021\206\000\242\374\041\126\254\325\164\367\047\267\316"
	"\207\362\341\054\356\314\061\030\366\105\361\375\005\076\312\370"
	"\135\353\332\133\215\236\211\135\166\075\074\376\042\131\257\212"
	"\016\156\355\217\046\361\270\272\063\220\055\021\264\011\016\045"
	"\120\264\235\151\263\115\314\147\041\247\164\051\207\105\340\262"
	"\103\352\126\071\061\123\141\116\207\031\041\027\036\154\062\163"
	"\172\335\347\052\310\253\311\310\340\120\053\240\126\114\343\321"
	"\206\356\007\367\233\032\104\067\366\240\231\113\034\074\002\247"
	"\130\226\156\263\111\032\331\040\340\267\320\217\371\274\234\351"
	"\027\274\147\265\157\271\174\212\216\307\006\244\130\207\302\247"
	"\344\214\011\141\377\132\272\074\217\314\076\012\314\303\051\300"
	"\255\256\333\214\007\033\050\365\335\166\154\045\317\167\226\274"
	"\073\076\004\020\323\052\067\206\054\016\044\355\121\025\352\174"
	"\323\306\237\245\202\234\340\324\263\124\040\357\210\344\263\247"
	"\223\236\273\334\136\227\254\303\062\123\302\255\025\352\212\054"
	"\300\120\061\251\244\255\172\131\056\340\125\317\136\242\040\171"
	"\311\101\362\340\374\111\262\356\374\202\307\024\072\176\325\307"
	"\244\251\000\254\010\354\253\354\363\132\004\246\321\303\016\330"
	"\064\374\022\077\021\072\345\166\173\071\330\241\017\206\006\043"
	"\124\343\340\267\362\124\072\250\103\233\021\347\204\073\121\254"
	"\242\374\064\175\165\072\342\147\032\000\205\031\175\373\371\070"
	"\257\020\251\277\072\051\325\264\340\301\131\356\326\126\125\247"
	"\344\326\245\040\253\125\225\321\001\075\004\124\251\331\014\321"
	"\227\304\031\264\103\020\147\276\324\107\233\265\171\134\374\115"
	"\042\225\217\274\333\357\067\035\365\347\260\126\340\101\071\254"
	"\253\101\242\251\025\203\310\147\367\164\316\167\330\245\347\332"
	"\061\041\350\026\034\157\203\146\162\336\037\220\215\206\206\036"
	"\247\316\134\056\220\177\176\041\011\263\151\151\227\030\254\147"
	"\106\146\072\167\070\206\002\043\256\273\131\035\341\130\320\076"
	"\245\151\364\122\141\165\217\102\202\360\234\173\154\164\155\337"
	"\141\055\271\323\046\205\041\247\237\101\224\376\026\231\113\200"
	"\246\362\233\234\067\074\156\262\173\263\222\206\371\067\327\000"
	"\132\125\304\334\154\227\300\274\257\055\306\231\374\342\076\051"
	"\325\015\226\144\001\351\304\174\055\110\102\313\341\043\271\266"
	"\016\274\167\057\334\102\124\210\327\254\304\130\343\275\357\165"
	"\326\000\025\252\171\047\102\247\126\032\130\257\175\225\010\175"
	"\335\242\110\147\335\110\304\277\170\000\306\007\351\133\324\064"
	"\243\315\224\023\101\224\100\241\307\336\075\202\033\356\350\321"
	"\317\133\214\120\032\360\340\352\363\332\343\171\155\227\012\104"
	"\123\271\057\063\154\304\260\320\025\253\147\257\072\157\110\176"
	"\105\235\366\256\015\367\143\103\020\274\067\042\102\070\304\076"
	"\131\033\353\057\220\233\000\245\107\147\125\201\327\235\377\034"
	"\072\366\312\110\356\056\214\377\353\304\041\055\374\346\154\126"
	"\001\127\205\221\363\205\066\072\355\213\273\304\050\273\341\143"
	"\262\253\254\240\332\071\237\305\375\301\363\371\247\140\120\251"
	"\267\325\073\253\133\162\345\111\375\241\015\046\135\356\212\017"
	"\232\067\260\165\160\120\073\155\022\056\147\271\216\267\143\106"
	"\215\236\361\351\020\327\062\016\170\100\065\326\057"
#define      opts_z	1
#define      opts	((&data[1047]))
	"\237"
#define      pswd_z	256
#define      pswd	((&data[1086]))
	"\147\347\172\325\371\250\074\263\067\364\026\175\201\264\157\152"
	"\305\106\235\323\277\335\010\225\014\310\173\326\277\022\025\047"
	"\372\217\374\363\067\070\152\267\372\165\076\040\352\065\164\363"
	"\262\234\372\062\307\112\024\107\370\000\350\353\022\367\205\344"
	"\323\137\243\321\100\015\211\072\203\310\132\155\376\316\141\260"
	"\153\134\343\062\247\370\172\237\371\142\213\013\131\021\360\055"
	"\160\223\377\261\241\210\353\045\121\106\223\117\025\364\000\201"
	"\121\343\264\370\334\056\230\325\221\044\341\353\065\321\031\245"
	"\145\030\127\006\241\102\053\362\211\276\102\237\263\102\040\005"
	"\046\324\375\002\003\225\330\224\272\271\200\357\212\231\225\357"
	"\261\354\366\123\057\041\106\271\340\210\130\224\312\171\231\360"
	"\115\227\363\121\055\313\345\347\204\145\327\016\377\155\376\261"
	"\131\364\004\211\026\112\102\367\322\233\214\235\024\046\216\142"
	"\275\201\263\353\115\231\323\321\377\252\340\376\027\337\257\161"
	"\323\263\373\351\376\076\341\321\331\155\156\356\223\375\120\120"
	"\177\004\074\314\235\017\236\235\271\177\233\321\136\113\103\061"
	"\377\076\033\375\175\374\317\126\151\076\104\374\073\225\115\273"
	"\231\211\210\067\231\046\324\122\246\160\044\004\274\150\066\273"
	"\247\122\271\044\116\210\247\156\054\275\354\256\162\133\030\067"
	"\241\265\012\140\223\023"
#define      xecc_z	15
#define      xecc	((&data[1360]))
	"\162\165\202\111\052\143\021\276\113\113\066\353\246\004\375\167"
	"\173\233\204\213"
#define      chk1_z	22
#define      chk1	((&data[1380]))
	"\276\162\020\241\046\116\013\210\043\221\032\215\260\274\205\077"
	"\006\126\155\212\310\074\325\347"
#define      msg2_z	19
#define      msg2	((&data[1406]))
	"\301\044\327\255\265\322\120\163\067\042\225\142\324\016\267\076"
	"\344\106\344\361\300\012\014"
#define      rlax_z	1
#define      rlax	((&data[1425]))
	"\246"/* End of data[] */;
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
