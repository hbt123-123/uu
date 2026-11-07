// rea decompile_all
// name: FUN_1000af2dc
// address: 0x1000af2dc
// body: available
// range: 0x1000af2dc-0x1000afae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000af384) */
/* WARNING: Removing unreachable block (ram,0x0001000af5c8) */

uint FUN_1000af2dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_220 [8];
  undefined1 auStack_1f8 [112];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  char local_ff;
  undefined1 local_f8;
  undefined7 uStack_f7;
  byte bStack_f0;
  undefined7 uStack_ef;
  byte local_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 local_d8;
  undefined8 local_c0 [4];
  undefined1 local_a0;
  char local_8f;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  FUN_100008184(param_1,param_2);
  FUN_10067eda8(auStack_168,param_1,param_2,0);
  puVar3 = &DAT_100a76d38;
  FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_1009e61c8;
  *(undefined8 *)(puVar3 + 0x20) = 0x6e6f69746361;
  *(undefined8 *)(puVar3 + 0x28) = 0xe600000000000000;
  thunk_FUN_10068573c(auStack_130);
  _swift_setDeallocating(puVar3);
  uVar9 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(puVar3 + 0x20,uVar9,puVar4);
  _swift_deallocClassInstance(puVar3,0x20,7);
  if (local_ff != '\x01') {
    FUN_1000abcec(auStack_130);
    FUN_1000abcec(auStack_168);
    FUN_100008184(param_1,param_2);
    FUN_10067eda8(&local_f8,param_1,param_2,0);
    puVar3 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    uVar11 = 1;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined **)(puVar3 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_1009e61c8;
    *(undefined8 *)(puVar3 + 0x20) = 0x6165627472616568;
    *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000074;
    thunk_FUN_10068573c(local_c0);
    FUN_1000abcec(&local_f8);
    _swift_setDeallocating(puVar3);
    uVar9 = *(undefined8 *)(puVar3 + 0x10);
    puVar4 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(puVar3 + 0x20,uVar9,puVar4);
    FUN_1000abcec(local_c0);
    if (local_8f == '\x01') {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      puVar6 = (undefined8 *)(lVar10 + _TtC14UURemoteServer12InputHandler::lastHeartTime);
      cVar1 = *(char *)(puVar6 + 1);
      _swift_unknownObjectRetain(lVar10);
      if (cVar1 == '\x01') {
        FUN_1001c1058();
      }
      __s10Foundation4DateVACycfC(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar7 + 8))(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      *puVar6 = uVar11;
      *(undefined1 *)(puVar6 + 1) = 0;
      _swift_unknownObjectRelease(lVar10);
    }
LAB_1000af75c:
    uVar8 = 0;
    goto LAB_1000af760;
  }
  _swift_bridgeObjectRetain(uStack_118);
  FUN_1000abcec(auStack_130);
  FUN_1000b0438(local_120,uStack_118);
  uVar8 = 2;
  if (((uint)local_120 & 0xff) != 0xd) {
    uVar8 = (uint)local_120;
  }
  FUN_1000aea84(local_c0,auStack_168,uVar8);
  FUN_1000abcec(auStack_168);
  FUN_10007f3d4(local_c0,auStack_188);
  FUN_10003e8bc(auStack_188,local_c0);
  puVar3 = PTR___sypN_100995e88;
  puVar5 = &local_f8;
  _swift_dynamicCast(puVar5,local_c0,PTR___sypN_100995e88 + 8,&DAT_10099ae08,6);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10003e8bc(auStack_188,local_c0);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099ad88,6);
    if ((int)puVar5 != 0) {
      uVar9 = CONCAT71(uStack_f7,local_f8);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      FUN_1001becf8(uVar9);
      uVar8 = (uint)uVar9;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,local_c0);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099ad60,6);
    if ((int)puVar5 != 0) {
      uVar9 = CONCAT71(uStack_f7,local_f8);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      local_c0[0] = CONCAT71(local_c0[0]._1_7_,bStack_f0);
      local_f8 = uStack_e0;
      FUN_1001bf024(uVar9,bStack_f0,CONCAT71(uStack_e7,local_e8),uStack_e0);
      uVar8 = (uint)uVar9;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,auStack_1f8);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,auStack_1f8,puVar3 + 8,&DAT_10099acd8,6);
    if ((int)puVar5 != 0) {
      local_c0[0] = CONCAT71(uStack_f7,local_f8);
      local_a0 = local_d8;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      puVar6 = local_c0;
      FUN_1001bf250(puVar6);
      uVar8 = (uint)puVar6;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,auStack_1f8);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,auStack_1f8,puVar3 + 8,&DAT_10099ac50,6);
    if ((int)puVar5 != 0) {
      local_c0[0] = CONCAT71(uStack_f7,local_f8);
      local_a0 = local_d8;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      puVar6 = local_c0;
      FUN_1001bf7ec(puVar6);
      uVar8 = (uint)puVar6;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,auStack_1f8);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,auStack_1f8,puVar3 + 8,&DAT_10099abc8,6);
    if ((int)puVar5 != 0) {
      local_c0[0] = CONCAT71(uStack_f7,local_f8);
      local_a0 = local_d8;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      puVar6 = local_c0;
      FUN_1001bfe04(puVar6);
      uVar8 = (uint)puVar6;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,local_c0);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099ab48,6);
    if ((int)puVar5 != 0) {
      uVar9 = CONCAT71(uStack_f7,local_f8);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      FUN_1001c0234(uVar9,bStack_f0);
      uVar8 = (uint)uVar9;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,local_c0);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099aac8,6);
    if ((int)puVar5 != 0) {
      uVar9 = CONCAT71(uStack_f7,local_f8);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar11);
      FUN_1001c0378(uVar9);
      uVar8 = (uint)uVar9;
      goto LAB_1000af7dc;
    }
    FUN_10003e8bc(auStack_188,local_c0);
    puVar5 = &local_f8;
    _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099aaa0,6);
    if ((int)puVar5 == 0) {
      FUN_10003e8bc(auStack_188,local_c0);
      puVar5 = &local_f8;
      _swift_dynamicCast(puVar5,local_c0,puVar3 + 8,&DAT_10099aa18,6);
      if ((int)puVar5 == 0) {
        FUN_10003f094(auStack_188);
        goto LAB_1000af75c;
      }
      uVar11 = CONCAT71(uStack_ef,bStack_f0);
      uVar8 = (uint)local_e8;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar9);
      FUN_1001c16b8(local_e8,CONCAT71(uStack_df,uStack_e0));
      _swift_unknownObjectRelease(uVar9);
      _swift_bridgeObjectRelease(CONCAT71(uStack_df,uStack_e0));
    }
    else {
      uVar9 = CONCAT71(uStack_f7,local_f8);
      uVar11 = CONCAT71(uStack_ef,bStack_f0);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
      _swift_unknownObjectRetain(uVar12);
      FUN_1001c1590(uVar9,uVar11);
      uVar8 = (uint)uVar9;
      _swift_unknownObjectRelease(uVar12);
    }
    _swift_bridgeObjectRelease(uVar11);
  }
  else {
    uVar9 = CONCAT71(uStack_f7,local_f8);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_unknownObjectRetain(uVar11);
    FUN_1001bea44(uVar9,bStack_f0,bStack_f0 ^ 1);
    uVar8 = (uint)uVar9;
LAB_1000af7dc:
    _swift_unknownObjectRelease(uVar11);
  }
  FUN_10003f094(auStack_188);
LAB_1000af760:
  return uVar8 & 1;
}

