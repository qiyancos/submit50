#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[0]))
	"\307\235\313\164\045\313\015\001\372\042\202\236\341\106\273\322"
	"\245\272\157\177\137\075\054"
#define      chk2_z	19
#define      chk2	((&data[24]))
	"\214\137\204\262\107\061\034\163\106\064\214\077\205\124\274\126"
	"\273\066\374\060"
#define      chk1_z	22
#define      chk1	((&data[45]))
	"\245\065\022\334\245\160\101\142\364\267\270\212\174\202\066\321"
	"\221\202\034\264\210\303\004\117"
#define      opts_z	1
#define      opts	((&data[67]))
	"\250"
#define      msg2_z	19
#define      msg2	((&data[70]))
	"\051\331\111\340\023\014\165\237\271\074\345\317\032\030\062\217"
	"\014\310\003\232\325"
#define      pswd_z	256
#define      pswd	((&data[147]))
	"\210\320\222\156\257\277\151\056\037\246\133\033\352\204\247\174"
	"\366\312\041\054\214\267\353\025\074\003\076\026\345\046\002\156"
	"\366\225\334\246\124\105\325\163\354\060\216\326\264\066\122\253"
	"\001\164\327\215\054\303\242\151\306\341\035\030\065\230\372\224"
	"\145\137\270\250\301\237\131\116\135\137\014\213\315\173\017\132"
	"\246\153\135\114\324\060\322\117\207\357\150\274\207\143\121\354"
	"\302\012\224\204\251\356\323\006\116\337\222\033\133\242\165\001"
	"\016\323\116\343\004\040\062\213\017\233\110\226\376\231\202\301"
	"\243\027\105\114\006\030\123\124\370\346\157\123\210\345\124\226"
	"\271\242\171\275\303\254\110\322\107\220\151\106\052\354\007\316"
	"\004\114\033\012\145\157\136\135\125\316\260\335\264\005\164\155"
	"\250\356\052\153\233\163\076\343\004\247\051\057\223\060\375\227"
	"\175\031\241\342\210\000\077\335\317\357\273\204\365\060\362\235"
	"\036\035\010\272\220\106\235\225\356\306\304\201\367\302\031\164"
	"\333\273\126\144\274\226\101\214\206\375\020\173\055\002\030\114"
	"\037\041\006\260\150\244\105\126\152\012\330\142\315\361\326\251"
	"\254\055\015\150\303\117\365\111\114\005\304\172\010\334\306\050"
	"\376\315\330\146\161\036\274\334\051\224\076\366\206\025\237\062"
	"\102\255\233\005\374\220\116\111\226\023\303\236\360\212\307\356"
	"\130\240\125\311\276\021\246\350\246\345\200\254\007\202\032\376"
	"\027\366\244\154\074\171\340\050\252\157\377\137\245\121\012\246"
	"\306\341\064\362\244\327\133\153\270\333\030\277\136\062\276\166"
	"\051\142\342\145\334\302\216\206\061\215\345\327\337\357\176\245"
	"\321\262\227\166\211"
#define      msg1_z	42
#define      msg1	((&data[471]))
	"\317\372\002\056\054\300\244\126\042\272\327\127\025\350\122\273"
	"\021\366\036\010\364\142\001\161\262\351\137\226\373\367\177\050"
	"\040\361\302\371\010\205\302\052\112\121\226\373\235\316\102\312"
	"\156\200\051\206\273"
#define      date_z	8
#define      date	((time_t*)(&data[520]))
	"\205\173\327\152\123\043\101\374\260\107\164\014\171"
#define      rlax_z	1
#define      rlax	((&data[528]))
	"\374"
#define      xecc_z	15
#define      xecc	((&data[529]))
	"\143\252\003\006\374\130\245\256\072\000\065\124\141\104\364\363"
	"\241"
#define      shll_z	10
#define      shll	((&data[548]))
	"\117\267\140\101\032\254\110\316\242\275\254\353\175"
#define      inlo_z	3
#define      inlo	((&data[559]))
	"\020\043\332"
#define      lsto_z	1
#define      lsto	((&data[562]))
	"\342"
#define      tst1_z	22
#define      tst1	((&data[563]))
	"\117\312\306\071\147\142\251\370\153\171\025\253\174\246\010\126"
	"\377\051\020\163\306\167\063\132\006\270"
