#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\000"
#define      date_z	1
#define      date	((&data[1]))
	"\306"
#define      inlo_z	3
#define      inlo	((&data[2]))
	"\022\157\335"
#define      msg1_z	42
#define      msg1	((&data[11]))
	"\047\067\146\007\324\037\303\214\021\036\172\134\315\015\327\145"
	"\045\001\004\235\257\237\061\123\332\174\255\261\176\250\371\111"
	"\066\253\072\263\260\157\251\257\213\375\311\045\255\141\040\026"
	"\307\224\364\174\154\111\065\203\240"
#define      msg2_z	19
#define      msg2	((&data[63]))
	"\022\122\154\330\160\360\246\070\140\376\061\276\105\241\277\227"
	"\166\346\326\346\007\216\011\062"
#define      tst1_z	22
#define      tst1	((&data[88]))
	"\037\153\217\152\301\230\032\131\341\020\361\123\110\225\050\231"
	"\047\053\352\036\060\114\120\345\227\253"
#define      xecc_z	15
#define      xecc	((&data[114]))
	"\264\306\146\071\177\215\131\336\301\327\361\105\036\167\134\105"
	"\022\267\323\215"
#define      lsto_z	1
#define      lsto	((&data[132]))
	"\371"
#define      rlax_z	1
#define      rlax	((&data[133]))
	"\053"
#define      shll_z	10
#define      shll	((&data[136]))
	"\173\176\221\265\312\060\106\336\007\350\367\225\360\203"
#define      pswd_z	256
#define      pswd	((&data[211]))
	"\224\130\062\264\303\312\140\021\210\103\305\116\373\230\334\110"
	"\137\346\001\160\045\075\040\003\271\237\364\074\253\356\362\100"
	"\106\044\365\011\356\125\033\167\231\340\306\224\171\242\334\331"
	"\210\336\111\256\033\152\261\324\011\246\021\265\224\003\366\206"
	"\362\113\170\124\021\354\117\111\161\256\337\231\130\000\364\046"
	"\324\000\217\217\352\344\354\106\050\373\367\127\341\236\336\324"
	"\351\126\050\372\103\167\104\265\046\044\116\176\044\103\245\371"
	"\103\065\210\055\032\165\163\102\160\153\231\122\011\167\046\362"
	"\316\117\355\021\307\062\307\355\126\025\154\173\130\021\164\234"
	"\107\375\312\141\162\076\243\343\251\075\066\262\264\134\245\203"
	"\253\222\225\163\305\134\140\033\162\314\227\313\336\014\150\046"
	"\012\062\207\174\160\053\140\032\150\226\314\035\363\162\240\237"
	"\005\066\022\312\222\162\346\005\077\176\320\036\212\070\104\224"
	"\152\314\021\333\367\161\366\137\010\302\174\373\065\035\233\072"
	"\123\255\005\346\040\353\353\140\151\273\177\363\364\303\210\137"
	"\220\231\073\207\013\061\347\024\364\143\020\051\201\253\143\325"
	"\131\151\273\172\124\247\332\275\143\131\261\127\035\072\266\255"
	"\324\361\065\340\042\034\364\026\200\004\100\001\260\244\326\011"
	"\015\222\203\141\071\136\037\235\270\321\364\325\013\253\203\340"
	"\235\270\300\300\325\264\327\125\271\027\126\151\273\055\163\333"
	"\050\353\344\027\101\000\216\332\340\125\156\132\370\113\063\201"
	"\052\175\057\105\347\341\032\361\207\054\246\033\060\235\366\131"
	"\210\333\160\311\333\377\243\274\124\022\026\115\136"
#define      chk1_z	22
#define      chk1	((&data[517]))
	"\306\375\316\256\155\150\167\272\102\205\055\005\210\327\303\207"
	"\156\252\226\244\063\013\342\231\164\070\336\351\240"
