#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./build 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\054"
#define      pswd_z	256
#define      pswd	((&data[1]))
	"\134\261\035\157\365\125\207\237\216\057\340\361\246\247\323\165"
	"\231\065\171\010\264\244\224\212\047\344\366\361\264\235\363\021"
	"\117\020\201\104\145\010\343\364\067\304\346\336\153\272\123\005"
	"\357\314\016\243\161\242\056\230\207\045\211\074\302\175\115\022"
	"\215\317\126\363\327\072\350\017\376\316\355\152\211\101\157\170"
	"\015\175\034\177\040\112\030\250\157\241\344\062\037\062\104\254"
	"\001\233\240\331\326\211\351\324\127\326\076\341\027\256\131\045"
	"\054\166\245\114\301\275\365\061\136\332\144\175\015\250\052\016"
	"\104\313\350\032\124\321\357\254\250\056\215\300\334\347\346\010"
	"\136\213\125\037\110\113\121\247\045\265\045\062\136\120\101\242"
	"\033\052\275\160\373\254\034\244\332\252\144\267\222\112\300\360"
	"\326\026\020\036\141\141\306\206\027\353\271\165\073\372\030\127"
	"\045\325\307\040\202\344\304\135\217\051\025\041\164\325\022\112"
	"\354\042\151\115\203\057\324\233\033\216\020\126\211\050\256\256"
	"\376\166\316\201\133\223\337\352\275\364\014\062\312\036\175\266"
	"\100\346\003\304\026\330\137\062\146\160\211\357\231\067\235\230"
	"\364\275\355\000\360\267\036\155\155\137\124\161\044\153\112\204"
	"\235\260\364\046\240\216\135\076\046\013\252\077\025\253\070\011"
	"\151\045\011\131\335\050\306\113\210\033\275\254\206\007\061\043"
	"\270\046\112\131\264\250\227\332\264\102\032\311\355\122\322"
#define      xecc_z	15
#define      xecc	((&data[321]))
	"\260\000\271\303\257\205\104\224\135\125\227\107\231\344\373\223"
	"\126\004\167"
#define      msg2_z	19
#define      msg2	((&data[341]))
	"\137\071\037\042\231\013\221\002\126\347\216\000\140\065\212\330"
	"\162\212\331\017\030\030\147"
#define      lsto_z	1
#define      lsto	((&data[362]))
	"\205"
#define      chk1_z	22
#define      chk1	((&data[366]))
	"\105\056\020\063\356\251\021\355\125\300\315\161\022\125\147\075"
	"\210\364\060\151\112\006\131\211\304\037\342"
#define      inlo_z	3
#define      inlo	((&data[390]))
	"\300\356\055"
#define      shll_z	10
#define      shll	((&data[394]))
	"\227\073\356\163\210\055\306\307\163\351\223\005"
#define      tst1_z	22
#define      tst1	((&data[406]))
	"\137\142\057\070\261\343\214\117\113\040\153\255\007\077\021\027"
	"\266\362\364\054\071\002\056\277\375"
#define      tst2_z	19
#define      tst2	((&data[431]))
	"\046\276\041\176\216\233\327\240\262\201\371\304\005\145\315\326"
	"\131\152\002\025\152"
#define      opts_z	1
#define      opts	((&data[451]))
	"\214"
#define      chk2_z	19
#define      chk2	((&data[452]))
	"\215\023\364\227\300\225\033\162\245\107\265\300\144\336\241\333"
	"\073\032\166"
