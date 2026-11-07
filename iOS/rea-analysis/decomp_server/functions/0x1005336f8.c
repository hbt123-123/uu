// rea decompile_all
// name: FUN_1005336f8
// address: 0x1005336f8
// body: available
// range: 0x1005336f8-0x1005337cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005336f8(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong local_18;
  
  FUN_100535660();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_100533764;
  }
  else if (lVar3 != unaff_x20[1] - lVar4) {
LAB_100533764:
    bVar2 = *(byte *)(lVar4 + lVar3);
    uVar1 = ((uint)(bVar2 >> 6) | (bVar2 & 0x3f) << 8) + 0x81c1;
    if (((int)(char)bVar2 & 0x80000000U) == 0) {
      uVar1 = bVar2 + 1;
    }
    local_18 = (ulong)uVar1 + 0xfefefefefefeff &
               (-1L << ((4 - ((ulong)LZCOUNT(uVar1) >> 3)) * 8 & 0x3f) ^ 0xffffffffffffffffU);
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(&local_18);
    return;
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}

