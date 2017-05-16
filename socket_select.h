#ifndef poll_socket_select_h
#define poll_socket_select_h
#include <winsock2.h>

static bool
sp_invalid(int sfd) {
	return sfd == -1;
}

static int
sp_create() {
	return 0;
}

static void
sp_release(int sfd) {
	// close(sfd);
}

static void
sp_del(int sfd, int sock) {
	
}

static int
sp_add(int sfd, int sock, void *ud) {
	
	return 0;
}

static void
sp_write(int sfd, int sock, void *ud, bool enable) {
	
}

static int
sp_wait(int sfd, struct event *e, int max) {
	

	return 0;
}

static void
sp_nonblocking(int fd) {
#if defined(_WIN32) || defined(_WIN64)
	unsigned long nonblocking = 1;
	ioctlsocket(fd, FIONBIO, (unsigned long*)&nonblocking);
#else
	int flag = fcntl(fd, F_GETFL, 0);
	if (-1 == flag) {
		return;
	}

	fcntl(fd, F_SETFL, flag | O_NONBLOCK);
#endif
}
#endif
