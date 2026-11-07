// rea decompile_all
// name: FUN_100509cd0
// address: 0x100509cd0
// body: available
// range: 0x100509cd0-0x100509d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509cd0(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_2;
  FUN_100537888(param_4,param_5);
  if (unaff_x21 == 0) {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100509d38);
      (*pcVar2)();
    }
    lVar3 = param_4;
    FUN_100563164();
    lVar1 = lVar4 + lVar3;
    if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100509d3c);
      (*pcVar2)();
    }
    if (SCARRY8(lVar1,param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100509d40);
      (*pcVar2)();
    }
    *param_1 = lVar1 + param_4;
  }
  return;
}

