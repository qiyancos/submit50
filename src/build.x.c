#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\224"
#define      tst2_z	19
#define      tst2	((&data[2]))
	"\177\202\342\272\226\346\157\322\210\074\355\102\312\206\052\213"
	"\023\147\033\111\123\334\361"
#define      pswd_z	256
#define      pswd	((&data[50]))
	"\077\274\247\145\234\313\377\056\277\064\376\137\255\341\114\045"
	"\130\267\230\132\132\203\254\007\003\377\114\040\071\260\034\210"
	"\354\266\300\227\001\323\362\365\345\331\226\027\301\101\113\355"
	"\271\063\075\224\133\355\313\047\040\030\107\132\311\144\342\265"
	"\032\243\114\034\166\077\022\134\030\250\164\332\352\277\310\243"
	"\363\005\070\117\363\004\166\023\034\275\156\345\042\120\233\075"
	"\364\350\131\153\047\153\307\100\024\074\033\376\374\343\242\357"
	"\350\333\076\334\337\264\357\373\162\136\341\225\257\175\322\243"
	"\145\053\016\215\227\326\316\253\022\351\252\016\314\114\376\265"
	"\047\074\221\007\361\201\003\144\337\345\371\216\142\313\062\310"
	"\367\100\126\217\027\044\073\052\015\345\071\331\062\067\216\132"
	"\164\040\141\146\241\144\312\201\112\304\020\254\220\102\165\210"
	"\203\313\027\232\357\122\305\375\070\376\326\152\066\145\304\252"
	"\206\046\020\050\212\333\251\325\240\271\201\061\373\367\272\177"
	"\303\321\031\263\044\337\260\135\336\207\307\024\354\214\277\163"
	"\262\317\233\075\253\104\022\114\376\224\176\372\213\070\171\116"
	"\012\223\001\057\162\262\214\120\071\123\145\046\340\044\231\222"
	"\364\064\320\237\171\342\354\170\166\152\343\365\005\114\067\105"
	"\010\337\252\244\253\251\322\153\336\321"
#define      opts_z	1
#define      opts	((&data[322]))
	"\324"
#define      msg1_z	42
#define      msg1	((&data[330]))
	"\316\111\145\050\315\021\060\007\217\333\100\002\366\214\241\203"
	"\325\255\144\343\344\115\023\075\132\302\106\100\317\040\111\127"
	"\013\340\107\145\061\110\115\233\263\151\334\200\113\144\361\320"
	"\056"
#define      text_z	359
#define      text	((&data[378]))
	"\305\027\137\375\134\147\373\175\254\232\355\275\230\347\317\377"
	"\316\263\331\206\221\145\023\323\134\350\354\112\270\325\057\165"
	"\002\225\113\256\366\031\140\342\100\224\055\154\012\240\177\340"
	"\020\360\170\125\242\323\317\047\365\153\334\174\057\254\337\065"
	"\206\374\117\105\315\103\070\101\274\065\147\015\262\224\032\356"
	"\356\325\311\101\071\255\122\050\314\146\254\134\041\160\147\071"
	"\105\301\001\316\331\152\072\132\233\014\003\157\027\125\201\310"
	"\317\167\347\157\353\277\225\251\174\101\322\350\073\057\165\257"
	"\272\223\332\324\206\041\274\051\360\100\143\356\227\050\220\107"
	"\056\373\070\346\127\353\024\376\245\034\077\312\076\333\102\357"
	"\114\042\371\066\154\077\226\171\364\147\043\170\267\366\126\053"
	"\345\376\142\325\212\370\366\224\252\351\051\203\225\030\346\140"
	"\273\316\244\110\066\316\016\062\362\224\050\151\223\111\376\174"
	"\345\225\346\052\035\257\073\251\245\073\274\140\005\324\264\212"
	"\340\137\170\153\301\136\226\352\310\375\202\320\050\364\153\025"
	"\070\351\015\245\103\343\213\165\224\177\104\027\010\266\021\300"
	"\045\013\315\211\112\156\135\301\074\312\110\222\066\100\345\355"
	"\226\353\230\343\246\043\212\114\333\005\173\303\241\351\223\374"
	"\273\322\251\247\144\304\366\316\367\024\165\027\336\147\124\017"
	"\227\235\371\335\013\051\131\066\335\037\241\202\052\212\347\373"
	"\062\265\001\166\153\313\075\076\232\011\303\202\263\036\045\021"
	"\320\277\342\105\352\001\144\052\335\335\147\054\004\074\222\362"
	"\300\077\070\177\037\201\277\050\222\064\217\307\161\334\007\014"
	"\210\260\336"
#define      chk2_z	19
#define      chk2	((&data[745]))
	"\276\032\006\167\240\314\315\034\071\037\240\023\034\234\306\063"
	"\055\275\206\106\250\142\325\314"
#define      tst1_z	22
#define      tst1	((&data[770]))
	"\321\315\342\056\205\272\164\064\223\154\204\024\101\250\110\036"
	"\074\124\256\165\076\124\230\104\110"
#define      date_z	8
#define      date	((time_t*)(&data[800]))
	"\365\021\171\014\160\166\150\330\223\246\311\044\364\347\273\171"
	"\123\157"
#define      shll_z	10
#define      shll	((&data[812]))
	"\303\317\173\166\050\025\256\050\062\036\177\104"
#define      rlax_z	1
#define      rlax	((&data[822]))
	"\355"
#define      inlo_z	3
#define      inlo	((&data[823]))
	"\044\064\124"
#define      chk1_z	22
#define      chk1	((&data[827]))
	"\253\256\366\313\173\007\260\217\032\331\123\346\125\147\272\006"
	"\350\045\102\326\237\146\077"
#define      xecc_z	15
#define      xecc	((&data[852]))
	"\370\322\102\066\144\053\217\227\133\246\123\027\346\023\376\142"
	"\307\000\355\343"
#define      msg2_z	19
#define      msg2	((&data[873]))
	"\061\141\054\205\050\325\074\051\131\011\357\046\357\376\063\121"
	"\362\010\062\336\025\344\377\321"/* End of data[] */;
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
