#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -T -r -f ./install 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[2]))
	"\204\070\250\173\151\124\216\335\061\262\033\266\132\370\214\325"
	"\313\244\133\053\112\340\125\070\175\225\321"
#define      xecc_z	15
#define      xecc	((&data[27]))
	"\101\321\137\367\322\213\005\332\224\302\074\055\146\111\206\162"
	"\027\153"
#define      rlax_z	1
#define      rlax	((&data[45]))
	"\167"
#define      chk2_z	19
#define      chk2	((&data[50]))
	"\176\175\334\114\243\332\111\223\241\120\003\375\062\267\050\247"
	"\375\045\000\062\057\177\320\361\365\107\171"
#define      inlo_z	3
#define      inlo	((&data[73]))
	"\202\257\155"
#define      opts_z	1
#define      opts	((&data[76]))
	"\073"
#define      lsto_z	1
#define      lsto	((&data[77]))
	"\165"
#define      tst2_z	19
#define      tst2	((&data[79]))
	"\376\352\171\120\265\271\032\054\256\352\107\200\317\122\060\254"
	"\142\343\166\310\112"
#define      text_z	843
#define      text	((&data[116]))
	"\203\215\231\163\171\155\361\366\112\075\350\100\204\141\222\144"
	"\106\040\111\021\070\200\343\370\140\373\025\137\321\050\176\336"
	"\117\265\377\275\212\023\112\024\246\143\133\045\205\113\056\272"
	"\015\221\024\054\011\262\000\004\014\127\137\026\176\125\322\315"
	"\325\363\164\271\020\340\047\020\207\175\225\107\302\127\003\140"
	"\000\171\223\252\226\060\243\002\017\143\043\377\014\240\006\163"
	"\341\202\326\111\342\307\170\074\022\010\310\310\121\205\037\350"
	"\333\311\001\110\066\111\024\357\337\377\055\206\033\114\375\060"
	"\060\154\211\311\004\152\005\307\123\360\143\242\311\047\204\065"
	"\234\362\305\333\270\052\207\002\230\245\207\137\111\145\204\137"
	"\157\363\247\334\306\216\153\104\152\024\125\363\061\315\346\101"
	"\202\044\010\006\371\004\103\271\302\170\225\220\275\103\035\174"
	"\216\377\234\245\216\045\166\173\336\243\345\065\262\340\076\257"
	"\241\106\175\074\316\354\053\133\245\252\200\366\076\207\213\127"
	"\207\341\277\305\354\150\036\153\070\217\200\230\027\065\236\330"
	"\340\247\012\246\257\013\246\204\272\277\071\170\033\255\252\112"
	"\146\044\133\320\125\036\163\065\237\325\167\101\127\022\145\130"
	"\311\157\006\005\301\243\245\127\317\374\213\115\271\237\127\040"
	"\227\364\103\234\256\327\276\156\251\074\172\020\046\153\265\015"
	"\141\322\203\127\301\303\112\207\021\263\176\247\365\113\166\313"
	"\111\064\005\016\031\051\125\133\104\067\231\106\115\246\336\226"
	"\005\320\241\306\163\162\377\364\350\220\376\017\343\020\205\006"
	"\063\151\343\303\033\102\252\155\075\114\115\121\353\033\331\321"
	"\336\224\114\225\243\206\353\123\220\066\145\204\140\124\351\205"
	"\147\270\101\045\162\276\134\307\042\146\032\232\204\020\273\326"
	"\046\327\145\364\075\042\234\213\221\210\076\000\357\046\304\072"
	"\047\175\135\061\207\333\116\273\271\334\012\317\355\060\174\036"
	"\140\235\337\103\047\171\320\117\034\324\243\010\170\065\116\210"
	"\051\066\343\320\004\310\211\103\274\202\177\171\314\123\175\273"
	"\320\253\355\346\225\034\045\371\301\025\041\253\313\314\064\365"
	"\010\033\244\163\231\141\333\377\222\244\120\272\012\145\021\133"
	"\360\217\076\015\211\232\076\171\304\015\266\111\054\111\122\005"
	"\215\077\260\327\363\165\271\350\065\220\107\007\324\125\143\153"
	"\334\357\066\200\206\370\117\042\244\217\221\063\143\341\051\205"
	"\023\221\172\143\035\221\004\027\062\302\225\020\100\055\204\314"
	"\142\240\116\027\304\004\110\122\325\125\117\137\012\232\317\047"
	"\346\316\142\206\033\362\235\013\350\040\325\201\273\372\253\221"
	"\372\172\047\145\177\014\152\365\372\352\056\243\165\010\124\337"
	"\025\156\047\224\077\157\147\305\122\114\242\277\360\331\262\003"
	"\140\147\116\372\165\233\215\054\076\274\217\170\275\072\066\105"
	"\154\114\215\247\003\147\245\147\362\340\006\273\030\222\370\377"
	"\144\364\352\011\126\160\250\163\177\201\054\047\201\040\101\357"
	"\346\057\341\370\261\171\244\145\104\207\215\067\324\251\157\276"
	"\133\351\102\102\371\002\175\344\104\374\214\137\374\263\011\350"
	"\312\137\275\070\136\026\022\241\327\334\262\153\300\277\070\031"
	"\272\024\074\227\143\015\333\071\340\307\077\352\003\172\166\120"
	"\146\167\035\335\264\257\256\220\171\043\233\344\037\361\067\113"
	"\022\150\256\255\365\304\075\141\046\114\071\171\121\346\047\147"
	"\022\035\212\041\376\102\325\321\352\052\115\264\340\145\354\207"
	"\235\222\352\144\054\053\124\231\066\105\313\365\324\163\100\062"
	"\113\146\071\062\255\111\222\270\265\066\337\060\116\133\240\015"
	"\167\321\225\025\302\146\161\364\332\203\301\052\360\164\221\253"
	"\060\034\117\145\133\235\161\372\117\217\070\044\222\356\207\214"
	"\264\137\372\222\017\326\064\002\321\044\024\342\136\274\275\256"
	"\113\260\223\255\011\222\370\324\247\256\127\064\107\312\256\264"
	"\274\244\377\371\215\077\176\357\322\343\065\060\237\363\336\353"
	"\243\162\230\255\004\220\201\254\076\330\341\205\243\217\072\137"
	"\064\071\131\301\170\330\260\113\273\346\173\132\331\132\105\175"
	"\314\336\052\321\156\254\175\255\204\136\063\050\355\155\210\042"
	"\247\341\343\040\271\224\153\165\173\347\317\125\101\025\323\016"
	"\363\376\337\142\252\134\020\057\273\103\130\250\261\340\312\130"
	"\301\256\170\173\103\343\360\276\313\300\024\014\325\347\033\311"
	"\345\373\054\220\130\074\277\023\177\027\274\060\367\207\210\271"
	"\065"
