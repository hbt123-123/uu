// rea decompile_all
// name: FUN_100546ea8
// address: 0x100546ea8
// body: available
// range: 0x100546ea8-0x100547067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100546ea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined8 local_60 [3];
  long local_48;
  undefined8 local_38;
  
  puVar3 = local_60;
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    uVar1 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_3);
    FUN_100548074();
    if (local_48 == 0) {
      FUN_100040bb4(local_60,&DAT_100aaa408,&DAT_1008360c8);
      local_38 = uVar1;
LAB_100546fa8:
      if (*(char *)(unaff_x20 + 0x38) == '\x01') {
        _swift_bridgeObjectRelease(*param_1);
        *param_1 = local_38;
        return;
      }
      uVar1 = 0;
      local_60[0] = local_38;
      __sSaMa(0,param_3);
      puVar2 = PTR___sSayxGSTsMc_100995898;
      _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar1);
      __sSa6append10contentsOfyqd__n_t7ElementQyd__RszSTRd__lF(local_60,uVar1,uVar1,puVar2);
      return;
    }
    _swift_bridgeObjectRelease(uVar1);
    FUN_100040bb4(local_60,&DAT_100aaa408,&DAT_1008360c8);
    FUN_100548074();
    if (local_48 == 0) {
      FUN_100040bb4(local_60,&DAT_100aaa408,&DAT_1008360c8);
    }
    else {
      uVar1 = 0;
      __sSaMa(0,param_3);
      puVar3 = &local_38;
      _swift_dynamicCast(puVar3,local_60,PTR___sypN_100995e88 + 8,uVar1,6);
      if ((int)puVar3 != 0) goto LAB_100546fa8;
    }
    FUN_1005480d0();
    _swift_allocError(&DAT_1009d10f0,puVar3,0,0);
    uVar4 = 0;
  }
  else {
    FUN_1005480d0();
    _swift_allocError(&DAT_1009d10f0,param_1,0,0);
    uVar4 = 1;
    puVar3 = param_1;
  }
  *(undefined1 *)puVar3 = uVar4;
  _swift_willThrow();
  return;
}

