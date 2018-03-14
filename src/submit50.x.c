#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[4]))
	"\046\046\276\323\077\343\327\201\264\040\103\347\232\271\075\162"
	"\210\333\034\336\125\265\004\277\113"
#define      chk2_z	19
#define      chk2	((&data[25]))
	"\320\377\146\201\321\310\225\164\004\147\156\244\252\061\123\342"
	"\000\237\026"
#define      xecc_z	15
#define      xecc	((&data[47]))
	"\236\005\220\162\034\047\161\041\174\302\346\037\146\327\266\044"
	"\127\261"
#define      shll_z	10
#define      shll	((&data[63]))
	"\144\064\114\100\044\162\237\334\161\106\004"
#define      msg1_z	42
#define      msg1	((&data[77]))
	"\132\000\016\205\351\365\006\126\307\321\030\201\103\142\241\171"
	"\361\140\104\326\046\116\223\027\220\341\126\311\226\324\306\372"
	"\140\253\303\067\371\301\237\271\263\174\035\352\025\260\006\134"
	"\051\352\356"
#define      inlo_z	3
#define      inlo	((&data[124]))
	"\231\304\316"
#define      date_z	8
#define      date	((time_t*)(&data[136]))
	"\023\332\053\172\261\114\031\267\335\060\375\221\166\236\156\125"
	"\202\132\113"
#define      lsto_z	1
#define      lsto	((&data[146]))
	"\341"
#define      tst1_z	22
#define      tst1	((&data[148]))
	"\170\271\131\135\305\363\061\310\144\251\253\266\071\036\344\171"
	"\214\111\145\235\274\051\254\115\114\177\252"
#define      chk1_z	22
#define      chk1	((&data[176]))
	"\306\172\310\374\275\275\127\325\172\026\276\146\341\021\264\210"
	"\265\066\145\230\144\232\023\205\104\353\113"
#define      rlax_z	1
#define      rlax	((&data[201]))
	"\325"
#define      opts_z	1
#define      opts	((&data[202]))
	"\034"
#define      text_z	736
#define      text	((&data[308]))
	"\222\355\332\245\253\106\035\352\014\225\070\131\024\342\316\176"
	"\172\225\371\277\200\104\374\200\152\144\371\102\031\214\321\254"
	"\171\254\121\044\362\157\017\377\005\107\130\032\052\047\230\245"
	"\275\222\145\076\327\141\276\102\306\270\204\340\104\126\214\275"
	"\002\336\342\364\115\361\364\122\071\115\154\144\165\005\011\062"
	"\230\156\160\157\320\057\262\227\347\066\167\053\214\004\350\217"
	"\342\313\204\060\274\170\203\366\306\016\124\317\171\272\046\265"
	"\035\322\001\004\135\157\235\170\336\105\155\270\331\365\223\075"
	"\247\256\047\021\074\327\044\277\337\251\153\144\221\332\316\365"
	"\143\375\102\354\011\015\216\010\023\005\255\271\030\231\320\027"
	"\200\361\016\264\177\041\374\300\001\143\161\067\325\102\052\106"
	"\166\364\210\254\173\154\266\342\226\006\047\363\301\036\317\150"
	"\121\141\023\041\034\377\314\104\035\257\302\157\115\213\076\212"
	"\120\301\121\216\164\355\110\361\307\375\367\322\172\153\105\326"
	"\007\014\227\023\115\303\246\060\341\114\157\246\137\253\366\153"
	"\035\030\337\034\074\047\236\372\345\357\076\106\343\066\042\365"
	"\371\022\273\010\215\057\073\371\047\020\370\356\221\163\243\141"
	"\213\072\030\303\123\162\137\147\113\315\125\321\364\260\033\365"
	"\153\211\101\367\057\271\077\213\044\261\066\162\050\047\105\171"
	"\133\010\023\005\010\011\115\237\300\147\121\326\274\334\317\130"
	"\375\322\353\115\035\043\367\337\013\007\275\175\140\321\062\177"
	"\117\362\304\204\020\030\213\362\343\353\001\315\113\257\250\355"
	"\006\360\247\131\307\252\075\226\164\061\301\010\207\305\273\246"
	"\215\262\256\341\300\313\236\272\050\121\102\254\075\304\171\246"
	"\104\272\341\126\032\265\351\166\223\113\163\150\207\104\330\064"
	"\304\335\126\117\147\324\005\146\365\152\344\062\206\042\363\234"
	"\065\004\165\341\124\006\232\171\046\214\002\105\311\151\304\243"
	"\113\001\316\362\033\200\013\114\030\374\267\155\344\126\151\027"
	"\307\065\220\261\145\120\237\373\163\253\054\305\346\336\343\125"
	"\043\137\260\034\327\317\310\122\255\151\361\146\246\077\000\241"
	"\137\135\131\270\125\035\350\047\300\045\267\237\062\177\370\234"
	"\346\122\065\222\343\310\141\375\307\265\041\150\021\111\154\057"
	"\225\013\366\211\056\130\240\037\135\275\372\076\350\110\101\024"
	"\031\156\076\016\120\344\341\046\300\277\253\074\064\206\034\315"
	"\154\114\127\204\105\254\260\030\317\164\043\274\362\046\146\170"
	"\246\252\201\303\363\201\170\017\244\243\134\156\130\160\352\161"
	"\157\271\270\100\327\005\327\253\330\006\024\250\346\316\001\151"
	"\322\377\115\054\324\353\026\232\333\127\207\340\265\262\301\123"
	"\240\361\225\232\317\337\222\047\063\224\327\153\113\375\322\301"
	"\340\116\147\020\013\124\334\266\001\355\041\025\233\111\241\361"
	"\202\017\137\026\301\044\157\125\027\375\034\164\055\031\176\232"
	"\251\035\131\225\101\341\074\236\060\113\124\174\075\002\306\245"
	"\254\061\373\112\220\115\222\357\364\032\364\013\167\025\161\163"
	"\172\161\264\361\121\052\155\354\346\176\312\103\062\221\351\260"
	"\171\006\133\031\242\001\332\101\220\162\312\217\163\037\173\215"
	"\014\174\146\345\214\300\144\341\013\173\366\136\011\266\350\202"
	"\305\223\313\232\133\260\023\253\227\324\055\144\162\051\233\272"
	"\220\013\162\042\302\150\332\275\347\242\257\003\063\003\121\225"
	"\310\053\232\242\247\107\210\253\101\376\310\147\205\147\373\363"
	"\156\230\152\310\107\331\341\141\140\040\374\064\366\012\220\336"
	"\304\306\335\220\246\350\114\320\337\150\024\246\173\265\250\357"
	"\066\362\154\356\027\335\337\125\065\360\237\311\022\125\003\310"
	"\003\235\136\332\171\222\204\200\217\357\132\073\365\143\155\215"
	"\322\336\375\243\015\257\072\365\346\262\040\163\267\011\002\232"
	"\324\206\312\221\377\115\207\305\075\342\000\063\105\156\301\030"
	"\115\276\273\132\156\366\117\125\250\160\310\140\171\313\372\115"
	"\121\304\337\120\022\146\025\120\110\026\203\216\204\105\247\321"
	"\004\142\054\162\131\174\310\002\354\220\142\146\133\134\264\255"
	"\041\223\375\063\372\023\204\102\052\010\321\257\115\170\201\121"
