// rea decompile_all
// name: FUN_1002be6ac
// address: 0x1002be6ac
// body: available
// range: 0x1002be6ac-0x1002bed3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002be6ac(void)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined8 *puVar6;
  ID IVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [16];
  undefined8 *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar14 = 0x6e776f6e6b6e55;
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar4 = NSBundle::infoDictionary(IVar4,"infoDictionary");
  puVar3 = PTR___sypN_100995e88;
  uVar13 = uVar14;
  if ((IVar4 == 0) ||
     (__sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar4,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808),
     IVar4 == 0)) {
    IVar4 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    bVar2 = true;
LAB_1002be814:
    FUN_100040bb4(&local_80,&DAT_100a82480,&DAT_1008182d0);
LAB_1002be82c:
    IVar7 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    IVar7 = NSProcessInfo::arguments(IVar7,"arguments");
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (IVar7,PTR___sSSN_1009957f8);
    if (*(long *)(IVar7 + 0x10) == 0) {
LAB_1002be98c:
      _swift_bridgeObjectRelease();
      local_a8 = 0x6e776f6e6b6e55;
      uStack_a0 = 0xe700000000000000;
    }
    else {
      uVar11 = *(undefined8 *)(IVar7 + 0x20);
      uVar12 = *(undefined8 *)(IVar7 + 0x28);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRelease(IVar7);
      local_80 = 0x2f;
      uStack_78 = 0xe100000000000000;
      local_c0 = &local_80;
      lVar5 = 0x7fffffffffffffff;
      FUN_1002c0b78(0x7fffffffffffffff,1,FUN_10000d558,auStack_d0,uVar11,uVar12);
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_1002be98c;
      puVar6 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10) * 0x20);
      uVar11 = *puVar6;
      uVar10 = puVar6[1];
      uVar12 = puVar6[2];
      uVar1 = puVar6[3];
      _swift_bridgeObjectRetain_n(uVar1,2);
      _swift_bridgeObjectRelease(lVar5);
      __sSS14_fromSubstringySSSshFZ(uVar11,uVar10,uVar12,uVar1);
      local_a8 = uVar11;
      uStack_a0 = uVar10;
      _swift_bridgeObjectRelease_n(uVar1,2);
    }
    if (!bVar2) goto LAB_1002be944;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    FUN_100040bb4(&local_80,&DAT_100a82480,&DAT_1008182d0);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    FUN_100040bb4(&local_80,&DAT_100a82480,&DAT_1008182d0);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    uVar12 = 0xe700000000000000;
    local_b0 = 0x6e776f6e6b6e55;
    uVar11 = 0xe700000000000000;
LAB_1002bebe4:
    puVar6 = (undefined8 *)&DAT_100a82480;
    puVar8 = &local_80;
    FUN_100040bb4(puVar8,&DAT_100a82480,&DAT_1008182d0);
  }
  else {
    if (*(long *)(IVar4 + 0x10) == 0) {
      bVar2 = false;
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
      goto LAB_1002be814;
    }
    _swift_bridgeObjectRetain(IVar4);
    uVar9 = 0;
    lVar5 = -0x2fffffffffffffee;
    FUN_1001a2c70(0xd000000000000012);
    if ((uVar9 & 1) == 0) {
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
      _swift_bridgeObjectRelease(IVar4);
LAB_1002be810:
      bVar2 = false;
      goto LAB_1002be814;
    }
    FUN_10003e8bc(*(long *)(IVar4 + 0x38) + lVar5 * 0x20,&local_80);
    _swift_bridgeObjectRelease(IVar4);
    if (local_68 == 0) goto LAB_1002be810;
    puVar6 = &local_98;
    _swift_dynamicCast(puVar6,&local_80,puVar3 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar6 & 1) == 0) {
      bVar2 = false;
      goto LAB_1002be82c;
    }
    local_a8 = local_98;
    uStack_a0 = uStack_90;
