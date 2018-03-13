#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\174"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\251\264\335"
#define      msg1_z	42
#define      msg1	((&data[12]))
	"\115\260\012\177\053\122\116\216\114\144\205\020\325\043\346\375"
	"\340\132\322\300\214\207\346\355\071\140\157\234\135\124\210\267"
	"\322\366\272\132\163\340\167\147\351\132\041\213\001\145\002\054"
	"\021\131\152\140\072\345"
#define      date_z	8
#define      date	((time_t*)(&data[64]))
	"\075\366\067\240\323\332\363\154\245\025\052\046\037\152"
#define      pswd_z	256
#define      pswd	((&data[108]))
	"\162\337\244\001\364\151\154\101\031\167\301\105\311\020\324\064"
	"\160\016\031\230\067\102\326\056\172\166\001\125\176\217\125\361"
	"\157\371\362\144\127\227\316\104\313\120\312\067\217\134\014\203"
	"\152\025\144\146\047\303\117\376\221\304\330\204\320\223\052\352"
	"\075\102\370\225\332\306\332\246\027\244\335\246\000\351\052\153"
	"\377\217\321\047\123\041\045\344\345\376\150\266\222\223\240\320"
	"\325\230\145\257\137\077\125\166\344\063\035\345\034\110\120\034"
	"\327\041\104\052\103\151\017\050\150\170\337\373\013\177\313\340"
	"\030\061\217\170\160\345\356\124\030\013\071\065\123\212\121\053"
	"\253\226\126\356\000\145\027\150\335\366\143\350\166\057\311\217"
	"\140\130\007\320\075\366\045\126\002\137\213\125\351\335\201\225"
	"\163\327\204\163\075\233\334\033\222\077\004\011\156\315\231\316"
	"\046\240\237\144\227\305\272\231\045\105\357\017\043\160\244\226"
	"\110\051\012\206\305\346\241\127\046\245\141\224\163\372\143\231"
	"\233\003\375\062\310\270\313\356\376\273\375\041\053\241\270\164"
	"\312\302\372\217\251\234\347\317\102\110\144\265\103\307\117\336"
	"\313\114\020\224\004\334\202\002\227\177\044\303\040\334\067\353"
	"\237\062\173\110\317\142\027\021\253\173\307\356\103\026\314\016"
	"\142\335\242\147\142\137\246\174\327\147\301\241\170\226\325\351"
	"\244\356\201\334\061\127\012\254\316\014\001\115\234\127\076\013"
	"\120\061\157\263\221\026\057\150\175\361\011\365\207\336\336\053"
	"\315\140\010\376\270\023\253\206\040\254\324\274\003\022\310\124"
	"\104\070\007\325"
#define      xecc_z	15
#define      xecc	((&data[428]))
	"\251\235\233\145\304\046\101\352\244\253\277\370\346\021\030"
#define      opts_z	1
#define      opts	((&data[443]))
	"\323"
