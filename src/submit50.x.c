#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      pswd_z	256
#define      pswd	((&data[10]))
	"\057\016\144\321\322\100\271\173\012\061\333\141\003\301\144\162"
	"\207\331\377\022\100\243\072\061\154\170\276\010\031\355\036\143"
	"\117\355\262\250\142\270\013\223\103\346\365\106\250\131\270\057"
	"\063\267\101\164\132\174\245\307\365\143\320\016\121\357\162\241"
	"\334\044\112\077\335\125\322\040\074\307\146\344\041\037\023\125"
	"\326\125\312\061\322\157\371\307\323\311\326\045\270\110\306\225"
	"\155\020\324\112\146\247\152\243\157\321\207\220\360\233\346\307"
	"\361\260\371\304\037\362\213\363\274\142\030\164\253\337\011\030"
	"\357\336\143\126\205\316\371\364\237\201\205\220\035\153\130\016"
	"\033\121\322\073\104\136\057\000\300\110\164\153\047\176\204\027"
	"\134\347\155\342\265\147\327\125\350\134\346\005\310\076\024\344"
	"\217\347\037\323\106\117\323\007\227\110\163\276\307\367\326\044"
	"\337\104\006\225\253\335\352\224\071\321\232\001\017\257\346\237"
	"\226\006\163\335\125\106\344\355\217\127\254\126\117\202\172\056"
	"\306\201\304\162\136\256\006\230\177\240\232\217\117\200\056\346"
	"\206\241\304\334\350\250\311\170\000\165\316\120\367\111\177\276"
	"\312\103\060\051\362\066\302\162\327\135\174\177\000\314\167\112"
	"\113\065\024\216\146\076\201\235\000\363\164\136\364\234\073\044"
	"\252\240\365\175\341\257\370\353\341\164\152\341\100\342\053\214"
	"\027\100\033\176\177\234\033\200\217\217\336\204\054\032\250\326"
	"\272\236"
#define      inlo_z	3
#define      inlo	((&data[322]))
	"\221\172\026"
#define      xecc_z	15
#define      xecc	((&data[327]))
	"\300\362\135\350\055\322\347\024\267\375\004\160\310\232\265\276"
	"\372"
#define      msg1_z	42
#define      msg1	((&data[342]))
	"\004\237\253\240\271\253\224\253\200\136\305\127\213\145\251\336"
	"\004\007\003\113\331\160\153\154\220\037\101\252\147\307\045\315"
	"\073\003\263\237\123\367\252\314\200\267\074\215\354\175\251\152"
	"\374\105\205"
#define      tst1_z	22
#define      tst1	((&data[397]))
	"\133\131\101\166\155\376\163\003\116\313\252\061\254\322\067\313"
	"\106\243\225\125\130\242\101\006\066\002"
#define      date_z	8
#define      date	((time_t*)(&data[424]))
	"\237\154\314\355\270\245\232\360\045\021\353\211\226"
#define      lsto_z	1
#define      lsto	((&data[432]))
	"\231"
#define      chk1_z	22
#define      chk1	((&data[434]))
	"\033\114\051\255\226\110\155\123\325\100\256\211\257\320\146\115"
	"\325\154\361\347\044\346\366\151\007"
#define      shll_z	10
#define      shll	((&data[460]))
	"\162\343\117\062\211\332\254\266\000\103\275\116\366\370"
#define      msg2_z	19
#define      msg2	((&data[475]))
	"\274\044\117\030\100\165\025\145\326\341\071\177\121\305\070\376"
	"\270\137\225\141\065\005"
#define      rlax_z	1
#define      rlax	((&data[494]))
	"\345"
#define      opts_z	1
#define      opts	((&data[495]))
	"\337"
