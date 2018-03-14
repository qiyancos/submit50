#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./build 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\120"
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\341\261\100\116\214\112\156\006\235\342\203\106\205\146\037\016"
	"\164\172\213\161\062\032\347\323\170\250\267\106\024\267\036"
#define      chk1_z	22
#define      chk1	((&data[36]))
	"\146\025\277\261\160\104\316\370\005\123\127\114\116\270\147\324"
	"\331\241\140\362\062\123\354\035\046\066\226"
#define      msg2_z	19
#define      msg2	((&data[63]))
	"\165\156\114\070\332\162\347\260\226\220\015\167\315\037\043\340"
	"\017\064\316\303\114\177\317\070\300"
#define      chk2_z	19
#define      chk2	((&data[84]))
	"\147\152\103\007\033\331\102\100\003\151\257\327\277\064\044\260"
	"\253\042\306\270"
#define      pswd_z	256
#define      pswd	((&data[114]))
	"\076\166\042\204\213\332\242\002\232\365\167\353\303\235\313\253"
	"\324\224\156\067\106\236\305\221\106\357\242\007\325\117\241\267"
	"\273\177\047\311\325\236\022\376\223\212\352\126\050\266\002\374"
	"\112\161\064\221\017\372\042\126\351\304\135\277\023\377\166\317"
	"\176\236\231\124\074\253\123\320\066\075\046\136\363\051\133\076"
	"\232\217\317\251\212\361\377\164\266\135\064\311\135\252\231\333"
	"\110\062\060\205\336\203\125\025\300\174\163\263\245\316\361\077"
	"\136\301\350\351\262\350\135\150\106\221\062\243\074\314\177\205"
	"\376\260\012\335\063\137\362\364\333\146\247\201\065\231\300\224"
	"\132\251\175\015\222\332\166\331\153\251\174\250\165\374\055\164"
	"\254\067\122\340\227\105\324\163\253\174\364\340\026\264\164\161"
	"\136\362\177\360\314\365\311\070\237\106\340\025\103\015\211\360"
	"\105\334\320\334\041\244\120\314\041\104\255\067\371\042\250\130"
	"\024\047\110\340\035\022\031\275\131\372\322\234\010\134\214\115"
	"\070\134\052\132\001\172\047\042\277\324\132\271\367\003\021\013"
	"\052\132\354\110\155\005\005\306\000\330\142\010\064\356\125\155"
	"\113\200\307\115\373\356\157\272\303\311\151\260\265\033\106\074"
	"\032\327\262\210\043\353\301\344\336\307\054\227\304\124\001\002"
	"\313\044\207\126\377"
#define      date_z	8
#define      date	((time_t*)(&data[400]))
	"\037\303\112\017\234\366\141\065\241\172\226\325"
#define      tst2_z	19
#define      tst2	((&data[411]))
	"\370\150\254\355\241\254\003\071\324\200\064\143\373\045\352\300"
	"\246\333\032\261\030"
#define      opts_z	1
#define      opts	((&data[430]))
	"\041"
#define      rlax_z	1
#define      rlax	((&data[431]))
	"\123"
