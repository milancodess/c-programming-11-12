{ pkgs }: {
	deps = [
   pkgs.nmh
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}