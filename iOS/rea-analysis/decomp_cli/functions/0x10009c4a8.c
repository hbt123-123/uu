// rea decompile_all
// name: FUN_10009c4a8
// address: 0x10009c4a8
// body: available
// range: 0x10009c4a8-0x10009c567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c4a8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = unaff_x20[1];
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if ((long)uVar6 < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10009c560);
    (*pcVar5)();
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10009c564);
    (*pcVar5)();
  }
  uVar10 = 0;
  uVar11 = 0;
  if (uVar3 != uVar6) {
    if (uVar6 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10009c568);
      (*pcVar5)();
    }
    lVar1 = *unaff_x20 + uVar3 * 0x40;
    uVar6 = *(ulong *)(lVar1 + 0x30);
    if ((uVar6 & 0x6000000000000000) == 0x2000000000000000) {
      uVar9 = (ulong)*(byte *)(lVar1 + 0x58);
      uVar11 = *(undefined8 *)(lVar1 + 0x50);
      uVar10 = *(undefined8 *)(lVar1 + 0x48);
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      unaff_x20[1] = uVar3 + 1;
      FUN_10009583c(uVar8,uVar7,uVar6,uVar2,uVar4);
      goto LAB_10009c53c;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
LAB_10009c53c:
  param_1[1] = uVar11;
  *param_1 = uVar10;
  param_1[2] = uVar9;
  param_1[3] = uVar8;
  param_1[4] = uVar7;
  return;
}

