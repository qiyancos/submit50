#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[1]))
	"\347\205\327\150\064\031\023\233\204\011\166\236\062\064\357\126"
	"\072\131\320\035\047\237\240\046\013\241\031\272\041\234\163\214"
	"\363\112\320\252\171\106\234\047\106\002\266\075\300\166\121\073"
	"\070\140"
#define      opts_z	1
#define      opts	((&data[50]))
	"\046"
#define      chk2_z	19
#define      chk2	((&data[54]))
	"\140\205\232\324\326\310\251\125\151\171\207\133\360\334\261\014"
	"\352\231\310\132\110\150\373\351\213\357"
#define      text_z	735
#define      text	((&data[88]))
	"\235\272\142\071\332\172\334\301\270\235\067\230\225\122\106\251"
	"\377\242\015\317\175\275\345\254\137\351\153\262\113\102\056\077"
	"\142\273\077\361\216\323\010\103\132\245\231\015\230\101\265\203"
	"\040\242\014\373\366\114\121\366\017\065\105\306\237\220\342\326"
	"\161\047\230\001\361\161\037\007\074\331\114\172\155\004\237\125"
	"\173\335\240\143\324\020\055\346\044\306\224\310\072\355\256\326"
	"\064\303\376\116\053\107\354\055\245\267\267\304\062\277\232\120"
	"\340\176\262\115\370\204\175\152\047\316\246\046\134\250\271\065"
	"\316\101\306\122\177\231\151\300\204\236\327\000\227\335\223\017"
	"\272\245\366\021\041\262\035\142\071\222\133\370\041\076\201\354"
	"\277\062\015\104\256\242\137\142\012\121\157\167\272\003\270\225"
	"\345\076\020\133\367\230\320\120\076\237\017\262\022\243\153\215"
	"\333\066\030\315\106\364\240\302\070\202\276\337\354\327\142\332"
	"\230\063\250\214\044\102\264\111\005\121\331\052\047\235\004\315"
	"\121\306\304\302\006\151\274\177\315\270\154\100\321\134\336\251"
	"\057\122\352\265\140\354\264\173\031\311\220\254\302\200\310\265"
	"\271\203\375\040\141\161\324\153\300\355\316\325\157\155\255\250"
	"\300\026\367\005\152\107\376\035\177\225\321\074\076\350\032\017"
	"\171\221\355\216\172\133\137\153\313\010\200\267\256\104\251\034"
	"\034\014\362\046\057\334\346\035\165\323\235\262\134\035\373\052"
	"\030\221\323\121\326\212\011\051\315\132\244\165\007\105\142\340"
	"\141\201\072\056\335\074\031\354\112\050\344\033\322\042\204\354"
	"\141\362\243\374\176\315\125\076\373\362\207\046\123\261\136\154"
	"\043\137\165\111\222\266\034\364\261\355\357\033\144\322\273\046"
	"\074\372\306\352\046\117\120\004\313\324\011\056\055\173\142\323"
	"\376\173\073\070\216\336\220\336\243\122\042\302\047\257\214\336"
	"\214\154\111\334\324\274\372\365\330\241\025\022\060\065\354\256"
	"\363\352\370\371\141\161\171\023\237\050\243\105\100\377\071\016"
	"\011\211\316\237\351\337\134\172\021\255\017\022\205\023\223\140"
	"\211\336\070\036\337\016\071\150\046\211\220\354\155\244\265\356"
	"\012\222\370\022\230\353\264\052\352\071\370\243\126\360\177\006"
	"\044\000\212\357\222\240\206\202\235\137\276\063\335\222\174\304"
	"\177\353\301\315\241\300\032\105\006\073\027\212\076\177\114\075"
	"\271\315\114\101\057\055\074\070\077\072\155\220\067\251\212\264"
	"\316\255\354\323\012\010\255\217\072\316\365\175\201\203\324\175"
	"\044\025\310\234\157\016\016\320\004\307\125\177\340\250\371\275"
	"\131\253\273\213\055\234\343\241\307\375\140\124\170\327\154\350"
	"\234\226\140\372\376\163\227\104\334\116\377\114\302\331\356\260"
	"\046\152\063\050\076\114\313\146\302\270\110\253\152\060\207\361"
	"\271\353\116\017\224\377\352\377\374\227\276\030\275\371\251\033"
	"\132\241\164\333\024\032\101\350\015\326\113\003\060\300\002\042"
	"\024\270\015\102\372\164\255\320\070\342\303\176\354\057\036\332"
	"\311\004\161\141\207\236\340\155\174\030\137\234\373\223\216\120"
	"\057\313\211\136\226\226\024\161\202\146\140\003\076\353\301\224"
	"\040\237\335\300\047\167\107\261\373\075\353\005\117\114\361\333"
	"\376\057\240\054\365\225\117\203\366\273\003\025\146\177\161\354"
	"\151\223\226\231\215\133\024\125\363\310\012\331\160\152\245\254"
	"\011\236\131\000\376\337\233\372\310\047\352\235\070\055\072\363"
	"\220\164\315\012\120\216\303\355\306\315\306\066\070\154\343\101"
	"\012\075\102\011\034\336\004\344\006\356"
