// rea decompile_all
// name: FUN_100509adc
// address: 0x100509adc
// body: available
// range: 0x100509adc-0x100509b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509adc(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  FUN_100537888(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100509b88);
      (*pcVar3)();
    }
    lVar4 = param_3;
    FUN_100563164();
    if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100509b8c);
      (*pcVar3)();
    }
    lVar1 = lVar2 + lVar4 + param_3;
    if (SCARRY8(lVar2 + lVar4,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100509b90);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100509b94);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}

