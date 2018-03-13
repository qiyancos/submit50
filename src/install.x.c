#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./install 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[4]))
	"\102\347\342\015\170\177\255\270\242\273\242\165\013\310\325\232"
	"\370\370\122\263\324\166\061\006\307\055\144\252\013\200"
#define      lsto_z	1
#define      lsto	((&data[30]))
	"\055"
#define      chk2_z	19
#define      chk2	((&data[34]))
	"\246\176\153\060\136\232\203\036\022\140\334\272\355\056\137\344"
	"\073\236\005\144\170\223\115\210\323\200"
#define      pswd_z	256
#define      pswd	((&data[99]))
	"\317\363\071\276\155\365\170\257\334\133\274\101\006\307\301\162"
	"\050\154\150\362\104\017\160\257\134\371\202\335\364\050\205\304"
	"\033\276\203\210\264\373\070\221\127\364\021\060\242\164\270\120"
	"\044\170\270\205\164\162\121\215\020\311\260\167\355\346\205\306"
	"\000\362\256\227\066\154\122\101\200\144\162\043\330\052\163\374"
	"\242\054\202\027\237\324\244\260\236\124\047\214\072\255\122\073"
	"\237\000\323\325\154\046\027\355\212\211\021\142\264\205\137\126"
	"\261\341\155\121\266\022\001\124\147\051\340\242\326\063\336\165"
	"\064\261\113\240\330\143\216\142\355\237\305\241\045\044\370\326"
	"\006\146\050\274\170\052\021\340\123\362\202\051\046\140\237\132"
	"\022\353\372\352\116\211\115\073\051\022\335\116\066\325\045\075"
	"\073\115\372\264\170\013\224\313\376\027\365\044\170\224\176\212"
	"\177\171\165\316\002\302\012\053\325\347\171\014\275\237\111\370"
	"\355\103\255\145\117\101\060\115\131\045\161\321\272\357\133\072"
	"\150\321\010\153\224\022\226\151\372\020\165\267\260\276\260\235"
	"\002\135\002\121\237\062\236\370\130\020\311\022\377\045\114\150"
	"\367\125\323\213\147\152\364\142\173\152\032\053\051\312\310\053"
	"\050\313\175\310\375\033\300\126\053\212\150\053\260\265\224\247"
	"\012\147\062\162\322\047\324\115\222\357\322\136\274\223\320\344"
	"\000\070\327\104\110\110\363\244\101\166\202\066\236\007\372\272"
	"\306\176\103\172\172\174\013\321\160\335\057\055\161\377\021\161"
	"\070\350\265\200"
#define      date_z	8
#define      date	((time_t*)(&data[400]))
	"\162\040\247\366\012\311\264\263\105\260\152"
#define      msg2_z	19
#define      msg2	((&data[411]))
	"\244\172\164\031\347\063\363\346\241\271\352\071\000\276\277\010"
	"\125\151\127\264\215\016\042\276\357"
#define      rlax_z	1
#define      rlax	((&data[433]))
	"\130"
#define      chk1_z	22
#define      chk1	((&data[438]))
	"\235\327\111\235\366\236\315\214\217\241\045\002\102\247\022\375"
	"\121\070\240\010\104\260\151\247\117\071\351\272\326\322\160"
#define      xecc_z	15
#define      xecc	((&data[465]))
	"\373\256\100\020\102\300\102\015\360\015\204\160\217\177\254"
#define      opts_z	1
#define      opts	((&data[480]))
	"\150"
#define      shll_z	10
#define      shll	((&data[481]))
	"\275\043\217\305\300\030\315\064\022\255\323\304"
