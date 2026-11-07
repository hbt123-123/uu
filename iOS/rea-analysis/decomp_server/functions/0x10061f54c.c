// rea decompile_all
// name: FUN_10061f54c
// address: 0x10061f54c
// body: available
// range: 0x10061f54c-0x10061f76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10061f54c(undefined8 param_1,long param_2,ID param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ID IVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 auStack_80 [2];
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  char local_5f;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  FUN_100616300(0,uVar2);
  lVar9 = *(long *)(lVar3 + -8);
  puVar8 = (undefined8 *)((long)auStack_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar9 + 0x10))(puVar8,param_1,lVar3);
  puVar4 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar3);
  if ((int)puVar4 == 1) {
    uVar2 = *puVar8;
    plVar6 = *(long **)(param_2 + 0x10);
    (**(code **)(*plVar6 + 0x58))(&local_68);
    if (local_5f == '\x01') {
      FUN_1006073e8(local_68,local_60,1);
    }
    else {
      FUN_1006073e8(local_68,local_60,0);
      IVar5 = _objc_msgSend(param_3,"totalUnitCount");
      _objc_msgSend(param_3,"setCompletedUnitCount:",IVar5);
      local_60 = 1;
      pcVar7 = *(code **)(*plVar6 + 0x68);
      local_68 = uVar2;
      _swift_errorRetain(uVar2);
      (*pcVar7)(&local_68);
      _swift_errorRelease(uVar2);
    }
    _swift_errorRelease(uVar2);
  }
  else {
    plVar6 = *(long **)(param_2 + 0x10);
    (**(code **)(*plVar6 + 0x58))(&local_68);
    if (local_5f == '\x01') {
      FUN_1006073e8(local_68,local_60,1);
    }
    else {
      FUN_1006073e8(local_68,local_60,0);
      IVar5 = _objc_msgSend(param_3,"completedUnitCount");
      if (SCARRY8(IVar5,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10061f768);
        (*pcVar7)();
      }
      _objc_msgSend(param_3,"setCompletedUnitCount:",IVar5 + 1);
      _swift_beginAccess(param_4,&local_68,1,0);
      lVar1 = *param_4 + -1;
      if (SBORROW8(*param_4,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10061f76c);
        (*pcVar7)();
      }
      *param_4 = lVar1;
      if (lVar1 == 0) {
        auStack_80[1] = 0;
        local_70 = 0;
        (**(code **)(*plVar6 + 0x68))(auStack_80 + 1);
      }
    }
    (**(code **)(lVar9 + 8))(puVar8,lVar3);
  }
  return;
}

