// rea decompile_all
// name: FUN_10050852c
// address: 0x10050852c
// body: available
// range: 0x10050852c-0x10050860f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050852c(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long *unaff_x20;
  ulong uVar8;
  
  lVar1 = 4;
  if ((param_3 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_3 << 3) {
    lVar2 = lVar1;
  }
  if ((param_3 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_3 << 3) {
    lVar1 = lVar2;
  }
  uVar3 = (uint)(param_2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar8 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100508610);
        (*pcVar4)();
      }
      uVar8 = (ulong)(iVar7 - (int)param_1);
    }
  }
  else if (uVar6 == 2) {
    uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005085ac);
      (*pcVar4)();
    }
  }
  else {
    uVar8 = 0;
  }
  uVar5 = uVar8;
  FUN_1005630a4();
  if (SCARRY8(lVar1,uVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100508604);
    (*pcVar4)();
  }
  lVar2 = lVar1 + uVar5 + uVar8;
  if (SCARRY8(lVar1 + uVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100508608);
    (*pcVar4)();
  }
  if (!SCARRY8(*unaff_x20,lVar2)) {
    *unaff_x20 = *unaff_x20 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10050860c);
  (*pcVar4)();
}

