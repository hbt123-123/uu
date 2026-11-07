// rea decompile_all
// name: FUN_100634178
// address: 0x100634178
// body: available
// range: 0x100634178-0x10063427b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100634178(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634268);
    (*pcVar3)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063426c);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634270);
    (*pcVar3)();
  }
  lVar1 = (param_6 >> 1) - param_5;
  if (!SBORROW8(param_6 >> 1,param_5)) {
    lVar2 = lVar1 - (param_2 - param_1);
    if (SBORROW8(lVar1,param_2 - param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100634278);
      (*pcVar3)();
    }
    if (!SCARRY8(lVar6,lVar2)) {
      lVar4 = lVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar5;
      if (((int)lVar4 == 0) || ((long)(*(ulong *)(lVar5 + 0x18) >> 1) < lVar6 + lVar2)) {
        FUN_1006295a0();
        *unaff_x20 = lVar4;
        lVar5 = lVar4;
      }
      FUN_1006504e8(param_1,param_2,lVar1,param_3,param_4,param_5,param_6);
      *unaff_x20 = lVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063427c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100634274);
  (*pcVar3)();
}

