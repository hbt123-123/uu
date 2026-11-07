// rea decompile_all
// name: FUN_1005a0220
// address: 0x1005a0220
// body: available
// range: 0x1005a0220-0x1005a031f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a0220(undefined8 param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_1005bdd74(param_2,1), unaff_x21 != 0)) {
    return;
  }
  if ((param_5 & 0xff) != 0xc) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)param_5 * 8));
  }
  if ((param_5 >> 8 & 0xff) != 0xc) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)(param_5 >> 8) * 8));
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005a02f4;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_1005a02f4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}

