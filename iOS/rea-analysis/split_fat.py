#!/usr/bin/env python3
import struct, sys, os

def split(path, outdir):
    with open(path,'rb') as f:
        data=f.read()
    magic=struct.unpack('>I', data[:4])[0]
    if magic not in (0xcafebabe,0xcafebabf):
        print(f"not fat: {path}"); return
    n=struct.unpack('>I', data[4:8])[0]
    is64 = magic==0xcafebabf
    off=8
    archs=[]
    for i in range(n):
        if is64:
            cputype,cpusubtype,offset,size,align,res=struct.unpack('>iiQQII', data[off:off+32]); off+=32
        else:
            cputype,cpusubtype,offset,size,align=struct.unpack('>iiIII', data[off:off+20]); off+=20
        name={0x01000007:'x86_64',0x0100000c:'arm64',7:'i386',12:'arm'}.get(cputype,hex(cputype))
        archs.append((name,offset,size))
    base=os.path.basename(path)
    for name,o,s in archs:
        out=os.path.join(outdir, f"{base}.{name}")
        with open(out,'wb') as g:
            g.write(data[o:o+s])
        print(f"{out}\t{s}")

if __name__=='__main__':
    os.makedirs(sys.argv[2],exist_ok=True)
    split(sys.argv[1], sys.argv[2])
