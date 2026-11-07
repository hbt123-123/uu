// rea decompile_all
// name: FUN_100509d40
// address: 0x100509d40
// body: available
// range: 0x100509d40-0x100509dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509d40(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 8;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 10;
  }
  lVar2 = 6;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 4;
  }
  lVar1 = 2;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    (**(code **)(param_4 + 0x48))(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100509dd8);
  (*pcVar3)();
}

