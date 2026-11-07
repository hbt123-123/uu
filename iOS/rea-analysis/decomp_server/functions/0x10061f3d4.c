// rea decompile_all
// name: FUN_10061f3d4
// address: 0x10061f3d4
// body: available
// range: 0x10061f3d4-0x10061f54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061f3d4(undefined8 param_1,ulong param_2,long param_3,ID param_4,long *param_5)

{
  long lVar1;
  ID IVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  char local_3f;
  
  if ((param_2 & 1) == 0) {
    plVar3 = *(long **)(param_3 + 0x10);
    (**(code **)(*plVar3 + 0x58))(&local_48);
    if (local_3f != '\x01') {
      FUN_1006073e8(local_48,local_40,0);
      IVar2 = _objc_msgSend(param_4,"completedUnitCount");
      if (SCARRY8(IVar2,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10061f548);
        (*pcVar4)();
      }
      _objc_msgSend(param_4,"setCompletedUnitCount:",IVar2 + 1);
      _swift_beginAccess(param_5,&local_48,1,0);
      lVar1 = *param_5 + -1;
      if (!SBORROW8(*param_5,1)) {
        *param_5 = lVar1;
        if (lVar1 != 0) {
          return;
        }
        local_58 = 0;
        local_50 = 0;
        (**(code **)(*plVar3 + 0x68))(&local_58);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061f54c);
      (*pcVar4)();
    }
  }
  else {
    plVar3 = *(long **)(param_3 + 0x10);
    (**(code **)(*plVar3 + 0x58))(&local_48);
    if (local_3f != '\x01') {
      FUN_1006073e8(local_48,local_40,0);
      IVar2 = _objc_msgSend(param_4,"totalUnitCount");
      _objc_msgSend(param_4,"setCompletedUnitCount:",IVar2);
      local_40 = 1;
      pcVar4 = *(code **)(*plVar3 + 0x68);
      local_48 = param_1;
      _swift_errorRetain(param_1);
      (*pcVar4)(&local_48);
      FUN_1001803c8(param_1,1);
      return;
    }
  }
  FUN_1006073e8(local_48,local_40,1);
  return;
}

