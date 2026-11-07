// rea decompile_all
// name: FUN_1003ac734
// address: 0x1003ac734
// body: available
// range: 0x1003ac734-0x1003acb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003ac734(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined *local_118;
  undefined *local_110 [3];
  undefined1 auStack_f8 [32];
  undefined *local_d8 [3];
  long local_c0;
  long lStack_b8;
  undefined *local_a8;
  
  puVar3 = &DAT_100a7b970;
  FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x74616c705f64726e;
  *(undefined **)(puVar3 + 0x48) = PTR___sSiN_100995968;
  *(undefined8 *)(puVar3 + 0x28) = 0xec0000006d726f66;
  *(undefined8 *)(puVar3 + 0x30) = 4;
  puVar4 = puVar3;
  FUN_1000cc648();
  _swift_setDeallocating(puVar3);
  pcVar8 = (code *)&DAT_100a775a0;
  FUN_100040bb4(puVar3 + 0x20,&DAT_100a775a0,&DAT_10080c1c0);
  if (DAT_100a892e0 != -1) {
    pcVar8 = FUN_1003db370;
    _swift_once(&DAT_100a892e0,FUN_1003db370);
  }
  plVar2 = DAT_100a8cce8;
  plVar5 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar2 + 0x128))(&local_c0);
  _swift_release(plVar2);
  FUN_100006cc8(plVar5,pcVar8);
  lVar7 = local_c0;
  puVar3 = PTR___sSSN_1009957f8;
  if (local_c0 != 0) {
    _swift_beginAccess(local_c0 + 0x10,auStack_130,0,0);
    uVar1 = *(undefined8 *)(local_c0 + 0x18);
    local_a8 = puVar3;
    local_c0 = *(long *)(local_c0 + 0x10);
    lStack_b8 = uVar1;
    FUN_10007f3d4(&local_c0,auStack_f8);
    _swift_bridgeObjectRetain(uVar1);
    puVar6 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_d8[0] = puVar4;
    FUN_100061e1c(auStack_f8,0x737265765f64726e,0xeb000000006e6f69,puVar6);
    puVar4 = local_d8[0];
    _swift_beginAccess(lVar7 + 0x40,auStack_148,0,0);
    local_c0 = *(long *)(lVar7 + 0x40);
    uVar1 = *(undefined8 *)(lVar7 + 0x48);
    local_a8 = puVar3;
    lStack_b8 = uVar1;
    FUN_10007f3d4(&local_c0,auStack_f8);
    _swift_bridgeObjectRetain(uVar1);
    puVar6 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_d8[0] = puVar4;
    FUN_100061e1c(auStack_f8,0x6e6168635f64726e,0xeb000000006c656e,puVar6);
    _swift_release(lVar7);
    puVar4 = local_d8[0];
  }
  _swift_beginAccess(param_1 + 0x10,local_d8,0,0);
  lVar7 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x48);
    lVar9 = *(long *)(lVar7 + 0x50);
    _swift_bridgeObjectRetain(lVar9);
    _swift_release(lVar7);
    if (lVar9 != 0) goto LAB_1003ac978;
  }
  lVar10 = 0;
  lVar9 = -0x2000000000000000;
LAB_1003ac978:
  local_a8 = puVar3;
  local_c0 = lVar10;
  lStack_b8 = lVar9;
  FUN_10007f3d4(&local_c0,auStack_f8);
  puVar6 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_110[0] = puVar4;
  FUN_100061e1c(auStack_f8,0x697665645f64726e,0xed000064695f6563,puVar6);
  puVar4 = local_110[0];
  _swift_beginAccess(param_1 + 0x10,local_110,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x40);
    _swift_bridgeObjectRetain(lVar10);
    _swift_release(param_1);
    if (lVar10 != 0) {
      local_a8 = puVar3;
      local_c0 = lVar7;
      lStack_b8 = lVar10;
      FUN_10007f3d4(&local_c0,auStack_f8);
      puVar6 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native(puVar4);
      local_118 = puVar4;
      FUN_100061e1c(auStack_f8,0x726573755f64726e,0xeb0000000064695f,puVar6);
      puVar4 = local_118;
    }
  }
  if (DAT_100a89250 != -1) {
    _swift_once(&DAT_100a89250,FUN_1003abaf0);
  }
  uVar1 = DAT_100a8b7f0;
  local_a8 = puVar3;
  local_c0 = DAT_100a8b7e8;
  lStack_b8 = DAT_100a8b7f0;
  FUN_10007f3d4(&local_c0,auStack_f8);
  _swift_bridgeObjectRetain(uVar1);
  puVar3 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_118 = puVar4;
  FUN_100061e1c(auStack_f8,0xd000000000000017,0x80000001008b0690,puVar3);
  return local_118;
}

