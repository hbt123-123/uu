// rea decompile_all
// name: FUN_1000a234c
// address: 0x1000a234c
// body: available
// range: 0x1000a234c-0x1000a25f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a234c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,code *param_8,
                  undefined4 param_9,undefined4 param_10,undefined *param_11,long param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  undefined *local_138;
  long lStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined *puStack_100;
  char local_f8;
  undefined *local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *local_b8;
  char local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_58;
  
  (*param_8)(&local_a0,param_11,param_12,param_13,param_1,param_2,param_3,param_4,param_5,param_6);
  if (unaff_x21 == 0) {
    uStack_88 = param_7[1];
    local_90 = *param_7;
    uStack_78 = param_7[3];
    uStack_80 = param_7[2];
    local_70 = param_7[4];
    FUN_1000997ac(&local_138,param_11,param_12,param_13);
    if (lStack_130 == 0) {
      puVar5 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      local_d8 = PTR___swiftEmptyArrayStorage_1000f0740;
      puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
      local_c0 = puVar5;
      FUN_100097700();
      local_f0 = param_11;
      lStack_e8 = param_12;
      local_e0 = param_13;
      local_b0 = '\x01';
      local_b8 = puVar2;
      _swift_bridgeObjectRetain(param_12);
      _swift_bridgeObjectRetain(param_13);
    }
    else {
      uStack_c8 = uStack_110;
      local_d0 = local_118;
      local_b8 = puStack_100;
      local_c0 = local_108;
      local_b0 = local_f8;
      lStack_e8 = lStack_130;
      local_f0 = local_138;
      local_d8 = puStack_120;
      local_e0 = local_128;
    }
    FUN_1000133cc(&local_d8,&local_138,&DAT_100104198,&DAT_1000d5180);
    if (puStack_120 == (undefined *)0x0) {
      FUN_10001fc18(&local_138,&DAT_100104198,&DAT_1000d5180);
      puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    else {
      puVar5 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      ppuVar3 = &local_58;
      _swift_dynamicCast(ppuVar3,&local_138,PTR___sypN_1000f0728 + 8,puVar5,6);
      puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
      if ((int)ppuVar3 != 0) {
        puVar5 = local_58;
      }
    }
    if (local_b0 == '\x01') {
      _swift_bridgeObjectRelease(puVar5);
      local_b0 = '\0';
      puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    _swift_bridgeObjectRetain(uStack_98);
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_10006e610(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_10006e610(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = local_a0;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = uStack_98;
    puVar2 = &DAT_100103ed8;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    local_138 = puVar5;
    puStack_120 = puVar2;
    FUN_10008f168(&local_138,&local_d8);
    _swift_bridgeObjectRetain(param_1);
    FUN_100080a28();
    FUN_100099afc(&local_f0);
    FUN_100065194(&local_f0);
    _swift_bridgeObjectRelease(uStack_98);
  }
  return;
}

