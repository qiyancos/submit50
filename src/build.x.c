#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\263"
#define      lsto_z	1
#define      lsto	((&data[1]))
	"\147"
#define      tst1_z	22
#define      tst1	((&data[2]))
	"\176\012\157\042\155\327\362\126\263\206\065\052\141\131\060\301"
	"\167\356\034\241\006\135\226\135\254\162\131"
#define      rlax_z	1
#define      rlax	((&data[29]))
	"\037"
#define      chk2_z	19
#define      chk2	((&data[34]))
	"\206\355\036\123\261\163\362\246\063\267\141\241\125\065\005\036"
	"\247\163\241\036\102\304\372\264"
#define      pswd_z	256
#define      pswd	((&data[113]))
	"\022\332\071\315\301\305\073\027\360\267\067\341\116\225\215\301"
	"\357\071\024\344\055\352\034\264\327\072\010\214\102\361\373\124"
	"\314\065\042\215\372\136\245\352\025\335\314\143\162\131\044\142"
	"\222\071\106\300\044\143\165\373\236\175\207\063\256\254\271\144"
	"\344\307\045\353\172\337\253\373\220\360\066\132\136\054\140\261"
	"\172\226\030\127\267\200\324\161\316\176\245\175\052\137\342\017"
	"\046\007\372\241\347\245\234\170\226\322\322\364\377\063\246\172"
	"\312\276\321\201\077\246\363\016\045\231\213\120\370\155\137\037"
	"\165\132\300\134\377\134\324\226\057\247\213\057\333\061\251\245"
	"\360\173\046\057\041\031\076\106\262\311\226\253\067\366\312\254"
	"\120\212\011\120\347\336\347\026\205\162\105\141\244\357\006\224"
	"\152\055\304\214\106\002\322\371\314\151\245\003\137\157\260\260"
	"\372\272\000\341\230\347\370\036\132\076\177\376\055\206\222\230"
	"\263\126\044\372\131\367\364\045\140\231\051\300\010\331\160\002"
	"\223\161\344\054\131\334\113\263\033\313\261\111\121\104\341\004"
	"\233\006\376\364\375\363\032\136\214\103\036\224\034\217\227\260"
	"\001\174\335\132\131\050\016\164\363\300\275\104\005\237\111\240"
	"\246\110\225\244\073\257\002\307\363\041\134\020\261\364\301\262"
	"\160\236\015\311\307\033\075\272\333\373\377\341\233\111\201\102"
	"\221\027\346\315\307\351\225\272\012\361\312\340\157\203\064\073"
	"\270\126\311\263\264\156\236\312\113\152\055\276\304\122\040\126"
	"\213\147\027\257\313\214\253"
#define      chk1_z	22
#define      chk1	((&data[397]))
	"\023\064\025\322\106\362\021\164\207\340\121\340\062\206\014\327"
	"\152\112\200\055\153\363\112"
#define      msg2_z	19
#define      msg2	((&data[423]))
	"\265\156\326\034\245\234\000\357\030\103\066\045\306\143\226\346"
	"\274\147\034\327\036\227\176\042"
