// rea decompile_all
// name: FUN_100193990
// address: 0x100193990
// body: available
// range: 0x100193990-0x100193a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100193990(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = (uint)(param_2 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      uVar6 = param_2 >> 0x30 & 0xff;
      if (uVar6 == 0) {
        return 1;
      }
      goto LAB_1001939c4;
    }
    iVar5 = (int)((ulong)param_1 >> 0x20);
    if (SBORROW4(iVar5,(int)param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100193a0c);
      (*pcVar3)();
    }
    uVar6 = (ulong)(iVar5 - (int)param_1);
  }
  else {
    if (uVar4 != 2) {
      return 1;
    }
    uVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100193a08);
      (*pcVar3)();
    }
  }
  if (uVar6 == 0) {
    return 1;
  }
LAB_1001939c4:
  if (SCARRY8(uVar6,0x20000)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100193a04);
    (*pcVar3)();
  }
  lVar1 = uVar6 + 0x3fffe;
  if (0 < (long)(uVar6 + 0x20000)) {
    lVar1 = uVar6 + 0x1ffff;
  }
  return lVar1 >> 0x11;
}

