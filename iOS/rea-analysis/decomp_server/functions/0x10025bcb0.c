// rea decompile_all
// name: FUN_10025bcb0
// address: 0x10025bcb0
// body: available
// range: 0x10025bcb0-0x10025bd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025bcb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    if (SCARRY8(*(long *)(param_3 + 0x48),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10025bd7c);
      (*pcVar3)();
    }
    *(long *)(param_3 + 0x48) = *(long *)(param_3 + 0x48) + 1;
  }
  if (DAT_100a7fea0 != -1) {
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar2 = *(long **)(DAT_100b36400 + 0x10);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  plVar1 = plVar2;
  _swift_retain(plVar2);
  (*pcVar3)();
  _swift_release(plVar2);
  FUN_10025bd7c(param_4,param_5,plVar1,param_1,param_2);
  return;
}

