// rea decompile_all
// name: FUN_1006aaffc
// address: 0x1006aaffc
// body: available
// range: 0x1006aaffc-0x1006ab0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006aaffc(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  
  sVar3 = *(short *)(param_4 + 2);
  iVar6 = (int)sVar3;
  iVar2 = iVar6 + 0x7e;
  if (-0x40 < sVar3) {
    iVar2 = sVar3 + 0x3f;
  }
  uVar1 = iVar2 >> 6;
  if (0 < (iVar2 << 0x12) >> 0x18) {
    uVar7 = 0;
    uVar9 = (ulong)(uVar1 & 0x7f);
    plVar4 = (long *)(param_4 + 0x28);
    puVar10 = param_2;
    do {
      uVar11 = *param_1;
      uVar5 = uVar11 + uVar7 + *plVar4;
      if (uVar5 != uVar11) {
        uVar7 = (ulong)(uVar5 < uVar11);
      }
      *puVar10 = uVar5;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      plVar4 = plVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
    if (uVar7 != 0) {
      uVar7 = 1;
      goto LAB_1006ab088;
    }
  }
  if (iVar6 < (int)(uVar1 << 0x18) >> 0x12) {
    uVar7 = param_2[iVar6 >> 6] >> ((long)sVar3 & 0x3fU) & 1;
  }
  else {
    uVar7 = 0;
  }
LAB_1006ab088:
  if ('\0' < (char)uVar1) {
    uVar9 = 0;
    uVar5 = (ulong)(uVar1 & 0x7f);
    plVar4 = (long *)(param_4 + 0x28);
    do {
      uVar8 = *param_2;
      uVar11 = uVar8 + uVar9 + *plVar4;
      if (uVar11 != uVar8) {
        uVar9 = (ulong)(uVar11 < uVar8);
      }
      *param_3 = uVar11;
      uVar5 = uVar5 - 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar5 != 0);
  }
  return uVar7;
}