LAB_1002be944:
    if (*(long *)(IVar4 + 0x10) == 0) {
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
LAB_1002bea64:
      FUN_100040bb4(&local_80,&DAT_100a82480,&DAT_1008182d0);
LAB_1002bea7c:
      uVar11 = 0xe700000000000000;
      local_b0 = 0x6e776f6e6b6e55;
      if (*(long *)(IVar4 + 0x10) == 0) goto LAB_1002bea58;
LAB_1002bea8c:
      _swift_bridgeObjectRetain(IVar4);
      lVar5 = -0x2fffffffffffffe6;
      uVar9 = 0;
      FUN_1001a2c70(0xd00000000000001a);
      if ((uVar9 & 1) == 0) {
        uStack_78 = 0;
        local_80 = 0;
        local_68 = 0;
        uStack_70 = 0;
      }
      else {
        FUN_10003e8bc(*(long *)(IVar4 + 0x38) + lVar5 * 0x20,&local_80);
      }
      _swift_bridgeObjectRelease(IVar4);
      if (local_68 == 0) goto LAB_1002beb14;
      puVar6 = &local_98;
      _swift_dynamicCast(puVar6,&local_80,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)puVar6 & 1) == 0) goto LAB_1002beb2c;
      uVar12 = uStack_90;
      uVar13 = local_98;
      if (*(long *)(IVar4 + 0x10) != 0) goto LAB_1002beb3c;
LAB_1002beb90:
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(IVar4);
      uVar9 = 0;
      lVar5 = -0x2fffffffffffffee;
      FUN_1001a2c70(0xd000000000000012);
      if ((uVar9 & 1) == 0) {
        uStack_78 = 0;
        local_80 = 0;
        local_68 = 0;
        uStack_70 = 0;
      }
      else {
        FUN_10003e8bc(*(long *)(IVar4 + 0x38) + lVar5 * 0x20,&local_80);
      }
      _swift_bridgeObjectRelease(IVar4);
      if (local_68 == 0) goto LAB_1002bea64;
      puVar6 = &local_98;
      _swift_dynamicCast(puVar6,&local_80,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)puVar6 & 1) == 0) goto LAB_1002bea7c;
      local_b0 = local_98;
      uVar11 = uStack_90;
      if (*(long *)(IVar4 + 0x10) != 0) goto LAB_1002bea8c;
LAB_1002bea58:
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
LAB_1002beb14:
      FUN_100040bb4(&local_80,&DAT_100a82480,&DAT_1008182d0);
LAB_1002beb2c:
      uVar12 = 0xe700000000000000;
      if (*(long *)(IVar4 + 0x10) == 0) goto LAB_1002beb90;
LAB_1002beb3c:
      _swift_bridgeObjectRetain(IVar4);
      lVar5 = 0x656c646e75424643;
      uVar9 = 0;
      FUN_1001a2c70(0x656c646e75424643);
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(IVar4);
        goto LAB_1002beb90;
      }
      FUN_10003e8bc(*(long *)(IVar4 + 0x38) + lVar5 * 0x20,&local_80);
      _swift_bridgeObjectRelease(IVar4);
    }
    _swift_bridgeObjectRelease(IVar4);
    if (local_68 == 0) goto LAB_1002bebe4;
    puVar8 = &local_98;
    puVar6 = &local_80;
    _swift_dynamicCast(puVar8,puVar6,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar8 & 1) != 0) goto LAB_1002bec08;
  }
  local_98 = uVar14;
  uStack_90 = 0xe700000000000000;
LAB_1002bec08:
  FUN_1002bed3c();
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1b);
  _swift_bridgeObjectRelease(uStack_78);
  local_80 = local_a8;
  uStack_78 = uStack_a0;
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  __sSS6appendyySSF(uVar13,uVar12);
  _swift_bridgeObjectRelease(uVar12);
  __sSS6appendyySSF(0x2820,0xe200000000000000);
  __sSS6appendyySSF(local_b0,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  __sSS6appendyySSF(0x3a646c697562203b,0xe800000000000000);
  __sSS6appendyySSF(local_98,uStack_90);
  _swift_bridgeObjectRelease(uStack_90);
  __sSS6appendyySSF(0x203b,0xe200000000000000);
  __sSS6appendyySSF(puVar8,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x2029,0xe200000000000000);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008a9910);
  return 0x6567412d72657355;
}

