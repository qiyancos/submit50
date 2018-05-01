#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\131\347\007\017\276\041\333\103\370\342\361\345\274\352\255\040"
	"\061\207\051\056\154\225\353\375\200\315\065"
#define      tst1_z	22
#define      tst1	((&data[27]))
	"\170\326\355\010\147\176\023\031\162\330\210\312\303\123\010\130"
	"\211\142\002\037\155\072\031\063\113"
#define      date_z	1
#define      date	((&data[52]))
	"\210"
#define      pswd_z	256
#define      pswd	((&data[68]))
	"\017\113\042\354\047\343\010\165\015\012\301\230\174\143\361\261"
	"\367\324\312\142\010\206\371\070\151\053\144\236\322\112\014\171"
	"\212\325\226\246\027\260\340\127\015\115\311\236\211\134\117\201"
	"\061\032\343\072\241\335\163\012\010\327\251\333\041\266\124\253"
	"\213\352\122\243\233\062\372\251\200\304\107\012\040\227\213\122"
	"\261\156\215\123\114\000\135\125\327\006\060\371\274\204\245\110"
	"\157\367\354\013\052\346\264\252\252\374\265\313\224\100\036\106"
	"\257\253\231\373\254\366\120\204\375\201\175\271\006\043\002\165"
	"\032\356\200\105\325\065\360\200\062\245\114\307\345\152\015\225"
	"\026\247\221\303\235\342\107\233\143\305\125\151\350\127\337\003"
	"\106\140\110\033\225\070\234\310\336\350\217\303\122\234\131\151"
	"\104\352\054\342\314\163\175\057\071\322\231\041\052\170\045\160"
	"\330\155\214\156\246\050\066\204\020\305\110\143\142\242\314\247"
	"\214\371\211\130\155\006\210\246\330\041\307\002\231\355\163\161"
	"\132\377\337\001\050\026\206\070\334\317\233\077\161\150\346\375"
	"\141\157\126\316\165\336\164\116\377\074\121\231\051\304\012\204"
	"\304\352\206\354\000\014\045\334\334\301\034\116\051\002\113\143"
	"\344\277\230\145\311\037\176\375\153\243\265\173\262\363\170\301"
	"\076\233\256\146\177\266\334\214\301\235\044\075\001\026\240\346"
	"\325\070\113\237\130\312\234\303\155\122\077\037\105\270\341\204"
	"\123\217\353\322\106\307\137\007\145\203\104\146\231\344\114"
#define      lsto_z	1
#define      lsto	((&data[388]))
	"\073"
#define      msg1_z	42
#define      msg1	((&data[394]))
	"\253\071\317\375\171\300\145\057\122\160\374\172\327\241\106\333"
	"\211\115\265\164\157\313\135\324\322\067\141\305\010\075\157\043"
	"\152\301\075\262\274\076\254\233\345\106\160\241\127\121\311\357"
	"\103\061\321"
#define      opts_z	1
#define      opts	((&data[440]))
	"\375"
#define      rlax_z	1
#define      rlax	((&data[441]))
	"\224"
#define      msg2_z	19
#define      msg2	((&data[445]))
	"\340\072\363\367\340\162\322\145\047\113\154\034\254\076\335\367"
	"\073\105\141\255\253\133\106\324\330"
