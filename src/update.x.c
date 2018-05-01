#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\355\271\073\204\205\175\044\247\307\336\321\257"
#define      chk2_z	19
#define      chk2	((&data[14]))
	"\160\135\112\305\344\044\361\362\253\366\121\370\065\331\375\124"
	"\311\113\233\254\270\236\066\321"
#define      pswd_z	256
#define      pswd	((&data[67]))
	"\116\123\214\356\141\055\247\265\133\377\326\147\120\311\227\214"
	"\267\334\171\161\320\005\036\101\143\274\170\064\310\365\311\061"
	"\354\217\132\276\316\322\175\150\125\070\015\261\161\127\167\237"
	"\134\112\232\102\115\353\170\034\036\334\071\064\274\245\145\251"
	"\065\277\147\003\221\344\154\347\035\171\231\216\320\020\055\054"
	"\132\310\157\250\263\350\304\322\304\376\006\201\244\154\052\331"
	"\053\222\335\275\166\111\244\223\303\075\042\224\116\120\301\250"
	"\030\060\120\314\030\025\236\335\024\245\136\270\021\211\222\074"
	"\033\157\371\221\271\236\045\174\334\107\021\052\227\322\323\257"
	"\002\043\173\033\071\032\370\115\277\126\006\320\340\230\015\373"
	"\010\007\215\302\246\262\077\203\372\120\255\222\042\201\101\045"
	"\245\275\100\336\330\070\054\227\217\062\150\157\313\166\152\324"
	"\176\370\226\044\252\325\250\245\045\125\067\110\327\171\155\174"
	"\067\255\133\017\345\207\247\164\272\017\344\206\206\117\132\004"
	"\107\361\051\362\306\321\227\354\047\317\064\376\111\241\172\200"
	"\116\326\217\064\135\066\251\030\106\215\236\315\334\371\321\044"
	"\352\372\026\261\314\255\235\363\175\322\361\306\164\154\106\302"
	"\102\326\367\240\015\240\270\124\056\127\041\013\121\362\057\026"
	"\111\125\004\252\203\254\140\336\253\067\106\374\001\335\211\270"
	"\272\002\051\212\010\107\314\153\004\104\240\314\072\151\343\204"
	"\277\347\056\102"
#define      chk1_z	22
#define      chk1	((&data[363]))
	"\100\306\150\054\361\253\037\272\070\101\204\147\213\036\005\177"
	"\357\267\246\375\252\166\075\175\255"
#define      inlo_z	3
#define      inlo	((&data[385]))
	"\131\127\155"
#define      opts_z	1
#define      opts	((&data[388]))
	"\374"