#define      text_z	565
#define      text	((&data[532]))
	"\062\067\202\154\062\360\027\013\216\357\124\053\330\017\001\253"
	"\200\130\257\232\325\045\325\371\105\317\314\011\103\024\357\165"
	"\113\162\342\176\143\371\211\141\274\327\242\205\255\102\072\064"
	"\302\163\050\167\314\102\103\260\326\034\272\243\064\231\337\350"
	"\113\047\336\043\006\157\250\011\072\117\324\370\233\137\251\135"
	"\012\153\071\025\127\375\143\031\370\306\224\244\122\136\247\344"
	"\304\130\123\374\055\030\216\265\043\017\147\235\310\005\333\034"
	"\046\176\236\065\276\100\120\371\214\202\050\043\241\033\164\241"
	"\224\060\031\337\345\261\070\000\257\274\163\340\161\131\271\271"
	"\265\014\207\102\011\357\050\312\077\142\311\340\105\124\370\213"
	"\132\206\011\350\306\062\313\364\324\063\325\073\057\270\241\324"
	"\204\375\240\031\353\161\174\203\057\163\062\152\256\122\176\013"
	"\156\376\241\234\367\135\177\161\360\316\322\150\135\275\356\011"
	"\327\070\274\126\153\014\332\235\311\264\211\311\042\321\330\165"
	"\143\152\350\151\004\250\107\126\162\203\264\220\373\127\320\055"
	"\207\035\167\236\335\130\147\155\070\335\274\157\054\375\053\146"
	"\346\335\222\065\312\022\046\025\052\151\225\244\133\177\062\146"
	"\103\375\110\205\320\156\174\055\067\005\044\006\017\145\053\177"
	"\065\163\321\030\017\032\354\062\322\335\206\215\353\333\113\137"
	"\137\170\101\203\164\231\376\231\145\245\202\035\227\333\122\010"
	"\073\052\321\122\376\072\065\165\037\031\161\361\305\242\103\133"
	"\011\321\222\142\303\254\075\255\231\057\362\104\074\237\036\217"
	"\376\250\242\110\177\211\012\330\343\232\226\276\015\301\161\242"
	"\174\320\375\375\113\201\003\241\344\360\170\155\140\037\042\042"
	"\204\046\320\341\305\321\003\070\311\225\073\042\313\111\067\367"
	"\125\052\144\263\237\331\016\237\251\131\225\132\044\204\040\201"
	"\210\217\023\236\007\174\234\346\373\074\175\076\040\001\144\023"
	"\234\035\232\157\002\032\037\325\320\341\332\255\216\212\260\033"
	"\047\142\115\162\004\230\303\101\157\212\021\072\042\305\304\001"
	"\145\316\217\117\314\272\376\121\270\265\261\241\376\177\061\074"
	"\147\350\343\043\015\335\335\024\041\277\174\271\162\160\356\355"
	"\120\173\173\366\003\345\306\224\262\157\051\374\341\040\020\272"
	"\331\211\257\164\351\071\264\000\013\052\034\232\031\000\361\140"
	"\103\272\066\375\254\316\072\335\342\125\000\376\166\051\376\166"
	"\137\156\260\053\364\171\207\023\300\161\056\002\172\213\216\060"
	"\171\234\334\010\101\056\303\300\124\347\150\356\071\257\200\242"
	"\217\232\064\312\022\230\202\154\334\305\274\347\165\205\160\041"
	"\073\355\014\165\357\340\254\326\013\277\243\114\361\350\335\034"
	"\301\355\036\154\155\167\033\010\114\101\335\105\206\254\021\220"
	"\360\046\177\145\162\362\110\360\125\101\171\106\051\127\143\352"
	"\105\202\127\262\371\163\273\105\264\230\213\073\105\235\313\065"
	"\303\113\233\065\076\343\046\223\044\240\332\116\370\076\071\075"
	"\300\220\360\271\004\254\377\271\104\212\364\212\047\300\277\353"
	"\014\133\041\112\076\110\335\143\350\270\262\341\366\353\036\267"
	"\174\017\161\200\273\160\072\000\373\056\212\043\357\112\016\373"
	"\245\057\105\344\167\043\110\140\333\372\101"
#define      tst2_z	19
#define      tst2	((&data[1228]))
	"\210\143\160\371\265\272\152\162\366\214\165\071\166\144\301\361"
	"\260\232\013\130\207\244\225\344"
#define      inlo_z	3
#define      inlo	((&data[1248]))
	"\146\140\000"
#define      msg1_z	42
#define      msg1	((&data[1255]))
	"\267\210\074\001\245\261\056\147\325\236\217\043\001\101\246\020"
	"\301\030\353\172\222\202\047\005\267\054\067\275\020\313\201\033"
	"\047\154\006\205\032\352\102\060\310\240\375\072\056\303\227\067"
	"\247"/* End of data[] */;
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
