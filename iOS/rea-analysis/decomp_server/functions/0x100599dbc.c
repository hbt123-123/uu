// rea decompile_all
// name: FUN_100599dbc
// address: 0x100599dbc
// body: available
// range: 0x100599dbc-0x100599ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100599dbc(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar4 = unaff_x20[2];
  if ((long)(char)lVar4 != 0xc) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)lVar4 * 8));
  }
  cVar1 = *(char *)((long)unaff_x20 + 0x11);
  if ((long)cVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)cVar1 * 8));
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[5];
  if ((long)(char)lVar4 != 0xc) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)lVar4 * 8));
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_100599e9c;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_100599e9c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