#define      text_z	701
#define      text	((&data[506]))
	"\320\362\127\074\366\233\334\303\326\106\246\132\006\216\211\111"
	"\043\030\153\143\337\323\240\247\031\145\050\031\056\322\244\377"
	"\304\373\073\273\227\030\176\155\136\045\307\145\264\121\256\327"
	"\151\031\072\111\354\332\361\005\100\031\036\157\354\303\156\261"
	"\276\252\154\125\302\353\303\041\021\213\206\305\334\065\234\106"
	"\116\327\220\073\261\201\100\361\233\137\140\210\042\317\072\341"
	"\172\247\067\075\222\372\136\244\206\345\152\143\032\006\251\150"
	"\335\072\244\217\274\145\275\053\026\105\144\263\226\042\160\037"
	"\310\350\173\311\104\067\222\217\360\276\250\104\252\054\012\146"
	"\201\274\011\274\154\067\002\241\167\354\234\063\057\114\343\143"
	"\322\354\253\245\076\376\323\353\021\005\154\115\301\024\014\123"
	"\114\164\211\321\335\227\263\363\107\163\120\124\123\372\374\377"
	"\213\325\353\066\206\263\235\022\146\232\103\124\177\314\221\077"
	"\230\233\156\155\161\327\030\036\044\267\260\264\147\127\341\260"
	"\251\007\217\271\073\067\262\306\114\054\261\365\013\173\206\204"
	"\237\031\200\115\344\346\240\210\253\235\143\104\114\367\127\035"
	"\276\127\017\263\067\266\170\261\244\276\041\177\105\316\226\012"
	"\006\317\155\305\026\031\121\220\065\354\177\307\144\227\332\057"
	"\267\063\133\034\047\127\025\156\351\007\306\317\272\162\326\214"
	"\363\144\124\342\067\274\152\227\242\223\013\071\025\052\267\077"
	"\162\071\370\005\335\314\316\011\013\155\166\157\125\031\322\362"
	"\352\257\274\351\063\247\322\225\034\134\302\304\007\105\124\201"
	"\311\132\307\132\133\344\217\023\361\112\067\254\365\115\343\050"
	"\217\124\065\105\170\205\375\353\066\170\205\174\300\052\102\024"
	"\365\253\260\066\144\210\126\305\167\001\243\372\224\312\244\115"
	"\004\173\342\370\375\143\363\256\251\123\045\375\326\254\003\316"
	"\236\017\317\251\066\347\123\123\061\142\065\263\310\367\136\013"
	"\170\272\154\312\045\155\252\330\340\164\050\060\070\006\017\215"
	"\065\102\256\210\364\302\212\071\166\330\364\112\147\003\335\334"
	"\176\142\073\050\336\325\075\315\312\347\377\065\347\255\344\102"
	"\047\247\334\100\175\231\332\055\160\164\075\155\364\356\152\337"
	"\053\363\225\311\067\116\100\202\104\025\110\233\252\344\214\177"
	"\202\042\116\037\061\214\075\273\172\075\216\311\344\327\077\051"
	"\222\003\103\376\320\014\301\345\241\244\130\034\270\346\026\354"
	"\145\311\230\026\236\166\324\360\027\276\227\043\025\314\156\045"
	"\324\244\017\142\173\224\264\127\014\233\311\177\125\155\012\300"
	"\317\172\357\316\141\245\173\046\017\072\221\067\016\105\156\175"
	"\224\016\033\015\356\336\251\132\357\332\001\273\265\030\321\140"
	"\206\277\377\103\114\216\021\103\144\221\366\236\042\274\236\251"
	"\217\054\224\234\266\001\305\033\250\075\206\364\354\226\254\251"
	"\055\107\164\224\077\007\265\213\315\177\051\255\015\100\077\360"
	"\341\031\350\035\227\201\306\374\225\063\010\160\232\155\025\230"
	"\335\262\227\226\171\247\225\041\046\063\361\363\056\164\370\232"
	"\330\303\051\345\334\124\332\020\265\240\075\275\245\353\225\022"
	"\015\172\334\211\234\200\005\337\313\045\221\272\331\110\274\162"
	"\305\011\022\061\014\175\044\363\055\276\053\121\205\214\374\011"
	"\075\045\006\040\045\377\025\273\117\064\041\076\123\066\026\301"
	"\005\032\032\201\223\147\137\170\022\036\357\251\241\307\064\177"
	"\055\314\202\161\213\134\331\312\320\022\012\105\266\025\161\237"
	"\200\263\102\141\212\176\075\250\040\127\372\355\015\267\025\125"
	"\314\254\152\121\141\346\112\314\170\307\077\307\134\346\254\121"
	"\302\325\344\201\130\104\342\340\147\262\032\110\054\301\177\151"
	"\124\172\307\371\001\255\143\144\307\152\016\060\107\110\324\327"
	"\004\271\130\135\376\073\075\145\355\130\256\031\032\056\202\157"
	"\251\112\150\252\370\314\016\277\066\034\360\176\145\305\125\151"
	"\177\256\306\176\351\004\344\327\135\222\360\170\301\163\347\152"
	"\275\120\024\265\034\043\165\122\077\146\320\245\054\046\016\253"
	"\324"
#define      tst2_z	19
#define      tst2	((&data[1302]))
	"\027\246\160\237\370\244\065\270\356\116\154\350\061\215\347\176"
	"\075\007\307\332\016\225"
#define      xecc_z	15
#define      xecc	((&data[1326]))
	"\260\142\231\161\073\236\323\100\120\176\170\252\210\346\260\256"
	"\253\371\227"
#define      msg1_z	42
#define      msg1	((&data[1350]))
	"\341\155\004\004\343\126\104\353\373\004\211\242\026\047\036\034"
	"\247\353\067\323\007\052\031\241\016\107\271\074\222\173\050\216"
	"\011\162\150\066\056\365\201\274\135\006\347\066\154\365\166\271"
	"\352\111\047\351\166\115\370\042\042\316"
#define      lsto_z	1
#define      lsto	((&data[1401]))
	"\220"
#define      tst1_z	22
#define      tst1	((&data[1404]))
	"\372\374\242\302\037\136\050\337\106\133\324\266\200\230\100\013"
	"\006\057\316\013\201\064\354\126\221\134\365\051\051"
#define      rlax_z	1
#define      rlax	((&data[1431]))
	"\324"
#define      date_z	1
#define      date	((&data[1432]))
	"\004"
#define      msg2_z	19
#define      msg2	((&data[1435]))
	"\106\224\114\060\314\111\373\377\217\020\146\254\302\163\320\362"
	"\306\050\210\262\362\076"/* End of data[] */;
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
