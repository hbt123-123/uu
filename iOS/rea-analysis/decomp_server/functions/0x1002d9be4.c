// rea decompile_all
// name: FUN_1002d9be4
// address: 0x1002d9be4
// body: available
// range: 0x1002d9be4-0x1002d9d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d9d1c to 0x1007df4a8 _swift_storeEnumTagMultiPayload (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d9be4(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int unaff_w20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_4 + 0x18);
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = &stack0xffffffffffffffa0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getEnumCaseMultiPayload();
  if (unaff_w20 == 1) {
    (**(code **)(lVar4 + 0x20))(puVar3);
    (*param_2)(param_1,puVar3);
    (**(code **)(lVar4 + 8))(puVar3,lVar2);
    uVar1 = 0;
    __ss6ResultOMa(0,*(undefined8 *)(param_4 + 0x10),param_5,param_6);
    _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
    return;
  }
  lVar2 = *(long *)(param_4 + 0x10);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1);
  uVar1 = 0;
  __ss6ResultOMa(0,lVar2,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,0);
  return;
}

