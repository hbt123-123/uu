// rea decompile_all
// name: FUN_10050845c
// address: 0x10050845c
// body: available
// range: 0x10050845c-0x10050852b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050845c(ulong param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  if (param_3 << 3 < 0x80) {
    lVar4 = 1;
  }
  else if (param_3 << 3 < 0x4000) {
    lVar4 = 2;
  }
  else if ((param_3 & 0x1fffffff) >> 0x12 == 0) {
    lVar4 = 3;
  }
  else if ((param_3 & 0x1fffffff) >> 0x19 == 0) {
    lVar4 = 4;
  }
  else {
    lVar4 = 5;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      param_1 = param_1 & 0xffffffffffff;
    }
    else {
      param_1 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    __sSS8UTF8ViewV13_foreignCountSiyF();
  }
  uVar3 = param_1;
  FUN_1005630a4();
  if (SCARRY8(lVar4,uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508524);
    (*pcVar2)();
  }
  lVar1 = lVar4 + uVar3 + param_1;
  if (SCARRY8(lVar4 + uVar3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508528);
    (*pcVar2)();
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10050852c);
  (*pcVar2)();
}