#define      text_z	686
#define      text	((&data[603]))
	"\125\070\052\202\367\356\325\030\105\140\200\135\020\113\352\273"
	"\265\364\357\377\156\245\177\043\024\125\241\067\340\216\367\065"
	"\307\041\270\277\020\215\327\125\356\127\263\377\243\235\272\131"
	"\222\252\131\000\120\330\044\145\055\306\234\015\124\223\102\034"
	"\265\373\333\305\210\263\033\167\012\316\166\256\153\061\007\376"
	"\333\140\376\053\070\042\220\145\350\055\163\075\300\266\132\165"
	"\261\065\072\072\350\126\261\363\044\047\242\220\131\251\216\064"
	"\012\214\140\103\257\361\251\230\036\034\326\336\322\060\124\204"
	"\146\217\276\117\345\157\102\011\227\345\231\360\217\047\045\231"
	"\264\206\335\144\167\206\375\226\243\323\164\166\004\311\372\273"
	"\337\231\332\366\230\016\234\343\312\041\311\317\075\062\100\315"
	"\276\234\235\242\135\004\214\373\073\262\002\323\100\003\042\140"
	"\226\356\272\025\131\272\365\331\307\151\246\141\053\365\212\351"
	"\317\024\351\332\365\125\356\253\124\341\270\221\276\162\127\034"
	"\266\321\032\127\335\015\312\057\023\167\252\025\331\213\276\102"
	"\065\354\336\200\344\244\320\334\146\242\242\044\371\305\000\100"
	"\344\165\375\337\174\064\025\133\341\017\114\035\202\362\031\306"
	"\070\146\162\315\024\220\262\165\013\332\111\145\262\123\317\325"
	"\372\256\322\133\325\271\377\177\053\034\346\300\123\370\144\107"
	"\256\224\202\324\117\347\361\236\242\326\136\020\351\110\011\203"
	"\013\045\322\330\237\164\102\017\320\307\123\321\107\062\325\014"
	"\264\312\076\346\274\372\353\355\323\004\163\277\223\214\140\011"
	"\230\374\146\075\117\217\227\140\056\265\310\077\033\125\124\132"
	"\267\035\360\116\267\377\145\124\346\276\176\225\265\136\175\341"
	"\336\260\063\143\225\060\365\064\036\331\150\027\246\006\056\026"
	"\100\241\245\157\104\352\333\115\111\277\111\301\362\364\300\221"
	"\015\071\274\231\012\200\316\106\275\353\363\042\014\262\104\034"
	"\246\001\031\350\073\136\264\340\070\300\237\360\154\333\302\102"
	"\053\206\173\121\346\326\105\254\165\125\370\146\142\306\163\161"
	"\222\173\031\233\124\337\332\033\026\254\001\260\032\141\017\353"
	"\223\212\343\057\300\020\130\036\231\134\035\101\172\216\277\003"
	"\144\277\033\103\371\121\275\306\111\162\066\305\367\207\314\135"
	"\212\306\041\223\342\151\072\043\237\231\275\166\154\302\247\026"
	"\275\241\224\105\331\373\244\233\154\262\325\152\206\042\073\141"
	"\346\023\272\047\301\007\233\372\157\052\265\046\065\251\366\347"
	"\104\166\320\364\170\010\371\134\330\244\010\150\151\250\052\307"
	"\227\204\351\241\322\201\115\352\102\244\104\336\007\224\126\167"
	"\030\063\076\010\276\116\344\332\223\250\026\105\223\133\127\055"
	"\231\117\040\277\147\072\156\067\056\256\155\173\026\273\250\141"
	"\132\130\047\004\350\251\312\230\331\027\141\224\271\237\107\012"
	"\133\215\114\043\150\203\172\021\071\332\042\257\202\170\324\253"
	"\374\151\200\042\374\275\056\167\215\215\255\101\311\226\244\035"
	"\306\322\230\167\172\237\151\136\020\233\326\023\157\057\354\030"
	"\335\047\347\342\200\014\372\210\335\174\161\117\072\053\171\361"
	"\262\247\350\315\160\072\242\107\213\211\004\340\072\151\041\214"
	"\320\207\235\254\155\243\053\260\106\175\077\216\351\374\014\146"
	"\352\225\355\131\172\245\311\362\173\371\347\355\041\331\233\344"
	"\303\170\310\073\064\242\245\302\270\375\254\244\304\312\163\124"
	"\073\066\132\157\033\062\223\312\064\301\120\257\361\267\204\335"
	"\167\377\173\253\314\224\145\026\301\356\223\055\264\114\322\130"
	"\200\307\217\364\237\241\060\131\142\060\100\020\373\071\245\335"
	"\260\227\045\113\015\234\153\060\021\153\234\321\371\126\106\207"
	"\050\016\226\250\135\065\151\220\217\161\063\265\026\153\130\271"
	"\272\075\051\375\107\301\342\340\262\161\010\327\013\275\136\350"
	"\041\325\157\037\153\023\363\340\211\367\251\204\142\002\075\035"
	"\077\146\032\206\047\374\147\331\155\160\261\171\055\017\142\117"
	"\345\321\157\121\344\142\061\156\132\333\363\274\335\060\331\035"
	"\227\364\244\277\360\014\231\136\174\113\327\252\132\071\372\100"
	"\013\151\221\360\313\303\137\045\236\122\342\174\202\274\231\032"
	"\260\076\332\240\112\163\376\307\277\326\161\032\020\153\132\034"
	"\324\353\014\240\256\153\305\115\275\247\311\100\144\143"
#define      xecc_z	15
#define      xecc	((&data[1418]))
	"\063\253\316\153\311\011\256\045\327\353\213\151\146\255\221\065"
	"\264"
#define      tst2_z	19
#define      tst2	((&data[1438]))
	"\264\150\212\044\307\067\356\215\036\110\321\330\111\255\316\017"
	"\177\325\221\337\156\210\046\202\233"
#define      msg1_z	42
#define      msg1	((&data[1469]))
	"\147\310\304\007\167\057\315\305\355\113\074\051\031\174\377\017"
	"\035\052\202\377\235\063\112\166\143\373\355\234\034\147\077\352"
	"\213\161\123\330\143\271\266\254\131\054\376\223\243\356\261\036"
	"\062\042\316\165\216\056\331\362\211\355"
#define      date_z	8
#define      date	((time_t*)(&data[1520]))
	"\202\150\240\143\025\103\013\211\006\304\125"
#define      shll_z	10
#define      shll	((&data[1531]))
	"\135\123\161\333\135\323\223\365\132\306\012\221\173\357"
#define      inlo_z	3
#define      inlo	((&data[1543]))
	"\143\162\243"/* End of data[] */;
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
