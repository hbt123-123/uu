// rea decompile_all
// name: FUN_1000834cc
// address: 0x1000834cc
// body: available
// range: 0x1000834cc-0x100083603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000834cc(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(param_4 + 0x28));
  uVar2 = param_3 >> 6 & 3;
  if (uVar2 == 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  }
  else {
    if (uVar2 != 1) {
      if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x80)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
      __ss6HasherV8_combineyySuF();
      goto LAB_100083588;
    }
    __ss6HasherV8_combineyySuF(3);
    __sSJ4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  }
  uVar3 = (ulong)(param_3 & 1);
  __ss6HasherV8_combineyys5UInt8VF();
LAB_100083588:
  __ss6HasherV9_finalizeSiyF();
  lVar1 = param_4 + 0x38;
  uVar4 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar3,lVar1,~uVar4);
  uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = 1L << (uVar3 & 0x3f) | *(ulong *)(lVar1 + uVar4);
  plVar5 = (long *)(*(long *)(param_4 + 0x30) + uVar3 * 0x18);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(char *)(plVar5 + 2) = (char)param_3;
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
  return;
}

