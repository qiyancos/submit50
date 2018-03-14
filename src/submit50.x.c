#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      pswd_z	256
#define      pswd	((&data[54]))
	"\275\205\206\210\301\206\315\147\261\303\373\001\226\156\012\162"
	"\114\006\367\142\177\113\326\101\303\323\054\174\333\002\111\231"
	"\207\320\041\111\126\357\260\010\262\254\011\111\032\023\273\147"
	"\031\263\311\231\376\240\061\350\112\360\036\354\302\201\046\034"
	"\276\156\070\147\272\124\033\335\231\320\326\054\011\011\132\012"
	"\250\112\101\312\304\162\262\016\143\321\373\046\123\042\102\021"
	"\220\173\171\113\317\224\051\150\145\000\225\156\011\360\171\261"
	"\073\272\174\377\055\057\016\220\000\012\266\124\055\371\145\275"
	"\164\337\011\103\164\062\254\331\062\102\110\074\063\301\356\156"
	"\174\152\156\251\231\174\072\232\207\361\356\264\352\124\162\136"
	"\063\173\242\247\256\117\200\340\221\311\035\304\212\013\062\006"
	"\166\240\260\017\035\352\252\244\333\230\131\305\354\313\043\040"
	"\107\306\310\365\025\111\326\246\022\363\153\234\377\235\243\165"
	"\076\123\205\134\075\057\001\031\307\132\336\264\045\002\325\155"
	"\310\235\142\335\346\070\204\370\053\357\225\053\215\070\240\313"
	"\213\045\047\311\125\051\342\035\203\301\321\251\303\247\026\214"
	"\104\170\152\053\261\356\044\335\336\271\010\153\362\251\067\176"
	"\316\137\107\044\210\051\101\013\353\023\265\257\272\313\073\377"
	"\104\246\053\365\224\117\323\162\011\333\336\373\204\025\171\123"
	"\164\301\170\374\353\271\332\302\163\006\077\117\011\210\350\221"
	"\130\012\332\257\372\212\267\254\066\300\366\121\323\262\270\355"
	"\145\202\206\144\043\141\047\226\150\146\346\161\356\317\002\107"
	"\331\334\366\323\147\256\200\235\156"
#define      lsto_z	1
#define      lsto	((&data[361]))
	"\352"
#define      date_z	8
#define      date	((time_t*)(&data[368]))
	"\216\052\267\362\115\030\354\134\156\125\222\272\156\123"
#define      msg1_z	42
#define      msg1	((&data[385]))
	"\200\313\362\157\232\364\266\164\321\151\220\105\252\100\043\114"
	"\040\265\360\321\244\175\240\274\224\045\056\012\146\070\224\003"
	"\036\345\205\061\122\312\342\311\357\362\327\235\313\252\061\301"
	"\115\017\337\255\110\070\134\310"
