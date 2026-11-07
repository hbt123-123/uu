// rea decompile_all
// name: FUN_100615900
// address: 0x100615900
// body: available
// range: 0x100615900-0x100615a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100615900(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  FUN_100616300(0,param_4);
  lVar7 = *(long *)(lVar1 + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100608530(0,lVar1);
  puVar6 = (undefined8 *)
           (puVar5 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar6,param_1,lVar2);
  puVar3 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar2);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar7 + 0x20))(puVar5,puVar6,lVar1);
    (*param_2)(puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
  }
  else {
    uVar4 = *puVar6;
    FUN_100607618(param_2,param_3);
    _swift_release(uVar4);
  }
  return;
}

