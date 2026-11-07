// rea decompile_all
// name: FUN_100250f28
// address: 0x100250f28
// body: available
// range: 0x100250f28-0x10025101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100250f28(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  lVar2 = *(long *)(param_1 + 0x178);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x138) != 0)) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    if (param_3 == 2) {
      plVar3 = (long *)(param_1 + 0x100);
    }
    else {
      if (param_3 != 1) {
        return 0xffffff9a;
      }
      plVar3 = (long *)(lVar2 + 0xa0);
    }
    param_2 = *plVar3 + param_2;
  }
  uVar6 = *(ulong *)(param_1 + 0x100);
  if (uVar6 < param_2) {
    return 0xffffff9a;
  }
  uVar4 = *(ulong *)(lVar2 + 0x78);
  uVar1 = 0;
  if (0xffff < uVar4) {
    uVar1 = uVar4 - 0x10000;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(long *)(lVar2 + 0xb8) == 0) {
      if (((uVar6 >> 0x10 == 0) && (param_2 < uVar4)) && (uVar1 <= param_2)) goto LAB_100250fc4;
    }
    else if (param_2 < uVar4 && uVar1 <= param_2) {
LAB_100250fc4:
      lVar5 = *(long *)(lVar2 + 0xa0);
      *(ulong *)(lVar2 + 8) = *(long *)(lVar2 + 8) + (param_2 - lVar5);
      *(int *)(lVar2 + 0x10) = (int)uVar4 - (int)param_2;
      goto LAB_100251000;
    }
  }
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 8) = 0;
  *(ulong *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x88) + param_2;
  *(ulong *)(lVar2 + 0xb8) = uVar6 - param_2;
  lVar5 = *(long *)(lVar2 + 0xa0);
LAB_100251000:
  *(ulong *)(lVar2 + 0xc0) = (lVar5 - param_2) + *(long *)(lVar2 + 0xc0);
  *(ulong *)(lVar2 + 0x30) = param_2;
  *(ulong *)(lVar2 + 0xa0) = param_2;
  return 0;
}

