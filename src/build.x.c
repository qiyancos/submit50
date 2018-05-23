#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[1]))
	"\350\031\032\141\224\060\353\154\364\071\216\144\216"
#define      xecc_z	15
#define      xecc	((&data[16]))
	"\252\371\276\275\077\063\337\215\047\364\261\321\231\101\030\334"
	"\051\037\341"
#define      tst1_z	22
#define      tst1	((&data[33]))
	"\337\323\353\322\261\263\325\012\141\372\054\223\165\241\244\306"
	"\037\244\335\063\204\307\162\310\006\011\312\007"
#define      lsto_z	1
#define      lsto	((&data[60]))
	"\103"
#define      pswd_z	256
#define      pswd	((&data[85]))
	"\207\345\320\311\166\214\262\332\032\027\312\164\301\303\063\243"
	"\111\154\174\051\064\203\062\377\310\175\226\060\052\230\333\154"
	"\153\310\077\252\353\005\253\064\320\157\067\114\047\064\335\364"
	"\140\301\164\065\341\242\146\252\037\375\332\112\225\266\267\000"
	"\177\367\253\153\374\127\237\314\306\327\031\355\013\367\342\154"
	"\270\126\241\231\371\010\103\031\006\036\143\233\325\033\234\124"
	"\022\110\300\016\237\140\333\146\067\365\124\102\354\066\256\244"
	"\215\120\075\206\131\201\237\137\237\003\373\164\036\230\311\060"
	"\341\212\077\200\352\033\347\041\020\073\144\374\161\023\241\376"
	"\144\337\205\275\140\044\035\000\047\030\165\106\260\077\167\221"
	"\311\266\022\263\322\371\325\342\064\071\337\246\115\200\244\261"
	"\137\052\156\300\116\213\300\166\244\065\274\125\164\063\347\076"
	"\352\371\361\274\363\307\236\050\001\175\317\116\376\164\377\136"
	"\236\156\036\354\372\336\143\236\023\037\364\210\122\333\306\075"
	"\325\270\371\311\177\230\361\200\026\300\317\024\065\317\162\323"
	"\075\220\277\070\157\043\327\203\102\313\013\225\246\322\322\174"
	"\212\314\105\012\144\067\213\172\370\132\217\055\051\001\000\147"
	"\222\300\237\002\343\166\205\045\212\244\134\122\264\273\375\074"
	"\241\316\005\027\132\270\362\164\317\275\351\221\201\034\065\312"
	"\210\261\363\275\065\046\274\300\312\031\022\177\325\017\273\166"
	"\335\301\216"
#define      inlo_z	3
#define      inlo	((&data[384]))
	"\276\042\004"
#define      rlax_z	1
#define      rlax	((&data[387]))
	"\155"
#define      chk1_z	22
#define      chk1	((&data[393]))
	"\262\020\211\073\302\043\016\113\141\222\045\357\245\315\027\371"
	"\355\235\376\252\054\145\104\364\001\111\246\175\371\367\243"
#define      opts_z	1
#define      opts	((&data[419]))
	"\333"
