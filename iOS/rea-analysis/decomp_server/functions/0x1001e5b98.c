// rea decompile_all
// name: FUN_1001e5b98
// address: 0x1001e5b98
// body: available
// range: 0x1001e5b98-0x1001e5e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5b98(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *param_2;
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1001e5cac:
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  _swift_bridgeObjectRetain(lVar7);
  lVar3 = 0x5f6e6f6973736573;
  uVar5 = 0xea00000000006469;
  FUN_1001a2c70(0x5f6e6f6973736573);
  if ((uVar5 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar7);
    goto LAB_1001e5cac;
  }
  FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
  _swift_bridgeObjectRelease(lVar7);
  puVar1 = PTR___sypN_100995e88;
  puVar4 = &local_90;
  _swift_dynamicCast(puVar4,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss6UInt32VN_100995dc0,6);
  uVar2 = local_90;
  if (((ulong)puVar4 & 1) == 0) goto LAB_1001e5cac;
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1001e5ce4:
    local_98 = 0;
    uVar10 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = 0x656d616e;
    uVar5 = 0;
    FUN_1001a2c70(0x656d616e);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_1001e5ce4;
    }
    FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = &local_90;
    _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_1001e5ce4;
    local_98 = CONCAT44(uStack_8c,local_90);
    uVar10 = uStack_88;
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1001e5d5c:
    uVar11 = 0;
    uVar12 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = 0x6c6c656873;
    uVar5 = 0;
    FUN_1001a2c70(0x6c6c656873);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_1001e5d5c;
    }
    FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = &local_90;
    _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_1001e5d5c;
    uVar11 = CONCAT44(uStack_8c,local_90);
    uVar12 = uStack_88;
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1001e5dd4:
    uVar8 = 0xe700000000000000;
    uVar9 = 0x676e696e6e7572;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = 0x6574617473;
    uVar5 = 0;
    FUN_1001a2c70(0x6574617473);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_1001e5dd4;
    }
    FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = &local_90;
    _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_1001e5dd4;
    uVar9 = CONCAT44(uStack_8c,local_90);
    uVar8 = uStack_88;
  }
  uVar6 = 0;
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = 0x5f64657461657263;
    uVar5 = 0xed0000736d5f7461;
    FUN_1001a2c70(0x5f64657461657263);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
    }
    else {
      FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(lVar7);
      puVar4 = &local_90;
      _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___ss5Int64VN_100995cc0,6);
      if (((ulong)puVar4 & 1) != 0) {
        uVar6 = CONCAT44(uStack_8c,local_90);
        goto LAB_1001e5e6c;
      }
    }
    uVar6 = 0;
  }
LAB_1001e5e6c:
  *(undefined4 *)param_1 = uVar2;
  param_1[1] = local_98;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  param_1[4] = uVar12;
  param_1[5] = uVar9;
  param_1[6] = uVar8;
  param_1[7] = uVar6;
  return;
}

