// rea decompile_all
// name: FUN_10009c70c
// address: 0x10009c70c
// body: available
// range: 0x10009c70c-0x10009c7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c70c(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = unaff_x20[1];
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  if (lVar2 < lVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009c7dc);
    (*pcVar1)();
  }
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009c7e0);
    (*pcVar1)();
  }
  uVar8 = 0;
  uVar9 = 0;
  if (lVar4 != lVar2) {
    puVar3 = (ulong *)(*unaff_x20 + lVar4 * 0x40 + 0x30);
    do {
      if ((*puVar3 & 0x6000000000000000) == 0x2000000000000000) {
        uVar5 = puVar3[-2];
        uVar6 = puVar3[-1];
        uVar9 = puVar3[4];
        uVar8 = puVar3[3];
        uVar7 = (ulong)(byte)puVar3[5];
        FUN_10009583c(uVar5,uVar6,*puVar3,puVar3[1],puVar3[2]);
        FUN_10009e71c(lVar4);
        goto LAB_10009c7b4;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 8;
    } while (lVar2 != lVar4);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_10009c7b4:
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  return;
}

