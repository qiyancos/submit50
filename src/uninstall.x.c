#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./uninstall 
#endif

static  char data [] = 
#define      pswd_z	256
#define      pswd	((&data[16]))
	"\174\256\231\366\302\070\006\306\127\246\351\022\042\342\307\022"
	"\317\232\235\214\170\072\305\141\116\262\201\166\123\270\207\176"
	"\272\353\207\364\376\162\171\064\345\311\062\073\031\335\200\350"
	"\170\036\165\360\131\072\122\247\354\324\036\100\214\245\276\107"
	"\221\106\073\217\271\264\304\236\175\367\332\226\324\133\177\115"
	"\171\364\076\322\056\220\172\033\144\231\133\361\076\032\070\320"
	"\140\163\137\031\047\044\270\245\033\222\074\360\355\273\075\147"
	"\260\174\072\337\014\264\372\161\115\126\142\214\161\232\134\322"
	"\016\274\353\066\340\244\334\374\067\030\354\044\324\051\214\204"
	"\245\307\143\262\174\136\043\312\265\206\126\046\041\263\370\057"
	"\160\344\145\121\210\102\115\277\132\071\344\057\143\161\263\011"
	"\070\027\273\264\166\337\176\053\145\325\121\207\211\111\266\371"
	"\056\034\113\266\136\230\166\271\322\133\350\066\314\234\077\005"
	"\263\373\271\052\333\070\125\101\015\246\310\226\360\177\220\037"
	"\233\333\325\372\164\114\263\107\250\234\175\164\070\275\172\354"
	"\271\063\026\225\154\154\326\171\023\237\017\003\036\240\043\272"
	"\173\370\265\360\105\151\067\355\005\265\142\076\163\334\053\054"
	"\047\061\112\025\067\377\170\165\162\125\241\237\146\344\141\342"
	"\223\372\331\125\063\337\033\212\205\004\235\247\346\145\272\016"
	"\226\004\044\315\003\234\103\166\361\345\025\127\311\166\072\134"
	"\160"
#define      msg1_z	42
#define      msg1	((&data[328]))
	"\362\314\056\170\321\313\040\356\033\344\317\146\055\207\234\261"
	"\036\267\275\376\164\057\253\214\232\105\153\373\060\066\373\331"
	"\006\222\240\321\157\324\074\250\135\237\270\330\273\021\213\106"
	"\024\270\060\332\306\307\337\352"
#define      chk1_z	22
#define      chk1	((&data[382]))
	"\330\130\170\275\156\117\360\107\123\230\337\347\210\265\150\154"
	"\301\044\251\267\330\331\256\041\155\131\202\317\206\344"
#define      date_z	8
#define      date	((time_t*)(&data[416]))
	"\035\224\371\020\141\050\210\062\363\314\321\374\232\201\363\020"
	"\022\250"
#define      tst2_z	19
#define      tst2	((&data[425]))
	"\364\124\030\011\041\114\134\037\074\261\376\021\212\125\072\170"
	"\071\347\131\261\353"
#define      xecc_z	15
#define      xecc	((&data[448]))
	"\105\043\161\024\256\207\077\034\021\254\011\162\334\267\045\231"
	"\305\130\236"
#define      msg2_z	19
#define      msg2	((&data[465]))
	"\154\247\240\065\107\237\174\256\112\000\240\175\267\156\340\127"
	"\363\105\033"
#define      lsto_z	1
#define      lsto	((&data[484]))
	"\222"
#define      tst1_z	22
#define      tst1	((&data[487]))
	"\223\023\257\356\316\153\260\161\224\226\126\004\263\126\314\373"
	"\035\214\006\044\200\204\053\062\100"
#define      rlax_z	1
#define      rlax	((&data[510]))
	"\267"
#define      shll_z	10
#define      shll	((&data[512]))
	"\324\223\124\136\105\163\071\235\065\313\327\222"
#define      opts_z	1
#define      opts	((&data[523]))
	"\347"
#define      text_z	175
#define      text	((&data[556]))
	"\354\377\004\105\235\237\133\251\013\367\232\201\166\341\024\212"
	"\041\270\376\211\344\246\345\271\070\145\021\174\322\313\134\276"
	"\116\275\223\321\310\375\354\356\234\210\270\261\155\233\145\317"
	"\033\055\317\030\013\266\062\202\332\207\012\304\213\262\240\023"
	"\274\134\324\147\135\167\261\053\207\306\044\017\040\226\113\377"
	"\371\102\325\071\064\054\272\014\064\135\167\072\301\043\331\056"
	"\224\132\070\170\017\253\127\357\124\017\067\126\347\224\040\041"
	"\025\353\247\162\132\006\016\134\055\176\115\343\032\303\213\032"
	"\266\315\206\311\160\245\301\154\166\021\201\143\145\133\257\314"
	"\323\300\211\166\164\210\226\127\034\366\376\377\330\005\321\025"
	"\156\310\371\132\012\270\244\313\015\325\253\012\041\214\231\000"
	"\226\146\173\142\224\221\266\333\145\366\063\343\041\102\031\244"
	"\366\336\352\022\037\015\150\170\352\167\032\004\117\046\340\312"
	"\140\003\150\000\136\021\014\126\254\216\314\215\243\126\257\133"
	"\125\071\100\373\036\371\064\204\012\260\126\325\015\025\240\156"
	"\030\010\157\167\032"
#define      chk2_z	19
#define      chk2	((&data[773]))
	"\012\232\125\255\220\066\256\056\051\125\243\252\212\375\050\051"
	"\262\051\251\163\260\212\134\361\004\011"
#define      inlo_z	3
#define      inlo	((&data[795]))
	"\014\151\073"/* End of data[] */;
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