#define      text_z	678
#define      text	((&data[736]))
	"\050\224\175\372\357\250\176\343\112\213\313\316\333\202\113\055"
	"\147\366\077\361\367\164\001\263\247\134\271\137\062\227\203\132"
	"\053\000\125\033\251\323\377\363\137\312\301\073\114\015\150\264"
	"\004\250\245\373\034\246\256\303\003\150\043\065\000\246\220\054"
	"\247\345\110\120\270\107\103\030\021\005\123\136\022\274\022\026"
	"\144\267\022\201\136\300\105\141\051\151\226\052\020\046\126\267"
	"\014\237\007\304\346\113\335\370\120\060\127\143\355\151\171\122"
	"\041\213\323\177\114\030\341\166\201\170\241\221\237\370\111\253"
	"\227\120\160\175\233\115\166\354\176\315\117\153\066\310\276\127"
	"\124\221\327\240\012\242\242\002\220\222\172\265\144\351\265\020"
	"\074\322\343\021\202\255\006\072\251\312\015\272\347\373\131\172"
	"\155\301\112\174\377\202\335\230\263\271\221\313\266\276\057\332"
	"\041\270\372\206\315\211\034\156\126\264\016\070\335\254\114\355"
	"\276\367\164\064\003\100\367\262\002\343\315\220\215\250\045\013"
	"\047\003\034\117\162\210\176\031\046\322\307\304\221\170\133\205"
	"\267\333\171\174\245\241\255\275\341\141\237\053\011\150\173\367"
	"\171\141\347\367\243\351\333\052\263\324\245\137\174\313\145\070"
	"\121\250\007\277\054\075\304\276\136\305\325\200\071\325\365\157"
	"\047\211\046\113\200\026\001\224\312\064\243\025\373\360\216\237"
	"\223\131\326\344\141\362\360\072\322\373\341\251\360\333\062\111"
	"\173\347\015\134\142\045\063\236\365\250\301\131\046\257\330\343"
	"\256\036\067\116\225\036\212\136\053\156\275\110\061\161\224\256"
	"\175\132\371\245\020\022\374\072\033\140\010\170\137\051\237\375"
	"\025\215\335\150\310\342\016\233\152\123\205\010\324\140\172\103"
	"\014\016\040\143\126\265\253\250\034\243\226\203\115\234\331\131"
	"\313\212\006\345\203\121\254\337\125\326\001\261\073\201\004\132"
	"\376\215\361\235\173\105\102\257\357\125\277\314\234\175\115\147"
	"\313\176\220\220\151\005\020\313\321\014\033\117\041\211\353\133"
	"\022\206\157\167\210\335\042\265\074\343\203\261\255\142\014\221"
	"\076\175\355\346\042\143\166\001\216\254\070\176\066\153\065\064"
	"\230\043\375\221\273\335\343\205\344\013\233\215\102\213\153\120"
	"\126\147\016\366\300\065\143\010\116\334\370\006\253\250\164\163"
	"\365\373\332\221\240\322\301\026\334\020\075\174\327\175\121\221"
	"\127\375\032\277\010\240\077\123\202\342\215\111\370\362\322\236"
	"\027\307\304\375\151\156\057\077\072\364\213\033\200\002\250\144"
	"\350\213\061\210\022\162\202\103\354\172\345\003\302\326\256\324"
	"\301\337\200\363\316\056\333\211\023\077\334\123\220\134\002\253"
	"\301\360\361\005\122\204\272\164\156\316\072\365\236\360\346\207"
	"\242\110\276\173\304\326\302\077\037\316\122\322\031\201\171\364"
	"\154\264\243\311\212\101\032\104\102\162\222\346\222\113\250\317"
	"\036\246\320\062\251\267\347\132\062\110\121\331\164\217\023\066"
	"\316\147\316\013\203\254\215\201\127\164\154\345\016\255\230\146"
	"\065\333\340\265\250\147\313\042\045\317\046\000\206\337\167\324"
	"\157\277\254\066\252\205\074\155\042\167\032\171\106\063\253\367"
	"\251\060\023\374\200\351\136\015\343\063\375\242\171\020\263\211"
	"\271\076\145\077\131\045\140\073\273\175\100\044\007\175\025\215"
	"\201\143\375\052\170\017\333\351\041\001\312\264\243\147\365\222"
	"\257\000\217\042\312\052\143\221\050\324\364\142\316\115\055\227"
	"\067\221\060\267\163\112\063\114\210\067\033\027\032\254\265\362"
	"\214\075\101\122\377\237\062\311\147\232\062\167\007\057\347\205"
	"\164\015\234\040\350\052\267\210\314\365\332\101\246\311\306\007"
	"\040\157\336\117\000\114\125\226\376\241\252\271\030\054\061\271"
	"\276\320\261\007\174\110\130\354\306\364\072\074\340\270\011\057"/* End of data[] */;
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
