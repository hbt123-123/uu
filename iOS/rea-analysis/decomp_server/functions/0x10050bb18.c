// rea decompile_all
// name: FUN_10050bb18
// address: 0x10050bb18
// body: available
// range: 0x10050bb18-0x10050bb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050bb18(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      uVar5 = param_2 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar3,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bb7c);
        (*pcVar2)();
      }
      uVar5 = (ulong)(iVar3 - (int)param_1);
    }
  }
  else if (uVar4 == 2) {
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bb48);
      (*pcVar2)();
    }
  }
  else {
    uVar5 = 0;
  }
  if (!SCARRY8(*unaff_x20,uVar5)) {
    *unaff_x20 = *unaff_x20 + uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bb78);
  (*pcVar2)();
}

