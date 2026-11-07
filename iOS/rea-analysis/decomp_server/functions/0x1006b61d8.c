// rea decompile_all
// name: FUN_1006b61d8
// address: 0x1006b61d8
// body: available
// range: 0x1006b61d8-0x1006b631f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006b61d8(void *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (((0x478 < param_2) && (((ulong)param_1 & 7) == 0)) && (0x477 < (long)param_2)) {
    if (param_1 != (void *)0x0) {
      uVar2 = (long)param_1 + param_2;
      lVar1 = (long)param_1 + 0x478;
      _bzero(param_1,0x478);
      *(void **)((long)param_1 + 0x138) = param_1;
      *(ulong *)((long)param_1 + 0x140) = uVar2;
      *(long *)((long)param_1 + 0x148) = lVar1;
      *(long *)((long)param_1 + 0x150) = lVar1;
      *(long *)((long)param_1 + 0x158) = lVar1;
      *(ulong *)((long)param_1 + 0x160) = uVar2;
      *(undefined8 *)((long)param_1 + 0x168) = 0;
      *(undefined8 *)((long)param_1 + 0x170) = 0;
      *(ulong *)((long)param_1 + 0x208) = param_2;
      if (0x1de < param_2 - 0x478 >> 5) {
        lVar4 = (long)param_1 + 0x1668;
        *(long *)((long)param_1 + 0x148) = lVar4;
        *(long *)((long)param_1 + 0x150) = lVar4;
        *(long *)((long)param_1 + 0x158) = lVar4;
        *(long *)((long)param_1 + 0x2f0) = lVar1;
        if ((long)param_2 < 0x2858) {
          *(undefined4 *)((long)param_1 + 0x168) = 1;
          *(undefined8 *)((long)param_1 + 0x2f8) = 0;
          uVar3 = (long)param_1 + 0x2e68;
        }
        else {
          lVar1 = (long)param_1 + 0x2858;
          *(long *)((long)param_1 + 0x148) = lVar1;
          *(long *)((long)param_1 + 0x150) = lVar1;
          *(long *)((long)param_1 + 0x158) = lVar1;
          *(long *)((long)param_1 + 0x2f8) = lVar4;
          uVar3 = (long)param_1 + 0x4058;
          lVar4 = lVar1;
        }
        if (uVar2 < uVar3) {
          lVar4 = 0;
          *(undefined4 *)((long)param_1 + 0x168) = 1;
        }
        else {
          *(ulong *)((long)param_1 + 0x148) = uVar3;
          *(ulong *)((long)param_1 + 0x150) = uVar3;
          *(ulong *)((long)param_1 + 0x158) = uVar3;
        }
        *(long *)((long)param_1 + 0x3d8) = lVar4;
        *(undefined4 *)((long)param_1 + 8) = 0;
        return param_1;
      }
    }
    return (void *)0x0;
  }
  return (void *)0x0;
}

