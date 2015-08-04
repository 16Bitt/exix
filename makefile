# Main exix build script
# ...something something recursive make something cat-v something

core:
	cd src && make

i386: core
	cd src && make i386-build

test: i386
	qemu-system-i386 -kernel src/i386/kernel.bin

clean:
	cd src && make clean
	cd src/i386 && make clean