#define      tst1_z	22
#define      tst1	((&data[872]))
	"\275\151\227\023\327\335\011\104\071\054\074\257\152\143\317\063"
	"\177\152\124\370\314\244\144"
#define      date_z	8
#define      date	((time_t*)(&data[896]))
	"\376\270\053\327\163\242\274\322\232\212"
#define      chk1_z	22
#define      chk1	((&data[907]))
	"\157\123\111\122\041\276\156\302\267\031\107\177\315\274\362\174"
	"\107\360\263\200\257\362\370\331\124\066\212"
#define      msg2_z	19
#define      msg2	((&data[934]))
	"\303\255\252\167\045\276\222\102\061\126\117\051\054\122\015\210"
	"\301\243\266\300\016\241\005\267"
#define      tst2_z	19
#define      tst2	((&data[959]))
	"\253\352\253\055\053\126\045\367\040\262\012\250\252\331\113\327"
	"\001\062\105\343\360\101\050\050\310\353"
#define      xecc_z	15
#define      xecc	((&data[982]))
	"\130\115\024\107\212\117\121\125\304\314\165\324\045\314\337\025"
#define      shll_z	10
#define      shll	((&data[998]))
	"\250\266\272\217\067\014\274\261\140\012\224\016\071"
#define      pswd_z	256
#define      pswd	((&data[1027]))
	"\163\347\061\066\225\333\073\114\242\037\011\116\012\264\174\062"
	"\174\210\377\107\357\271\336\010\255\113\123\341\222\047\361\046"
	"\071\204\120\117\273\221\070\164\005\353\162\243\377\255\042\246"
	"\065\042\355\044\333\314\055\211\027\200\152\252\250\133\321\341"
	"\340\041\060\234\263\150\021\270\124\203\134\123\060\176\372\145"
	"\241\350\212\174\264\267\006\314\070\161\166\340\314\107\301\255"
	"\151\362\111\034\133\132\324\257\335\061\002\016\257\374\164\120"
	"\344\376\315\230\266\323\145\356\105\333\316\021\043\220\277\214"
	"\203\010\250\336\142\175\215\100\256\220\117\135\214\303\256\160"
	"\302\174\011\170\120\156\146\225\112\065\247\155\306\146\371\111"
	"\156\241\050\321\036\265\022\314\105\141\052\322\045\331\103\347"
	"\125\114\137\245\273\306\072\005\374\342\162\302\110\154\014\267"
	"\015\064\210\054\352\233\371\060\374\044\002\042\375\105\011\122"
	"\222\151\370\116\057\063\123\053\025\306\356\135\063\372\024\101"
	"\057\235\155\032\070\147\112\065\213\115\127\210\223\141\333\046"
	"\312\324\164\371\007\310\045\035\217\023\173\302\016\220\003\076"
	"\055\161\130\146\330\243\233\143\360\363\354\204\124\307\252\036"
	"\233\147\214\361\203\345\036\042\313\307\060\004\271\165\310\054"
	"\134\371\143\362\325\237\076\170\277\110\306\311\374\103\374\170"
	"\252\211\152\056\156\211\120\071\121\201\076\012\366\006\067\123"
	"\000\232"
#define      inlo_z	3
#define      inlo	((&data[1332]))
	"\114\017\164"
#define      rlax_z	1
#define      rlax	((&data[1335]))
	"\354"
#define      lsto_z	1
#define      lsto	((&data[1336]))
	"\216"/* End of data[] */;
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
