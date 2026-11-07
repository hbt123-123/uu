// rea decompile_all
// name: FUN_10055d238
// address: 0x10055d238
// body: available
// range: 0x10055d238-0x10055d5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010055d574) */
/* WARNING: Removing unreachable block (ram,0x00010055d594) */

void FUN_10055d238(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a0 = param_5;
  lStack_98 = param_6;
  FUN_1000efc08(auStack_b8);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  FUN_100556150(param_2,param_3);
  FUN_1004f9e80(" {\n",3);
  if (DAT_100aa26b8 != -1) {
    _swift_once(&DAT_100aa26b8,FUN_100556110);
  }
  _swift_bridgeObjectRetain(DAT_100aabac0);
  FUN_1004fa13c();
  uVar15 = *(undefined8 *)(param_4 + 0x18);
  uVar14 = *(undefined8 *)(param_4 + 0x10);
  uVar17 = *(undefined8 *)(param_4 + 0x28);
  uVar16 = *(undefined8 *)(param_4 + 0x20);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  uVar3 = *(undefined8 *)(param_4 + 0x38);
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  uVar4 = *(undefined8 *)(param_4 + 0x48);
  puVar7 = auStack_b8;
  FUN_10003f030(puVar7,local_a0);
  _swift_getDynamicType();
  puVar8 = puVar7;
  _swift_conformsToProtocol();
  if ((puVar8 == (undefined1 *)0x0) || (puVar7 == (undefined1 *)0x0)) {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar2);
    local_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
  }
  else {
    pcVar13 = *(code **)(puVar8 + 8);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar13)(&local_90,puVar7,puVar8);
  }
  *(undefined8 *)(param_4 + 0x18) = uStack_88;
  *(undefined8 *)(param_4 + 0x10) = local_90;
  *(undefined8 *)(param_4 + 0x28) = uStack_78;
  *(undefined8 *)(param_4 + 0x20) = uStack_80;
  *(undefined8 *)(param_4 + 0x38) = uStack_68;
  *(undefined8 *)(param_4 + 0x30) = local_70;
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1005b9e0c();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined **)(param_4 + 0x40) = puVar9;
  FUN_1000b142c(auStack_b8,&local_108);
  puVar9 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar10 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar11 = &local_e0;
  _swift_dynamicCast(puVar11,&local_108,puVar9,puVar10,0xe);
  lVar5 = local_c0;
  uVar12 = local_c8;
  if ((int)puVar11 == 0) {
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    FUN_100040bb4(&local_e0,&DAT_100aab450,&DAT_1008388b0);
    _swift_bridgeObjectRelease(uVar4);
    uVar12 = 0;
  }
  else {
    FUN_10003f030(&local_e0,local_c8);
    (**(code **)(lVar5 + 0x10))(uVar12,lVar5);
    FUN_10003f094(&local_e0);
    _swift_bridgeObjectRelease(uVar4);
  }
  *(undefined8 *)(param_4 + 0x48) = uVar12;
  FUN_1000b142c(auStack_b8,&local_e0);
  puVar11 = &local_108;
  _swift_dynamicCast(puVar11,&local_e0,puVar9,&DAT_1009d2420,6);
  lVar6 = lStack_98;
  lVar5 = local_a0;
  if ((int)puVar11 == 0) {
    FUN_10003f030(auStack_b8,local_a0);
    (**(code **)(lVar6 + 0x48))(param_4,&DAT_1009d1ef8,&PTR_PTR_1009d1f20,lVar5,lVar6);
  }
  else {
    FUN_1004f79f4(param_4);
    FUN_1005735b0(param_4,local_108,uStack_100);
    FUN_100006cdc(local_108,uStack_100);
    _swift_release(local_f8);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x48));
  *(undefined8 *)(param_4 + 0x48) = uVar4;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x40));
  *(undefined8 *)(param_4 + 0x40) = uVar2;
  FUN_10052a5d0(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),
                *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
  *(undefined8 *)(param_4 + 0x18) = uVar15;
  *(undefined8 *)(param_4 + 0x10) = uVar14;
  *(undefined8 *)(param_4 + 0x28) = uVar17;
  *(undefined8 *)(param_4 + 0x20) = uVar16;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  *(undefined8 *)(param_4 + 0x38) = uVar3;
  FUN_1005564b4();
  FUN_10003f094(auStack_b8);
  return;
}

