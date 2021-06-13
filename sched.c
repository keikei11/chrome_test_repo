#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <err.h>
//commit from ubuntu from surface

#define NLOOP_FOR_ESTIMATION 1000000000UL
#define NSECS_PER_MSEC 1000000UL
#define NSECS_PER_SEC 1000000000UL

    static inline long diff_nsec(struct timespec before, struct timespec after)
{
        return ((after.tv_sec * NSECS_PER_SEC + after.tv_nsec) - (before.tv_sec * NSECS_PER_SEC + before.tv_nsec));
}

static unsigned long loops_per_msec()
{
        struct timespec before, after;
        clock_gettime(CLOCK_MONOTONIC, &before);
        unsigned long i;
        for (i = 0; i < NLOOP_FOR_ESTIMATION; i++)
                ;
        clock_gettime(CLOCK_MONOTONIC, &after);
        int ret;
        return NLOOP_FOR_ESTIMATION * NSECS_PER_MSEC / diff_nsec(before, after);
}

static inline void load(unsigned long nloop)
{
        unsigned long i;
        for (i = 0; i < nloop; i++)
                ;
}

static void child_fn(int id, struct timespec *buf, int nrecord, unsigned long nlooｭ p_per_resol, struct timespec start)
{
        int i;
        for (i = 0; i < nrecord; i++)
        {
                struct timespec ts;
                load(nloop_per_resol);
                clock_gettime(CLOCK_MONOTONIC, &ts);
                buf[i] = ts;
        }
        for (i = 0; i < nrecord; i++)
        {
                printf("%d\t%ld\t%d\n", id, diff_nsec(start, buf[i]) / NSECS_PER_ｭ MSEC, (i + 1) * 100 / nrecord);
        }
        exit(EXIT_SUCCESS);
}
static void parent_fn(int nproc)
{
        int i;
        for (i = 0; i < nproc; i++)
                wait(NULL);
}
static pid_t *pids;
int main(int argc, char *argv[])
{
        int ret = EXIT_FAILURE;
        if (argc < 4)
        {
                fprintf(stderr, "usage: %s <nproc> <total[ms]> <resolution[ms]>\nｭ ", argv[0]);
                exit(EXIT_FAILURE);
        }
        int nproc = atoi(argv[1]);
        int total = atoi(argv[2]);
        int resol = atoi(argv[3]);
        if (nproc < 1)
        {
                fprintf(stderr, "<nproc>(%d) should be >= 1\n", nproc);
                exit(EXIT_FAILURE);
        }
        clock_gettime(CLOCK_MONOTONIC, &after);
        int ret;
        return NLOOP_FOR_ESTIMATION * NSECS_PER_MSEC / diff_nsec(before, after);
}
static inline void load(unsigned long nloop)
{
        unsigned long i;
        for (i = 0; i < nloop; i++)
                ;
}
static void child_fn(int id, struct timespec *buf, int nrecord, unsigned long nlooｭ p_per_resol, struct timespec start)
{
        int i;
        for (i = 0; i < nrecord; i++)
        {
                struct timespec ts;
                load(nloop_per_resol);
                clock_gettime(CLOCK_MONOTONIC, &ts);
                buf[i] = ts;
        }
        for (i = 0; i < nrecord; i++)
        {
                printf("%d\t%ld\t%d\n", id, diff_nsec(start, buf[i]) / NSECS_PER_ｭ MSEC, (i + 1) * 100 / nrecord);
        }
        exit(EXIT_SUCCESS);
}
static void parent_fn(int nproc)
{
        int i;
        for (i = 0; i < nproc; i++)
                wait(NULL);
}
static pid_t *pids;
int main(int argc, char *argv[])
{
        int ret = EXIT_FAILURE;
        if (argc < 4)
        {
                fprintf(stderr, "usage: %s <nproc> <total[ms]> <resolution[ms]>\nｭ ", argv[0]);
                exit(EXIT_FAILURE);
        }
        int nproc = atoi(argv[1]);
        int total = atoi(argv[2]);
        int resol = atoi(argv[3]);
        if (nproc < 1)
        {
                fprintf(stderr, "<nproc>(%d) should be >= 1\n", nproc);
                exit(EXIT_FAILURE);
        }
        clock_gettime(CLOCK_MONOTONIC, &after);
        int ret;
        return NLOOP_FOR_ESTIMATION * NSECS_PER_MSEC / diff_nsec(before, after);
}
static inline void load(unsigned long nloop)
{
        unsigned long i;
        for (i = 0; i < nloop; i++)
                ;
}
static void child_fn(int id, struct timespec *buf, int nrecord, unsigned long nlooｭ p_per_resol, struct timespec start)
{
        int i;
        for (i = 0; i < nrecord; i++)
        {
                struct timespec ts;
                load(nloop_per_resol);
                clock_gettime(CLOCK_MONOTONIC, &ts);
                buf[i] = ts;
        }
        for (i = 0; i < nrecord; i++)
        {
                printf("%d\t%ld\t%d\n", id, diff_nsec(start, buf[i]) / NSECS_PER_ｭ MSEC, (i + 1) * 100 / nrecord);
        }
        exit(EXIT_SUCCESS);
}
static void parent_fn(int nproc)
{
        int i;
        for (i = 0; i < nproc; i++)
                wait(NULL);
}
static pid_t *pids;
int main(int argc, char *argv[])
{
        int ret = EXIT_FAILURE;
        if (argc < 4)
        {
                fprintf(stderr, "usage: %s <nproc> <total[ms]> <resolution[ms]>\nｭ ", argv[0]);
                exit(EXIT_FAILURE);
        }
        int nproc = atoi(argv[1]);
        int total = atoi(argv[2]);
        int resol = atoi(argv[3]);
        if (nproc < 1)
        {
                fprintf(stderr, "<nproc>(%d) should be >= 1\n", nproc);
                exit(EXIT_FAILURE);
        }