#define      text_z	652
#define      text	((&data[549]))
	"\245\332\250\033\267\152\251\357\344\053\234\056\151\063\011\050"
	"\346\032\262\041\335\057\033\325\323\321\215\101\241\127\056\106"
	"\061\327\142\351\101\014\331\045\067\166\124\240\251\136\311\217"
	"\170\174\261\126\254\314\053\177\236\270\300\100\020\357\207\102"
	"\306\351\053\010\365\005\056\054\173\202\315\045\340\227\265\131"
	"\023\146\257\300\063\332\077\322\223\000\022\243\360\232\345\266"
	"\203\021\276\171\026\354\245\222\157\163\267\117\012\154\250\036"
	"\323\130\336\006\062\036\331\305\036\354\151\017\206\116\305\011"
	"\137\124\004\207\331\373\165\051\220\153\126\333\265\163\362\014"
	"\167\214\207\035\155\034\324\341\111\027\225\270\275\165\257\337"
	"\225\031\051\106\367\354\250\146\117\205\230\144\014\102\137\344"
	"\365\005\260\306\176\360\062\303\371\111\250\311\203\024\242\052"
	"\156\177\177\313\360\277\266\001\022\250\272\056\372\335\213\360"
	"\377\055\051\056\001\120\275\257\330\131\212\057\176\256\104\301"
	"\336\102\161\053\242\305\042\206\233\142\346\236\150\022\304\035"
	"\251\304\261\336\164\352\165\153\014\270\322\133\003\376\341\262"
	"\130\221\242\263\020\337\013\332\000\037\007\127\066\364\170\264"
	"\074\132\142\135\036\101\243\364\036\143\201\271\102\116\240\150"
	"\125\150\361\344\023\354\022\071\272\372\366\237\011\360\040\013"
	"\131\076\067\105\020\315\117\053\340\153\303\244\020\341\165\167"
	"\374\133\124\336\335\320\365\166\233\141\254\324\007\114\001\236"
	"\255\055\033\233\246\142\213\306\104\367\162\127\115\203\016\122"
	"\336\276\156\275\360\362\133\041\303\365\176\307\311\346\302\317"
	"\206\101\003\100\362\037\144\131\002\146\054\076\037\215\112\123"
	"\251\141\276\271\131\075\164\216\317\037\162\247\245\363\177\064"
	"\137\034\265\257\055\354\361\327\255\205\031\052\117\302\223\126"
	"\203\015\213\252\261\247\201\243\164\326\033\365\015\315\046\055"
	"\063\047\246\306\365\241\126\303\102\315\331\040\354\020\052\015"
	"\111\335\000\067\051\357\043\236\013\026\020\271\044\325\056\036"
	"\370\072\144\367\177\202\062\215\251\137\172\250\373\254\265\040"
	"\046\041\223\270\232\214\032\350\270\135\015\305\235\137\164\024"
	"\106\366\173\210\366\147\160\372\237\041\345\246\346\001\147\033"
	"\114\172\010\245\331\360\360\231\043\253\264\176\320\036\056\121"
	"\103\102\162\176\052\173\125\260\303\350\164\105\040\006\007\065"
	"\324\213\364\175\345\103\337\026\276\262\261\200\144\207\375\056"
	"\023\225\104\001\376\367\145\116\334\047\062\256\140\171\107\256"
	"\334\356\006\142\343\216\167\342\002\334\017\243\342\264\317\267"
	"\026\014\224\271\231\106\312\007\102\211\276\154\030\367\005\363"
	"\326\304\305\256\055\310\351\034\366\325\334\040\306\015\372\055"
	"\121\367\163\306\130\364\062\103\203\156\342\043\343\030\127\064"
	"\215\035\116\143\355\235\143\362\055\370\362\102\331\134\300\215"
	"\234\316\277\261\113\231\161\244\134\266\153\365\104\007\347\344"
	"\014\374\077\164\051\276\341\167\020\076\321\143\170\200\045\105"
	"\130\011\037\227\332\244\304\177\103\041\072\146\264\141\315\301"
	"\225\257\305\070\171\322\336\324\244\331\054\004\005\271\023\046"
	"\357\036\000\056\232\066\066\225\201\220\126\067\057\110\045\226"
	"\377\242\167\123\001\364\251\104\165\202\316\014\272\111\136\153"
	"\250\260\172\060\063\324\147\312\054\215\304\277\075\217\352\254"
	"\172\044\045\127\254\160\240\104\325\362\175\173\215\204\203\166"
	"\161\050\010\340\234\277\060\247\054\331\305\377\061\244\006\144"
	"\302\337\052\341\313\223\360\122\342\266\134\101\073\337\270\254"
	"\007\300\215\244\200\275\113\254\226\021\254\307\265\263\053\170"
	"\223\126\132\137\351\113\261\313\002\015\015\075\354\305\351\364"
	"\206\166\230\006\063\344\263\312\365\140\221\253\023\275\044\247"
	"\023\177\006\375\313\270\311\315\305\326\012\262\234\363\247\042"
	"\152\077\051\236\044\334\150\032\075\372\306\121\270\353\370\314"
	"\152\377\311\065\267\222\002\175\151\015\060\006\000\327\051\153"
	"\027\122\012\073\057\163\126\154\155\034\275\046\007\266\362\161"
	"\265\273\247\155"
#define      msg2_z	19
#define      msg2	((&data[1355]))
	"\270\267\033\023\336\063\001\352\111\144\331\042\053\100\366\260"
	"\224\124\170\012\362\234\276\270\362\350"
#define      date_z	8
#define      date	((time_t*)(&data[1384]))
	"\056\105\151\241\233\326\160\320\044\212\001\256\035\335"
#define      msg1_z	42
#define      msg1	((&data[1399]))
	"\064\277\112\047\061\377\342\336\012\070\242\373\110\376\127\111"
	"\142\315\261\270\354\135\236\105\300\077\345\317\123\351\057\021"
	"\136\336\106\055\337\137\341\161\164\006\336\364\121\023\334\260"
	"\342\331\154\061\203\127\351"
#define      tst2_z	19
#define      tst2	((&data[1449]))
	"\362\145\147\047\154\164\301\215\261\010\027\132\175\310\144\170"
	"\073\354\117\132\361\220\026\157"
#define      chk2_z	19
#define      chk2	((&data[1472]))
	"\065\245\345\113\260\166\070\304\366\254\331\370\100\310\265\374"
	"\244\362\046\333\345\121\013"/* End of data[] */;
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
