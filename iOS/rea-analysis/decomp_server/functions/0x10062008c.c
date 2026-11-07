// rea decompile_all
// name: FUN_10062008c
// address: 0x10062008c
// body: available
// range: 0x10062008c-0x100620153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062008c(long param_1,ID param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  long *plVar4;
  undefined8 local_48;
  char local_40;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x58))(&local_48);
  if (local_40 != '\x01') {
    FUN_100614cd0(local_48,0);
    IVar3 = _objc_msgSend(param_2,"completedUnitCount");
    if (SCARRY8(IVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100620150);
      (*pcVar2)();
    }
    _objc_msgSend(param_2,"setCompletedUnitCount:",IVar3 + 1);
    _swift_beginAccess(param_3,&local_48,1,0);
    lVar1 = *param_3 + -1;
    if (SBORROW8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100620154);
      (*pcVar2)();
    }
    *param_3 = lVar1;
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x68))();
    }
  }
  return;
}