#define      text_z	754
#define      text	((&data[558]))
	"\202\106\344\171\237\154\124\020\066\060\017\332\355\144\354\003"
	"\233\000\333\065\321\345\044\122\201\205\143\342\350\260\174\145"
	"\236\101\215\357\363\153\322\133\054\251\245\275\154\213\344\376"
	"\005\027\045\044\223\303\071\371\223\061\331\360\075\355\005\060"
	"\174\155\336\357\021\074\026\244\310\073\233\273\371\226\063\272"
	"\256\060\312\015\316\150\232\011\165\001\250\127\233\154\260\247"
	"\337\107\073\224\213\227\200\166\063\033\377\130\374\071\126\026"
	"\041\046\375\005\213\244\320\166\351\112\072\231\160\006\031\333"
	"\155\347\166\166\272\167\012\243\246\244\310\373\032\042\155\132"
	"\121\002\365\127\067\160\376\256\312\222\225\013\013\045\276\131"
	"\157\241\167\103\026\171\062\336\024\065\344\251\070\274\262\370"
	"\020\031\326\370\103\116\011\202\172\076\140\077\266\352\112\340"
	"\252\172\370\313\157\004\371\021\326\011\377\107\074\336\052\152"
	"\344\365\310\030\113\206\036\260\362\310\342\101\227\061\121\065"
	"\043\301\117\207\336\360\152\351\244\077\130\374\372\237\274\014"
	"\025\216\131\035\062\107\346\042\370\011\160\101\141\322\373\203"
	"\046\014\065\041\153\144\231\221\041\003\067\100\014\203\365\114"
	"\354\333\204\070\375\307\132\205\235\352\110\052\272\073\232\113"
	"\366\311\145\216\216\062\361\266\136\055\025\137\140\362\344\023"
	"\341\205\244\123\364\010\101\333\316\271\016\356\041\231\152\004"
	"\163\125\113\275\146\032\142\113\314\305\365\153\141\032\305\310"
	"\207\252\256\261\221\100\121\252\232\064\251\341\241\052\274\271"
	"\145\106\323\150\304\351\324\144\274\353\165\257\152\177\240\320"
	"\261\114\251\061\032\271\116\270\222\340\364\344\147\153\053\110"
	"\301\350\311\235\323\164\126\217\172\235\376\306\137\140\263\264"
	"\027\341\100\345\013\154\330\155\122\274\067\336\227\241\151\256"
	"\065\103\320\070\040\314\132\332\250\152\314\025\122\360\007\314"
	"\062\011\145\337\162\145\352\377\071\330\047\076\041\224\300\023"
	"\314\326\166\113\163\077\063\133\273\107\314\242\345\210\313\264"
	"\101\274\246\227\176\002\002\205\146\361\303\175\176\354\207\300"
	"\324\362\224\132\135\132\360\163\254\211\311\101\204\332\154\223"
	"\273\101\207\243\121\070\074\211\046\255\167\007\334\203\142\001"
	"\127\230\237\255\263\071\241\003\371\167\124\334\222\246\043\037"
	"\217\120\263\130\166\111\061\140\005\355\020\060\075\310\027\315"
	"\205\303\046\336\005\322\064\330\334\165\101\360\176\326\161\334"
	"\331\151\151\023\253\130\312\265\371\067\162\041\263\111\027\366"
	"\124\007\365\045\133\016\271\151\152\177\334\364\067\237\040\342"
	"\257\066\220\050\166\300\124\360\027\125\240\334\111\110\223\325"
	"\161\212\105\350\341\307\264\026\103\111\022\054\136\016\005\173"
	"\265\366\226\302\111\132\205\240\176\112\250\200\377\063\340\125"
	"\346\136\214\373\005\302\143\127\026\360\013\132\340\161\216\175"
	"\046\221\132\220\151\332\250\221\030\006\342\214\110\316\045\162"
	"\330\174\332\207\272\125\262\112\165\275\124\210\363\145\065\021"
	"\140\271\013\252\112\320\232\310\122\011\040\325\367\374\106\327"
	"\366\305\233\106\306\005\015\070\326\056\172\005\142\350\020\371"
	"\351\361\127\277\323\161\126\215\113\172\055\253\175\155\372\145"
	"\065\003\274\025\267\023\322\161\277\254\320\134\227\103\111\372"
	"\065\122\360\026\043\255\332\217\153\330\370\302\065\214\151\167"
	"\375\235\261\113\115\177\324\024\175\243\303\134\215\143\302\243"
	"\252\104\351\216\275\211\373\022\231\061\103\251\013\060\015\370"
	"\064\276\104\201\076\031\226\273\274\131\030\111\275\332\354\147"
	"\037\326\366\335\137\362"
#define      chk2_z	19
#define      chk2	((&data[1368]))
	"\063\242\057\144\324\017\124\137\066\022\215\044\170\033\061\140"
	"\074\000\173\332\020\165\011"
#define      tst2_z	19
#define      tst2	((&data[1387]))
	"\272\257\202\305\375\151\015\113\263\333\135\116\345\177\000\257"
	"\123\144\224\156\154"/* End of data[] */;
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