#define      text_z	727
#define      text	((&data[576]))
	"\305\015\150\155\076\366\230\365\351\346\015\003\312\216\204\226"
	"\200\363\060\165\252\245\106\130\355\177\264\266\125\177\365\033"
	"\215\136\211\313\124\041\301\076\007\316\102\322\135\306\150\336"
	"\271\231\124\143\077\233\273\054\032\160\343\160\360\331\213\175"
	"\067\024\111\214\066\012\312\075\331\015\020\067\323\171\025\214"
	"\022\151\360\122\005\254\176\037\034\142\217\014\073\033\212\162"
	"\060\324\377\146\336\312\244\267\327\264\356\252\055\004\067\100"
	"\156\047\222\163\323\021\223\360\163\043\375\257\077\207\042\157"
	"\133\041\326\072\353\173\362\303\060\341\155\136\345\244\236\124"
	"\035\071\344\032\265\072\054\111\265\346\162\210\200\330\160\167"
	"\052\260\044\243\012\215\074\163\041\136\044\363\051\051\330\161"
	"\044\040\176\052\332\222\023\137\062\364\324\272\030\147\250\337"
	"\104\117\055\345\072\355\124\052\211\357\345\235\153\001\031\161"
	"\362\206\140\015\343\213\014\373\330\100\072\047\332\325\306\077"
	"\111\154\170\074\121\011\167\046\276\046\205\003\073\111\262\266"
	"\354\101\362\254\123\303\376\317\250\374\054\131\267\246\251\042"
	"\200\072\076\254\061\116\252\206\277\062\112\003\227\122\040\012"
	"\344\114\323\245\224\205\374\204\223\145\301\203\061\172\013\107"
	"\342\166\324\170\015\340\077\262\335\233\165\364\162\157\200\311"
	"\354\262\352\175\000\262\101\000\304\003\133\163\246\157\121\320"
	"\343\177\132\013\136\214\246\363\127\257\367\025\151\253\011\372"
	"\002\037\017\130\047\337\156\211\305\306\170\023\114\110\020\336"
	"\320\201\301\256\344\356\313\222\256\314\124\311\163\324\120\267"
	"\215\127\267\304\140\326\041\363\250\226\376\160\266\310\202\170"
	"\141\020\252\221\364\217\126\157\207\200\315\210\305\374\157\047"
	"\035\361\304\313\276\124\073\120\270\273\037\275\147\351\064\202"
	"\101\114\103\176\001\377\054\033\237\332\026\253\275\331\136\052"
	"\372\105\160\361\236\134\353\255\257\126\307\243\372\302\142\004"
	"\313\220\032\354\164\067\117\161\153\046\254\317\077\000\171\063"
	"\120\031\005\070\050\205\177\046\063\204\216\041\246\323\342\143"
	"\320\126\143\075\364\072\035\230\012\312\023\263\171\035\255\123"
	"\160\237\247\374\311\326\150\130\374\255\363\117\032\365\234\165"
	"\001\020\035\327\326\307\173\052\040\326\365\214\371\264\116\350"
	"\357\245\302\154\045\263\131\211\364\156\233\306\030\161\077\214"
	"\207\335\337\247\135\274\312\155\376\342\173\345\142\234\007\266"
	"\032\074\105\326\311\000\060\033\136\043\224\030\137\314\353\033"
	"\024\365\303\043\114\045\155\106\245\064\143\377\070\345\373\271"
	"\020\256\052\027\042\176\060\052\124\171\126\235\214\312\351\214"
	"\107\335\300\070\020\105\127\174\147\353\240\153\010\356\265\100"
	"\053\212\337\053\235\144\300\264\061\116\223\027\055\025\271\135"
	"\125\357\120\325\056\112\356\256\214\254\364\371\026\314\261\255"
	"\013\355\166\166\056\331\336\376\065\341\310\232\232\213\362\043"
	"\040\034\067\210\235\271\350\223\332\200\173\324\164\016\032\273"
	"\164\227\167\037\256\255\013\146\201\002\107\032\331\311\120\302"
	"\105\356\137\073\264\160\025\342\042\302\333\326\376\303\112\270"
	"\247\222\231\355\026\347\235\167\325\153\166\025\175\367\056\230"
	"\300\366\276\311\320\016\275\141\010\155\005\341\164\337\122\127"
	"\276\353\171\312\323\071\130\257\124\351\171\127\050\173\011\011"
	"\371\052\224\027\012\030\152\270\060\021\211\306\225\133\303\272"
	"\122\123\036\010\105\270\303\131\136\061\164\152\320\340\200\170"
	"\104\146\027\371\021\250\164\053\236\301\272\075\333\314\365\003"
	"\140\312\267\061\261\101\032\216\005\277\144\267\341\364\240\140"
	"\214\210\173\207\320\374\252\227\205\103\041\124\240\064\326\227"
	"\053\105\354\004\220\154\252\217\266\223\312\042\312\135\347\243"
	"\056\257\024\343\014\107\065\313\061\310\237\103\133\217\267\176"
	"\215\146\275\024\210\055\160\252\004\253\226\177\235\131\257\176"
	"\307\015\144\154\254\270\070\336\201\327\041\335\147\330\133\364"
	"\077\031\011\310"
#define      inlo_z	3
#define      inlo	((&data[1348]))
	"\246\050\220"
#define      xecc_z	15
#define      xecc	((&data[1351]))
	"\351\352\026\042\071\014\035\074\102\271\331\207\353\344\364"
#define      opts_z	1
#define      opts	((&data[1366]))
	"\022"
#define      tst1_z	22
#define      tst1	((&data[1368]))
	"\211\257\210\334\253\165\143\304\162\152\311\343\101\221\305\107"
	"\227\240\206\103\322\177\351\245"
#define      chk1_z	22
#define      chk1	((&data[1392]))
	"\316\031\341\343\257\265\156\153\157\146\330\202\062\257\161\336"
	"\152\265\165\213\044\145\024\024\337"
#define      msg2_z	19
#define      msg2	((&data[1417]))
	"\015\022\312\033\235\261\326\055\361\203\216\265\322\027\051\021"
	"\006\370\112\042\016\030\002"
#define      rlax_z	1
#define      rlax	((&data[1439]))
	"\224"
#define      shll_z	10
#define      shll	((&data[1441]))
	"\210\227\155\363\101\126\021\154\114\207\273\306"
#define      tst2_z	19
#define      tst2	((&data[1454]))
	"\156\365\307\157\261\223\357\212\146\347\276\015\256\042\100\000"
	"\266\245\031\313\373\015\260"
#define      chk2_z	19
#define      chk2	((&data[1477]))
	"\267\315\172\353\335\205\312\117\021\014\351\105\104\154\373\076"
	"\011\033\375\025\252\264"/* End of data[] */;
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