#define      text_z	643
#define      text	((&data[554]))
	"\240\332\362\001\343\361\271\367\234\100\027\110\025\323\114\047"
	"\233\241\153\324\250\101\042\337\176\356\007\305\257\266\352\120"
	"\221\334\122\164\316\013\153\152\114\202\263\141\126\377\211\362"
	"\241\365\306\111\066\350\050\265\326\057\172\206\346\144\327\167"
	"\101\051\353\020\065\127\172\202\332\055\343\060\055\155\042\316"
	"\142\351\027\231\321\100\116\250\160\310\057\126\055\006\315\157"
	"\057\271\177\145\020\372\347\352\047\313\033\124\070\076\356\203"
	"\175\174\145\310\030\151\341\052\020\215\215\375\074\366\341\312"
	"\340\067\252\012\323\007\125\135\026\262\273\177\273\043\346\121"
	"\110\152\026\112\227\340\201\102\304\356\270\241\117\160\136\202"
	"\324\022\221\233\204\225\317\252\315\020\066\001\362\302\256\225"
	"\111\340\133\147\300\273\021\275\113\034\272\005\052\007\001\006"
	"\226\250\207\146\233\375\251\361\123\021\067\304\033\240\124\340"
	"\256\247\342\131\003\047\355\037\160\307\124\151\111\246\203\231"
	"\312\321\021\361\250\064\352\336\200\274\065\155\225\224\342\234"
	"\272\374\140\150\174\223\064\121\173\324\043\241\232\014\070\107"
	"\261\166\173\144\162\167\103\302\200\277\201\070\046\346\130\042"
	"\235\070\163\237\314\252\033\373\262\135\336\166\236\176\222\157"
	"\004\107\254\237\000\316\325\223\251\270\160\130\261\254\301\277"
	"\376\024\343\143\203\274\323\176\142\074\144\001\325\152\040\137"
	"\355\235\234\021\263\140\175\040\205\042\074\337\104\325\124\363"
	"\111\016\165\260\053\332\012\126\216\351\235\151\245\017\113\163"
	"\224\113\061\016\070\245\035\241\113\204\343\124\374\160\030\376"
	"\365\201\342\364\321\341\170\222\210\150\350\211\327\230\343\034"
	"\310\027\217\164\251\123\074\111\017\223\320\177\344\206\160\062"
	"\104\121\024\215\146\303\021\060\351\242\113\270\331\141\340\056"
	"\023\002\257\305\031\176\076\220\257\062\056\110\245\122\316\274"
	"\137\363\143\303\103\362\115\127\252\166\131\221\221\336\147\335"
	"\040\213\201\313\112\102\155\341\275\040\177\363\066\013\036\103"
	"\370\257\305\173\350\247\161\040\107\242\375\371\346\142\122\276"
	"\362\126\033\021\044\227\041\265\073\002\232\056\250\142\040\031"
	"\166\327\052\114\344\164\056\141\136\012\117\141\140\155\322\002"
	"\000\235\045\115\213\275\230\250\055\127\235\176\122\265\065\301"
	"\066\334\252\336\227\036\273\156\057\102\264\327\220\070\040\102"
	"\203\071\165\260\345\021\230\234\235\367\207\100\031\066\266\000"
	"\347\017\141\316\040\352\040\317\242\243\113\302\343\254\036\000"
	"\372\307\372\276\177\164\101\151\044\021\211\332\242\053\254\343"
	"\021\373\142\110\213\241\330\327\002\350\320\244\047\346\255\352"
	"\250\053\031\040\267\252\151\160\133\157\050\100\302\311\266\360"
	"\304\320\136\306\236\201\214\313\226\265\273\136\167\253\263\204"
	"\242\305\273\331\377\342\000\043\160\231\165\301\324\004\357\101"
	"\002\211\075\300\262\117\067\304\175\353\266\201\147\256\273\141"
	"\142\172\206\337\171\151\235\004\172\365\027\230\363\031\116\132"
	"\010\364\031\304\311\277\144\026\347\214\210\101\116\244\171\227"
	"\110\140\377\044\355\237\071\073\264\271\202\162\305\234\057\072"
	"\050\277\022\274\212\232\354\143\373\255\215\134\376\174\062\243"
	"\125\204\177\361\045\201\041\062\311\214\330\054\076\151\012\260"
	"\073\043\233\047\073\064\371\173\203\242\354\114\321\103\171\327"
	"\021\351\007\312\151\154\333\143"
#define      lsto_z	1
#define      lsto	((&data[1220]))
	"\221"
#define      shll_z	10
#define      shll	((&data[1223]))
	"\127\040\165\305\300\034\042\135\331\334\325\306\003\363"
#define      tst1_z	22
#define      tst1	((&data[1236]))
	"\102\223\136\100\143\341\307\103\376\251\210\357\050\337\050\266"
	"\265\347\112\313\211\266\240"
#define      tst2_z	19
#define      tst2	((&data[1261]))
	"\247\367\266\032\231\033\074\267\141\110\114\127\243\172\317\030"
	"\326\107\001\174\217\170\352\161\216\373"
#define      chk1_z	22
#define      chk1	((&data[1287]))
	"\304\002\241\051\057\007\234\135\017\233\105\043\070\100\234\352"
	"\276\307\347\314\105\346\304\023\345\050\126\147\263"
#define      msg2_z	19
#define      msg2	((&data[1314]))
	"\315\273\102\110\056\245\022\351\360\066\102\333\225\174\356\216"
	"\176\120\221\076\151\226"
#define      chk2_z	19
#define      chk2	((&data[1338]))
	"\350\364\217\130\100\130\021\056\143\255\022\045\225\053\264\333"
	"\056\030\226\351\047\147\223\330\066\213"/* End of data[] */;
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