#define      text_z	649
#define      text	((&data[610]))
	"\204\317\004\312\374\176\345\146\206\355\115\067\137\060\055\130"
	"\221\371\145\116\035\265\200\103\035\343\011\361\023\274\175\227"
	"\214\202\142\211\001\110\360\210\065\075\277\225\156\355\355\000"
	"\346\123\116\003\011\316\107\046\262\120\030\306\015\225\136\232"
	"\030\300\044\032\011\024\242\076\122\141\324\301\116\302\301\064"
	"\026\017\070\037\336\200\105\221\320\136\130\336\364\266\171\014"
	"\167\236\046\200\263\310\277\005\052\224\306\171\126\210\256\154"
	"\227\346\316\151\177\215\316\030\057\306\321\350\026\121\002\335"
	"\047\033\240\101\067\247\332\323\344\327\303\271\261\117\247\107"
	"\246\057\006\026\361\354\005\105\065\163\125\212\012\302\115\022"
	"\137\227\332\212\367\317\366\317\316\027\221\263\005\144\022\265"
	"\164\122\251\375\261\233\307\122\204\022\215\123\312\204\375\163"
	"\011\001\176\151\230\051\350\055\207\226\200\077\356\110\062\262"
	"\027\137\233\337\131\165\236\242\164\051\055\220\230\306\342\230"
	"\356\045\210\022\101\153\147\052\166\047\376\104\212\151\173\012"
	"\331\255\243\337\222\357\256\265\303\272\030\356\214\137\065\016"
	"\054\162\320\103\033\256\354\021\205\035\004\333\176\110\022\343"
	"\256\114\332\043\305\240\207\154\053\013\333\207\156\252\051\251"
	"\346\021\156\156\126\106\277\144\313\204\121\146\260\203\110\322"
	"\000\103\212\250\223\307\321\047\050\317\377\315\045\023\063\237"
	"\025\231\300\140\160\355\001\250\244\366\221\042\177\347\345\030"
	"\223\022\151\222\133\372\033\016\225\261\146\243\230\171\137\331"
	"\304\354\116\070\017\042\005\312\157\232\165\264\320\027\000\331"
	"\060\034\066\163\371\216\134\224\044\017\346\014\062\141\352\124"
	"\337\311\377\237\212\024\050\120\265\226\170\157\323\213\115\270"
	"\047\207\331\067\140\077\070\257\022\154\306\076\150\171\101\375"
	"\133\375\165\040\024\035\243\077\335\023\142\077\332\352\007\037"
	"\321\234\073\342\216\161\354\225\330\166\057\072\251\340\234\300"
	"\246\130\066\334\163\101\277\201\147\362\156\067\304\367\121\160"
	"\142\131\011\075\144\222\173\070\346\056\062\255\131\377\156\052"
	"\202\164\213\127\040\024\054\034\173\013\322\336\034\254\335\043"
	"\043\266\217\221\006\252\250\004\114\075\004\005\244\160\237\032"
	"\370\166\166\060\022\234\316\060\362\365\276\276\076\367\201\145"
	"\320\066\342\167\202\171\245\052\246\376\342\277\320\103\020\020"
	"\006\222\252\352\144\172\217\206\342\342\357\356\116\111\022\035"
	"\161\361\266\257\124\376\244\235\270\372\204\224\127\103\211\303"
	"\025\000\076\007\365\216\132\342\162\134\331\305\007\332\145\046"
	"\000\165\351\301\326\136\314\166\226\154\370\366\366\011\036\324"
	"\321\327\367\212\244\104\116\216\167\141\052\156\207\302\135\206"
	"\053\011\173\224\262\062\303\177\173\026\031\053\335\337\342\017"
	"\377\325\344\315\220\056\326\141\057\262\073\054\210\273\305\162"
	"\326\111\167\333\021\310\216\324\365\244\071\141\207\215\213\263"
	"\121\203\233\313\064\126\120\011\275\227\037\321\133\132\217\216"
	"\163\120\257\026\373\270\217\320\220\265\224\203\301\054\261\130"
	"\142\275\244\004\275\251\327\213\342\246\240\354\343\010\316\215"
	"\230\110\100\011\271\213\311\175\377\223\177\251\367\223\272\003"
	"\045\310\271\001\231\045\234\115\257\361\004\362\346\001\351\126"
	"\266\312\052\006\330\356\251\360\377\064\237\214\166\146\322\010"
	"\067\060\140\026\044\026\220\061\215\056\127\016\341\040\315\347"
	"\113\141\255\304\270\065\162\045\315\131\261\104\300\203\114\370"
	"\263\255\016\330\303\237\011\121\315\141\140\257\201\056\226\315"
	"\220\103\221\110\171\004\155\107\135\037\214\035\242\331\025\126"
	"\206\044\056\112\303\067\234\221\230\374\100\032\052\326\347\273"
	"\032\171\003\224"
#define      tst2_z	19
#define      tst2	((&data[1350]))
	"\333\220\367\335\247\234\146\326\235\332\244\376\023\206\145\147"
	"\306\326\074\165\363\151\370\063\102"
#define      chk2_z	19
#define      chk2	((&data[1375]))
	"\063\270\203\230\327\107\121\361\347\142\345\072\123\151\061\024"
	"\371\122\120\312\260\023\367\357"/* End of data[] */;
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
