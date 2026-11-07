// rea decompile_all
// name: FUN_10050bb7c
// address: 0x10050bb7c
// body: available
// range: 0x10050bb7c-0x10050bc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050bb7c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc30);
    (*pcVar2)();
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc34);
    (*pcVar2)();
  }
  FUN_100563120();
  if (SCARRY8(param_2,4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc38);
    (*pcVar2)();
  }
  FUN_100537888(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc3c);
      (*pcVar2)();
    }
    lVar3 = param_3;
    FUN_100563164();
    if (SCARRY8(lVar3,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc40);
      (*pcVar2)();
    }
    lVar1 = param_2 + 4 + lVar3 + param_3;
    if (SCARRY8(param_2 + 4,lVar3 + param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc44);
      (*pcVar2)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050bc48);
      (*pcVar2)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}

