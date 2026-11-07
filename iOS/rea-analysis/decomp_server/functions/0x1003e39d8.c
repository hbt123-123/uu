// rea decompile_all
// name: FUN_1003e39d8
// address: 0x1003e39d8
// body: available
// range: 0x1003e39d8-0x1003e3aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e39d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __sSqMa(0,param_5);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(puVar2,1,1,param_5);
  }
  else {
    _swift_beginAccess(param_2 + 0x10,auStack_90,0x20,0);
    __sSDyq_Sgxcig(puVar2,param_3,*(undefined8 *)(param_2 + 0x10),param_4,param_5,param_6);
    _swift_endAccess(auStack_90);
    _swift_release(param_2);
  }
  (**(code **)(lVar3 + 0x28))(param_1,puVar2,lVar1);
  return;
}

