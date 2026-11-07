// rea decompile_all
// name: FUN_1000f6f64
// address: 0x1000f6f64
// body: available
// range: 0x1000f6f64-0x1000f71eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6f64(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 local_a8 [8];
  undefined8 *puStack_a0;
  undefined *local_90;
  long *local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  FUN_1003dab3c();
  (**(code **)(*param_1 + 0x108))(local_88);
  _swift_release(param_1);
  puVar5 = &DAT_10099c928;
  puVar9 = (undefined8 *)0x18;
  _swift_allocObject(&DAT_10099c928,0x18,7);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc648();
  *(undefined **)(puVar5 + 0x10) = puVar6;
  if (local_88[0] != (long *)0x0) {
    pcVar10 = *(code **)(*local_88[0] + 0x98);
    plVar7 = local_88[0];
    _swift_retain();
    (*pcVar10)();
    puVar8 = puVar9;
    _swift_release(local_88[0]);
    if (puVar9 != (undefined8 *)0x0) {
      local_90 = PTR___sSSN_1009957f8;
      puVar8 = puVar9;
      puStack_a0 = puVar9;
      _swift_bridgeObjectRetain();
      FUN_1003a1820();
      uVar1 = *puVar8;
      uVar3 = puVar8[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1000f7804(local_88,local_a8,uVar1,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      FUN_1000c776c(local_88);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      FUN_1000b142c(DAT_100b360a8 + 200,local_88);
      lVar2 = lStack_68;
      uVar1 = local_70;
      FUN_10003f030(local_88,local_70);
      puVar8 = puVar9;
      (**(code **)(lVar2 + 0x40))(plVar7,puVar9,uVar1,lVar2);
      _swift_bridgeObjectRelease(puVar9);
      FUN_10003f094(local_88);
    }
    puVar6 = PTR___sSSN_1009957f8;
    pcVar10 = *(code **)(*local_88[0] + 0xb0);
    _swift_retain();
    (*pcVar10)();
    plVar7 = local_88[0];
    _swift_release();
    if (puVar8 != (undefined8 *)0x0) {
      local_90 = puVar6;
      puStack_a0 = puVar8;
      FUN_1003a17f0();
      lVar2 = *plVar7;
      lVar4 = plVar7[1];
      _swift_bridgeObjectRetain(lVar4);
      FUN_1000f7804(local_88,local_a8,lVar2,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      FUN_1000c776c(local_88);
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1000b142c(DAT_100b360a8 + 200,local_88);
  FUN_10003f030(local_88,local_70);
  pcVar10 = *(code **)(lStack_68 + 0x70);
  _swift_retain(puVar5);
  (*pcVar10)(FUN_1000f79f4,puVar5,local_70,lStack_68);
  _swift_release(puVar5);
  _swift_release(local_88[0]);
  FUN_10003f094(local_88);
  _swift_release(puVar5);
  return;
}