#define      text_z	695
#define      text	((&data[438]))
	"\044\316\361\046\321\275\340\237\146\023\021\224\033\162\116\367"
	"\071\103\147\327\247\053\150\222\327\321\056\155\315\315\372\174"
	"\257\153\263\356\113\046\162\072\062\237\223\263\116\334\070\052"
	"\277\065\120\344\205\071\010\300\166\024\276\024\013\212\016\227"
	"\210\302\366\004\251\132\023\166\222\042\142\011\361\264\102\313"
	"\236\244\372\056\026\022\207\320\350\263\260\036\061\107\243\315"
	"\170\174\011\235\234\241\352\101\265\251\277\301\332\206\270\222"
	"\357\313\316\167\372\250\034\243\044\101\162\036\044\127\021\135"
	"\326\227\001\340\356\204\335\373\030\156\031\137\142\212\220\142"
	"\014\111\370\207\065\027\077\347\225\104\036\221\272\020\150\252"
	"\240\103\340\300\272\056\213\110\326\105\276\213\104\050\073\266"
	"\052\073\071\044\215\145\066\031\055\323\050\211\073\104\025\004"
	"\154\050\162\336\102\176\270\344\333\331\177\313\325\170\274\366"
	"\247\051\325\241\344\116\344\076\047\145\371\073\174\035\144\162"
	"\257\376\051\042\344\042\352\276\370\170\026\317\364\143\163\113"
	"\055\224\353\274\076\336\110\150\153\005\106\157\065\223\047\000"
	"\366\301\334\112\120\010\161\326\110\041\145\135\124\021\253\343"
	"\227\177\067\374\353\037\141\264\355\045\216\125\256\351\345\215"
	"\164\316\106\356\243\250\142\260\074\244\344\303\253\044\360\345"
	"\003\017\221\144\253\113\071\100\357\321\207\304\352\165\374\122"
	"\024\112\251\005\000\306\243\127\045\370\331\111\366\332\024\217"
	"\231\230\251\021\031\266\074\111\271\115\036\316\077\233\256\322"
	"\144\021\136\362\376\077\355\351\356\211\075\343\146\007\204\141"
	"\364\145\106\157\213\122\040\035\101\174\272\154\203\163\250\045"
	"\152\315\132\372\312\003\025\041\335\033\004\013\204\256\377\111"
	"\143\002\225\062\071\215\172\014\243\217\213\134\035\302\345\004"
	"\330\253\203\102\222\120\032\171\114\272\101\262\325\261\003\060"
	"\114\032\371\000\252\237\155\274\004\132\124\214\146\376\244\166"
	"\274\210\060\120\230\322\165\154\165\362\335\275\267\142\164\164"
	"\035\212\203\164\372\160\007\276\155\023\174\125\327\300\224\142"
	"\204\231\362\317\222\047\005\320\345\146\375\173\042\177\274\054"
	"\150\157\277\144\013\110\170\157\170\133\362\117\145\221\242\201"
	"\110\327\054\304\243\276\250\242\125\344\375\232\257\172\212\317"
	"\372\053\254\053\321\227\240\334\247\210\176\101\232\074\067\032"
	"\377\301\104\060\302\063\073\050\231\116\345\104\337\230\364\042"
	"\055\122\060\356\264\225\374\256\030\303\130\263\006\267\115\373"
	"\376\266\242\354\252\342\170\126\300\177\375\322\133\211\050\164"
	"\200\056\037\027\071\320\070\106\242\364\207\354\213\277\065\363"
	"\120\060\051\135\361\170\256\345\262\227\101\143\213\344\204\306"
	"\202\107\320\057\100\033\076\137\367\114\336\226\132\235\320\006"
	"\061\025\340\214\350\067\316\246\126\262\320\225\113\105\160\361"
	"\267\151\014\204\010\375\211\073\367\121\115\360\160\166\312\035"
	"\011\250\231\222\021\175\143\242\002\160\012\036\033\316\263\335"
	"\023\234\170\216\137\055\166\076\225\336\321\345\032\113\130\024"
	"\112\202\156\344\242\061\056\167\017\276\210\010\046\115\211\263"
	"\374\314\044\211\326\301\256\245\263\325\166\160\040\317\204\152"
	"\121\362\116\363\043\174\152\063\073\363\073\142\100\305\025\074"
	"\221\071\306\150\373\165\015\256\112\204\037\152\123\243\325\245"
	"\226\044\230\271\240\003\355\334\366\050\077\067\355\124\164\177"
	"\216\072\350\212\260\366\070\372\172\127\144\316\373\072\163\221"
	"\136\014\113\377\017\070\333"
#define      msg1_z	42
#define      msg1	((&data[1243]))
	"\075\116\157\262\211\327\326\367\357\302\173\201\266\070\246\070"
	"\026\274\264\371\110\241\336\271\360\275\107\103\155\256\251\207"
	"\037\114\221\320\370\011\111\240\002\264\112\142\110\063\316"
#define      shll_z	10
#define      shll	((&data[1288]))
	"\210\235\237\307\250\203\166\057\313\371\136\026\254\301"
#define      inlo_z	3
#define      inlo	((&data[1300]))
	"\174\241\017"
#define      xecc_z	15
#define      xecc	((&data[1306]))
	"\066\150\245\011\212\173\277\212\167\206\001\213\270\175\001\357"
	"\052\256"/* End of data[] */;
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