#define      text_z	701
#define      text	((&data[513]))
	"\053\122\154\215\376\246\135\373\037\115\076\120\036\006\325\200"
	"\272\054\050\065\343\327\025\036\313\133\363\244\357\067\232\032"
	"\212\007\247\210\255\005\204\314\122\302\035\161\311\362\055\023"
	"\062\270\226\371\351\227\126\210\061\203\203\320\156\326\140\346"
	"\363\241\104\175\177\231\153\206\120\273\010\206\334\125\230\350"
	"\344\026\010\102\025\373\035\122\067\377\022\224\254\304\021\011"
	"\037\103\001\225\212\156\312\372\225\143\263\256\326\165\164\342"
	"\020\371\014\274\147\012\070\266\370\141\307\121\242\254\330\175"
	"\044\326\247\276\246\016\371\342\325\314\332\367\012\340\367\367"
	"\325\215\364\027\025\244\373\210\057\370\311\023\021\137\021\170"
	"\020\212\041\276\003\315\315\250\347\265\172\266\312\252\227\023"
	"\202\340\162\234\214\000\036\031\255\053\004\345\037\002\260\135"
	"\337\316\210\061\240\127\043\377\162\110\056\060\162\071\240\143"
	"\067\203\175\263\344\010\250\326\306\041\002\250\360\316\156\035"
	"\151\367\156\160\305\201\077\107\227\302\356\160\172\117\277\342"
	"\357\137\167\151\142\071\355\136\067\073\333\351\321\351\261\220"
	"\044\252\106\234\366\040\354\304\234\272\031\263\012\362\165\167"
	"\067\124\113\032\175\032\206\012\274\261\116\017\100\077\077\034"
	"\103\370\260\303\042\273\056\040\261\271\041\352\053\242\342\140"
	"\257\165\106\305\312\012\175\240\102\251\211\133\100\344\160\072"
	"\257\353\052\147\356\250\224\161\025\233\357\364\154\056\104\234"
	"\006\305\062\334\252\305\211\112\360\343\166\105\275\343\014\263"
	"\026\071\041\007\262\261\321\052\126\270\313\015\364\067\044\053"
	"\113\124\301\321\142\260\244\146\347\002\042\037\023\355\020\351"
	"\341\023\076\112\143\300\045\303\162\144\121\223\257\253\050\303"
	"\247\203\014\135\054\236\207\041\204\255\225\012\231\346\240\203"
	"\144\216\343\121\361\056\022\152\313\114\307\166\311\340\063\124"
	"\150\011\110\351\304\115\177\152\144\035\376\110\164\233\141\317"
	"\321\304\306\165\053\024\227\375\237\307\037\356\306\066\014\065"
	"\347\222\366\346\164\123\033\124\024\315\114\262\307\253\373\134"
	"\321\346\010\104\337\334\041\311\370\151\275\202\222\201\221\064"
	"\067\031\034\315\276\336\242\173\175\220\364\345\003\101\140\015"
	"\265\117\372\135\036\243\234\226\372\343\214\260\165\345\230\303"
	"\051\371\003\320\102\277\070\123\074\346\172\271\147\316\154\066"
	"\073\020\065\041\133\203\032\361\067\166\065\003\332\146\270\210"
	"\111\270\121\076\167\361\240\322\031\116\275\264\357\212\166\163"
	"\305\302\050\067\020\073\041\344\356\344\272\302\017\367\042\157"
	"\036\137\346\231\370\147\144\270\376\353\264\353\140\360\001\200"
	"\053\376\322\174\043\012\152\067\155\340\052\150\017\241\235\175"
	"\200\204\026\020\313\141\174\033\240\134\370\146\107\251\246\305"
	"\202\332\036\026\203\150\022\366\163\012\333\100\210\221\306\271"
	"\057\046\107\102\124\040\335\372\035\337\271\046\142\262\174\363"
	"\075\117\246\307\102\221\107\101\010\164\005\356\202\064\362\220"
	"\321\316\262\212\072\242\063\234\121\055\332\206\146\123\236\147"
	"\246\061\313\160\306\124\343\304\200\367\106\024\345\354\012\065"
	"\052\047\367\331\212\344\031\370\347\302\241\027\126\023\173\032"
	"\320\115\246\224\146\174\045\100\146\024\015\361\203\037\032\270"
	"\002\361\316\041\275\051\024\142\031\113\375\063\326\004\333\136"
	"\262\340\342\176\062\245\234\244\157\216\226\363\255\260\253\260"
	"\242\172\321\140\244\346\302\275\062\277\360\010\304\313\146\166"
	"\254\111\365\337\356\221\203\135\040\031\120\315\311\374\176\154"
	"\167\120\314\033\066\216\330\150\116\310\160\022\224\327\211\100"
	"\040\176\037\017\020\242\155\060\274\276\376\206\273\174\362\062"
	"\314\276\115\002\115\045\153\233\355\333\256\201\263\067\302\323"
	"\266\341\343\306\204\120\367\100\016\365\306\311\162\270\373\076"
	"\167\110\101\304\155\254\140\133\210\017\335\073\106\237\017\375"
	"\201\362\304\005\103\273\105\121\261\014\033\043\305\026\142\074"
	"\137\244\001\315"
#define      inlo_z	3
#define      inlo	((&data[1383]))
	"\333\375\151"
#define      tst2_z	19
#define      tst2	((&data[1388]))
	"\025\267\336\372\047\325\346\255\106\374\121\174\031\240\215\224"
	"\207\157\051\354\015"
#define      chk2_z	19
#define      chk2	((&data[1407]))
	"\165\217\061\240\251\250\370\356\154\072\017\361\046\372\002\010"
	"\241\124\352\046\030\171"
#define      shll_z	10
#define      shll	((&data[1430]))
	"\161\051\213\074\065\032\317\172\113\311\122"
#define      xecc_z	15
#define      xecc	((&data[1443]))
	"\307\012\102\103\352\330\336\362\224\050\377\352\237\304\333\073"
	"\364\365\336"/* End of data[] */;
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