#define      pswd_z	256
#define      pswd	((&data[1121]))
	"\345\045\070\260\345\114\275\273\064\330\204\031\323\222\304\041"
	"\131\326\212\046\371\133\347\203\376\232\101\234\076\260\060\207"
	"\347\305\273\224\044\351\030\133\341\154\170\164\376\074\226\130"
	"\023\041\177\015\174\146\220\173\001\321\027\077\202\107\306\152"
	"\015\202\376\061\154\027\214\115\204\005\302\202\101\130\333\124"
	"\172\132\141\366\301\362\161\302\303\211\001\106\320\310\260\336"
	"\113\257\017\267\307\234\005\113\241\307\316\343\040\251\067\232"
	"\004\231\221\305\213\003\207\117\214\211\225\135\121\105\073\235"
	"\365\113\125\274\350\132\007\211\041\325\155\102\177\244\334\203"
	"\076\155\110\311\160\320\030\375\131\256\132\253\364\226\110\351"
	"\342\236\245\312\370\255\124\032\203\301\134\002\146\070\206\244"
	"\246\317\155\027\237\206\024\370\065\157\244\051\006\355\022\350"
	"\213\270\262\203\145\006\235\351\310\371\353\056\062\162\322\330"
	"\101\100\357\340\306\004\331\374\163\175\045\171\152\070\142\365"
	"\361\024\171\127\033\027\100\344\020\053\022\103\236\344\034\337"
	"\045\014\300\353\020\231\347\204\027\015\375\202\106\140\167\067"
	"\164\361\216\220\010\316\164\031\372\207\134\230\154\261\252\053"
	"\355\151\077\154\201\373\235\171\202\046\063\270\047\150\062\014"
	"\215\152\274\163\266\172\057\352\122\264\004"
#define      date_z	1
#define      date	((&data[1407]))
	"\054"
#define      chk1_z	22
#define      chk1	((&data[1409]))
	"\221\335\167\331\207\326\066\346\123\134\350\013\044\137\142\136"
	"\173\112\332\376\063\305\130"
#define      msg1_z	42
#define      msg1	((&data[1437]))
	"\134\024\017\203\107\310\274\355\331\020\352\265\104\374\275\323"
	"\114\324\236\352\100\315\033\170\300\103\216\311\105\211\162\352"
	"\362\325\335\312\165\235\340\212\201\321\140\331\257\030\002\336"
	"\252\257\372\267\075\145"
#define      msg2_z	19
#define      msg2	((&data[1488]))
	"\356\340\007\052\015\245\040\126\305\254\006\246\247\206\236\107"
	"\362\171\226\134\312\177"
#define      shll_z	10
#define      shll	((&data[1508]))
	"\147\206\116\165\213\210\057\050\211\217\126"/* End of data[] */;
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
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
