#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./install 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[1]))
	"\063\030\121\301\275\067\240\325\003\315\016\151\354\046\357\203"
	"\042\030\054\122"
#define      tst1_z	22
#define      tst1	((&data[21]))
	"\345\235\070\302\122\076\224\017\364\033\211\003\251\261\345\014"
	"\224\122\072\037\104\340\155\031\125"
#define      inlo_z	3
#define      inlo	((&data[45]))
	"\044\130\377"
#define      pswd_z	256
#define      pswd	((&data[55]))
	"\316\341\163\211\206\127\364\333\004\025\302\102\034\042\022\075"
	"\000\106\037\141\257\201\244\316\373\361\217\323\221\251\030\247"
	"\113\345\316\255\217\352\210\223\000\112\326\034\154\351\131\155"
	"\057\171\317\336\372\163\254\366\145\074\312\367\345\342\237\061"
	"\307\155\337\126\130\147\352\131\262\301\165\037\252\317\215\331"
	"\111\134\270\104\317\144\072\065\241\004\054\207\347\314\270\257"
	"\072\227\006\223\377\361\354\261\262\142\320\134\062\135\066\173"
	"\271\356\300\211\122\373\277\363\377\354\172\347\270\063\226\362"
	"\313\234\205\312\215\162\173\077\324\114\234\007\252\322\203\144"
	"\300\103\356\023\076\255\007\076\232\202\045\122\265\273\105\201"
	"\130\312\113\345\075\307\045\021\024\301\030\276\223\233\042\124"
	"\337\020\147\035\276\157\134\130\361\201\253\247\075\360\050\225"
	"\273\164\172\370\073\237\012\120\141\042\016\365\276\061\111\235"
	"\102\261\273\001\040\027\131\021\231\005\270\327\365\341\154\260"
	"\125\347\251\221\207\263\341\350\326\360\335\225\042\047\063\144"
	"\330\356\145\371\006\277\012\240\304\303\167\272\245\344\153\372"
	"\313\024\214\123\307\155\074\201\043\010\015\166\320\173\262\156"
	"\331\314\241\131\015\010\076\047\135\211\072\271\223\130\265\142"
	"\072\050\354\301\200\340\102\244\350\117\033\271\312\315\047\244"
	"\232\311\375\250\321\074\320\056\306\013\347\132\144\235\275\236"
	"\306\251\137\106\211\242\353"
#define      lsto_z	1
#define      lsto	((&data[375]))
	"\227"
#define      date_z	8
#define      date	((time_t*)(&data[384]))
	"\123\140\156\034\136\027\356\232\010\221\344\266\121\114\325\272"
	"\350\035"
#define      xecc_z	15
#define      xecc	((&data[397]))
	"\273\127\242\043\144\360\346\232\344\010\226\004\172\230\115\337"
	"\154\321"
#define      chk1_z	22
#define      chk1	((&data[417]))
	"\042\126\257\254\370\352\273\204\255\333\263\155\236\107\245\162"
	"\171\034\277\103\250\314\300\223\114\256\012\232\036"
#define      tst2_z	19
#define      tst2	((&data[444]))
	"\246\164\235\051\300\321\172\231\352\037\335\102\107\272\117\362"
	"\315\004\342\327\032\047\006"
#define      chk2_z	19
#define      chk2	((&data[467]))
	"\373\251\000\112\241\074\114\072\305\123\353\076\313\000\067\362"
	"\212\322\270\074\244\120\343"
#define      opts_z	1
#define      opts	((&data[487]))
	"\205"