#define      tst2_z	19
#define      tst2	((&data[1150]))
	"\064\052\214\333\022\152\202\264\154\370\114\177\316\047\272\034"
	"\376\034\176\306\005\031\066\027\034"
#define      pswd_z	256
#define      pswd	((&data[1203]))
	"\365\062\045\026\305\043\112\300\067\316\002\141\326\324\020\044"
	"\114\221\165\050\077\072\135\151\306\224\201\343\055\377\134\320"
	"\145\005\004\124\265\021\131\222\102\006\056\107\024\133\256\035"
	"\160\311\135\104\262\362\177\367\333\152\366\116\253\076\037\020"
	"\103\043\145\370\065\276\213\170\304\272\277\331\025\155\367\205"
	"\067\124\312\351\107\112\341\042\265\330\161\140\026\220\160\132"
	"\263\325\123\351\224\336\141\130\230\040\062\256\216\051\063\306"
	"\176\376\257\305\110\221\350\375\151\131\135\200\351\316\333\235"
	"\244\056\206\070\015\347\221\246\010\303\124\227\355\210\135\153"
	"\206\015\060\316\236\031\313\010\162\050\211\134\367\144\371\233"
	"\223\177\324\240\147\145\107\160\051\233\010\026\043\146\201\251"
	"\163\262\170\022\313\103\033\076\154\244\232\143\011\224\377\234"
	"\024\323\075\173\071\204\354\142\040\364\170\103\132\372\355\316"
	"\254\145\341\170\251\374\267\025\241\121\171\252\346\170\107\372"
	"\114\205\166\205\012\142\347\052\127\140\156\262\132\133\200\007"
	"\301\142\177\152\136\066\177\000\210\371\253\156\162\362\150\276"
	"\170\336\104\202\101\054\255\231\214\033\113\347\167\314\356\070"
	"\056\156\242\215\245\042\215\056\034\070\234\216\053\005\115\042"
	"\061\201\070\367\245\203\267\334\121\272\075\050\216\116\115\333"
	"\340\303\003\037\375\140\211\303\364\012\247\041\012"/* End of data[] */;
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