#define      text_z	686
#define      text	((&data[540]))
	"\154\207\077\277\300\352\000\115\151\227\122\304\337\255\043\237"
	"\252\020\361\007\066\134\313\310\003\256\352\061\012\122\216\167"
	"\331\315\066\232\270\067\347\041\316\071\345\256\347\011\115\222"
	"\031\077\231\120\233\144\030\237\023\003\320\036\126\136\225\057"
	"\053\314\311\343\003\053\071\055\261\374\125\240\051\322\276\201"
	"\171\056\014\177\372\246\237\000\334\222\055\134\060\305\277\210"
	"\121\063\271\146\126\221\123\163\311\362\045\257\236\347\115\045"
	"\070\225\160\110\365\320\331\252\327\261\263\276\213\365\071\207"
	"\043\156\326\026\022\300\312\131\145\373\131\134\267\206\143\123"
	"\377\077\073\013\261\251\201\331\165\034\000\217\056\250\327\140"
	"\134\125\007\352\137\055\253\144\166\117\306\075\216\015\357\077"
	"\252\032\043\037\177\137\224\076\117\353\267\016\217\157\244\117"
	"\273\323\203\322\054\173\010\315\347\362\302\351\310\224\002\057"
	"\161\235\024\052\243\305\255\117\106\070\244\126\345\003\255\335"
	"\102\140\366\226\325\373\307\051\243\006\256\212\311\076\042\130"
	"\222\065\255\327\123\037\015\075\032\350\141\346\205\230\234\261"
	"\353\210\115\002\030\014\002\335\313\227\347\021\311\160\364\042"
	"\172\075\334\112\051\222\264\354\156\012\355\135\131\323\370\242"
	"\122\244\213\077\145\034\106\156\020\376\200\102\152\263\232\166"
	"\170\103\170\323\041\371\070\053\350\315\166\227\140\347\051\230"
	"\232\326\120\063\241\146\314\264\261\130\226\035\312\174\172\151"
	"\037\202\112\301\067\062\157\251\317\076\314\055\103\371\204\216"
	"\221\323\073\163\022\334\265\044\351\376\373\321\210\074\063\021"
	"\107\342\365\022\331\124\132\372\110\271\126\155\214\056\152\370"
	"\122\217\125\116\262\354\030\053\012\031\135\173\234\133\376\350"
	"\345\171\053\276\316\012\176\214\310\174\143\240\236\357\312\360"
	"\374\130\250\162\102\116\246\252\176\314\163\142\274\137\020\110"
	"\357\307\015\320\115\333\140\054\011\163\101\144\225\225\040\110"
	"\014\206\361\226\314\051\371\313\012\070\253\141\114\363\263\307"
	"\025\371\231\357\233\011\336\054\066\025\327\075\000\031\342\075"
	"\332\374\251\166\363\151\370\241\007\160\136\352\345\323\304\260"
	"\235\201\312\325\352\321\204\077\254\336\016\313\013\134\242\053"
	"\347\226\072\375\166\206\021\265\313\267\134\057\001\023\261\250"
	"\272\355\214\306\002\145\121\166\200\210\300\102\340\177\355\055"
	"\214\271\252\045\024\162\222\312\164\014\271\070\315\303\306\315"
	"\331\305\066\044\157\276\213\330\126\014\002\020\271\244\046\176"
	"\326\124\334\307\160\224\040\363\353\021\114\350\001\275\113\270"
	"\273\123\271\062\223\345\046\344\247\342\341\007\167\205\377\155"
	"\336\220\357\126\224\037\233\161\134\221\205\252\112\240\235\356"
	"\311\277\262\167\356\316\110\214\323\175\345\232\243\051\304\345"
	"\030\071\021\167\211\107\360\144\227\057\131\024\305\273\053\125"
	"\004\240\144\121\151\365\012\057\205\030\220\330\040\227\312\013"
	"\327\306\164\105\030\131\040\133\005\031\130\042\317\300\025\231"
	"\314\326\020\276\351\001\071\230\011\046\066\003\364\253\115\033"
	"\257\203\122\114\000\207\203\043\157\301\031\232\051\210\024\320"
	"\354\332\312\145\216\336\166\027\217\021\071\136\167\222\155\276"
	"\002\377\275\227\155\121\361\371\117\240\261\127\314\136\344\360"
	"\364\152\047\261\005\322\352\353\201\321\364\317\143\016\016\375"
	"\136\251\142\167\110\165\172\031\223\320\170\051\000\243\366\312"
	"\207\371\173\215\314\146\170\115\070\154\034\233\172\052\231\331"
	"\324\373\120\035\161\313\066\004\234\256\056\234\122\044\147\332"
	"\036"
#define      msg1_z	42
#define      msg1	((&data[1292]))
	"\110\337\067\200\134\171\224\371\314\247\364\214\141\141\076\241"
	"\242\113\144\263\031\163\300\205\252\231\376\162\133\050\033\204"
	"\332\230\355\376\301\164\107\306\065\351\354\034\126\043\114\123"
	"\034\307\176\265\241\122\261\361"
#define      date_z	1
#define      date	((&data[1344]))
	"\135"/* End of data[] */;
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