#define      text_z	808
#define      text	((&data[511]))
	"\156\226\045\327\270\173\206\144\163\040\203\136\301\316\004\065"
	"\154\013\031\046\160\024\320\300\162\264\126\040\250\047\142\343"
	"\053\243\321\336\126\213\051\133\254\134\343\005\172\327\134\201"
	"\011\273\351\305\151\207\224\053\322\207\372\305\351\153\142\051"
	"\117\226\247\354\050\371\127\072\175\017\116\100\272\067\243\372"
	"\270\067\253\135\056\143\146\126\250\151\076\173\146\053\106\337"
	"\374\110\212\217\051\114\103\167\224\210\157\162\231\230\362\225"
	"\376\231\013\157\037\263\252\200\067\122\261\030\363\227\200\230"
	"\317\173\003\006\274\321\070\046\203\207\172\151\254\172\107\026"
	"\140\146\147\235\051\035\373\362\224\372\147\347\062\175\104\123"
	"\154\356\257\262\150\151\275\252\372\167\364\267\151\211\015\003"
	"\030\125\315\210\013\111\150\021\064\235\326\212\344\373\130\112"
	"\275\204\271\367\317\173\244\272\143\211\075\374\042\376\175\044"
	"\043\103\117\167\137\124\022\372\216\350\135\363\260\274\020\015"
	"\055\335\217\172\215\021\160\350\247\200\116\104\155\273\031\277"
	"\032\143\255\157\353\162\073\336\065\043\361\170\001\312\136\055"
	"\003\022\366\306\233\015\352\241\167\030\210\336\262\045\310\160"
	"\252\123\327\003\136\007\325\056\103\117\132\361\356\041\157\303"
	"\322\004\110\161\132\325\027\267\075\161\243\033\106\272\151\305"
	"\150\112\153\147\274\223\014\310\146\361\312\310\345\267\112\120"
	"\157\224\376\165\344\235\036\324\057\077\256\067\136\375\366\220"
	"\223\137\342\173\374\235\021\050\205\260\312\066\236\223\211\355"
	"\127\154\211\204\237\044\161\016\333\027\224\037\003\013\007\355"
	"\032\322\350\207\076\353\276\312\017\165\162\133\334\366\241\327"
	"\374\026\250\375\065\371\273\316\063\341\262\250\045\243\026\315"
	"\062\136\150\177\024\244\122\176\060\233\245\363\371\213\117\356"
	"\302\242\152\101\116\010\221\301\041\011\007\210\341\225\153\107"
	"\351\255\312\062\170\072\013\302\366\111\066\255\170\353\253\161"
	"\350\321\273\241\274\267\354\117\012\275\145\115\167\044\274\312"
	"\235\320\206\352\373\001\160\003\143\215\146\176\266\303\212\351"
	"\002\211\071\037\361\272\141\116\311\331\111\106\223\150\024\115"
	"\342\265\021\253\251\220\152\321\252\167\154\356\221\034\242\134"
	"\354\155\057\006\356\344\331\352\003\345\046\161\100\315\012\143"
	"\100\002\324\177\013\065\170\251\224\241\357\121\224\140\136\374"
	"\273\100\051\114\011\051\042\003\205\234\257\122\033\104\022\110"
	"\161\231\011\367\365\215\143\030\134\306\005\321\054\217\263\010"
	"\357\345\346\362\210\221\235\376\262\361\363\060\327\165\231\072"
	"\352\000\326\110\267\115\031\136\154\300\264\064\317\124\046\322"
	"\261\002\215\203\367\227\263\340\026\343\203\365\256\300\165\277"
	"\204\176\267\361\105\247\314\035\037\205\245\161\141\015\200\252"
	"\021\257\147\063\024\221\023\017\137\327\026\230\241\266\126\163"
	"\312\226\133\375\340\102\030\371\343\243\255\251\100\361\011\161"
	"\267\144\175\263\235\360\170\315\161\137\260\106\022\034\143\102"
	"\363\327\035\126\352\050\330\324\277\022\123\377\204\023\131\163"
	"\043\150\057\376\031\350\227\141\101\075\226\103\016\027\217\311"
	"\170\377\020\371\223\150\341\066\155\306\201\332\115\244\130\337"
	"\224\127\260\007\120\231\277\002\035\315\101\210\131\375\175\142"
	"\054\330\377\010\362\113\016\137\142\203\123\154\374\243\071\056"
	"\006\103\345\067\057\223\202\274\300\103\223\261\304\304\057\123"
	"\372\021\155\010\206\161\362\264\375\132\031\261\047\145\342\015"
	"\301\013\323\037\063\174\006\027\304\051\003\061\232\167\321\137"
	"\123\151\166\057\211\224\242\224\313\020\046\362\274\364\274\160"
	"\367\226\322\316\142\357\375\321\205\042\250\076\235\056\242\021"
	"\117\046\157\020\364\164\105\140\200\137\207\360\163\127\141\153"
	"\356\064\071"
#define      rlax_z	1
#define      rlax	((&data[1355]))
	"\061"
#define      shll_z	10
#define      shll	((&data[1357]))
	"\313\210\262\243\125\225\016\215\051\315\160\347"
#define      msg1_z	42
#define      msg1	((&data[1378]))
	"\007\111\260\167\131\245\353\237\006\154\357\067\057\351\340\060"
	"\300\134\110\215\040\316\275\232\202\211\306\334\171\200\263\036"
	"\324\201\201\142\164\166\305\125\166\076\225\153\125\127\157\377"
	"\333\031\213\001\376\215\135\162\345"/* End of data[] */;
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
