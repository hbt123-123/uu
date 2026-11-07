// rea decompile_all
// name: FUN_1006acc3c
// address: 0x1006acc3c
// body: available
// range: 0x1006acc3c-0x1006acd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006acc3c(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  sVar5 = *(short *)(param_4 + 2);
  iVar12 = (int)sVar5;
  iVar2 = iVar12 + 0xe;
  if (-8 < sVar5) {
    iVar2 = sVar5 + 7;
  }
  iVar3 = iVar12 + 0x7e;
  if (-0x40 < iVar12) {
    iVar3 = iVar12 + 0x3f;
  }
  uVar1 = iVar3 >> 6;
  uVar4 = iVar2 >> 3;
  if (param_3 <= (uint)(iVar2 >> 3)) {
    uVar4 = param_3;
  }
  if (0 < (iVar3 << 0x12) >> 0x18) {
    _bzero(param_1,(ulong)((uVar1 & 0x7f) << 3));
  }
  FUN_1006aaf60(param_1,param_2,uVar4);
  uVar6 = uVar4 * 8 - (int)*(short *)(param_4 + 2);
  if ((uint)(int)*(short *)(param_4 + 2) <= uVar4 * 8 && uVar6 != 0) {
    if (0x7e < (int)sVar5 + 0x7eU) {
      uVar9 = 0;
      puVar8 = param_1 + uVar1;
      do {
        puVar8 = puVar8 + -1;
        uVar11 = *puVar8;
        *puVar8 = uVar11 >> ((ulong)uVar6 & 0x3f) | uVar9;
        uVar9 = uVar11 << ((ulong)(0x40 - uVar6) & 0x3f);
      } while (param_1 < puVar8);
    }
    uVar9 = (ulong)(uVar1 & 0xff);
    uVar11 = uVar9;
    do {
      uVar11 = uVar11 - 1;
      if (((uint)uVar11 >> 7 & 1) != 0) break;
      uVar10 = ((long *)(param_4 + 0x28))[uVar11 & 0x7f];
      if (param_1[uVar11 & 0x7f] < uVar10) {
        return;
      }
    } while (param_1[uVar11 & 0x7f] <= uVar10);
    if ('\0' < (char)uVar1) {
      uVar11 = 0;
      plVar7 = (long *)(param_4 + 0x28);
      do {
        uVar10 = *plVar7 + uVar11;
        if (uVar10 != 0) {
          uVar11 = (ulong)(*param_1 < uVar10);
        }
        *param_1 = *param_1 - uVar10;
        uVar9 = uVar9 - 1;
        plVar7 = plVar7 + 1;
        param_1 = param_1 + 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

