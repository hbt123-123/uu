// rea decompile_all
// name: FUN_100618028
// address: 0x100618028
// body: available
// range: 0x100618028-0x1006181ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10061819c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006180ac) */

void FUN_100618028(code *param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_70 [2];
  
  lVar2 = 0;
  local_70[0] = param_8;
  FUN_100616300(0,*(undefined8 *)(*param_4 + 0x50));
  lVar7 = *(long *)(lVar2 + -8);
  puVar6 = (undefined8 *)((long)local_70 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (*param_1)();
  lVar1 = local_70[0];
  if (param_3 == param_4) {
    plVar4 = param_3;
    FUN_10060d02c();
    puVar3 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,plVar4,0,0);
    *plVar4 = 1;
    plVar4[2] = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[3] = 0;
    *(undefined1 *)(plVar4 + 5) = 2;
    _swift_willThrow();
    _swift_unknownObjectRelease(param_3);
    plVar4 = (long *)param_4[2];
    *puVar6 = puVar3;
    _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
    pcVar5 = *(code **)(*plVar4 + 0x68);
    _swift_errorRetain(puVar3);
    (*pcVar5)(puVar6);
    _swift_errorRelease(puVar3);
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
    return;
  }
  lVar2 = param_4[2];
  puVar3 = &DAT_1009e0368;
  _swift_allocObject(&DAT_1009e0368,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(long *)(puVar3 + 0x28) = lVar1;
  *(long *)(puVar3 + 0x30) = lVar2;
  pcVar5 = *(code **)(lVar1 + 0x10);
  _swift_retain(lVar2);
  (*pcVar5)(FUN_10060d090,puVar3,param_6,lVar1);
  _swift_unknownObjectRelease(param_3);
  _swift_release(puVar3);
  return;
}

