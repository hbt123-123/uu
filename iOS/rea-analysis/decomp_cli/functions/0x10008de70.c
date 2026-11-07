// rea decompile_all
// name: FUN_10008de70
// address: 0x10008de70
// body: available
// range: 0x10008de70-0x10008dfb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10008de70(long param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_4 + 0x10) == 0) {
    return 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(param_4 + 0x28));
  if ((param_3 >> 8 & 1) == 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_1);
    if ((param_3 & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      uVar2 = param_2;
      goto LAB_10008deec;
    }
  }
  uVar2 = 0;
LAB_10008deec:
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar3 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_4 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      plVar4 = (long *)(*(long *)(param_4 + 0x30) + uVar2 * 0x18);
      if ((*(byte *)((long)plVar4 + 0x11) & 1) == 0) {
        if (((param_3 >> 8 & 1) == 0) && (*plVar4 == param_1)) {
          uVar1 = param_3;
          if ((*(byte *)(plVar4 + 2) & 1) != 0) goto joined_r0x00010008df34;
          if (((param_3 & 1) == 0) && (plVar4[1] == param_2)) {
            return 1;
          }
        }
      }
      else {
        uVar1 = param_3 >> 8;
joined_r0x00010008df34:
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(param_4 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1)
             != 0);
  }
  return 0;
}

