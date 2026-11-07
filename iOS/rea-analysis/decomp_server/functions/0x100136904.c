// rea decompile_all
// name: FUN_100136904
// address: 0x100136904
// body: available
// range: 0x100136904-0x100136e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100136904(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_260 [16];
  long alStack_250 [2];
  undefined1 *local_240;
  code *local_238;
  long local_230;
  long local_228;
  long local_220;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [48];
  undefined1 local_1d0;
  uint local_1c8 [2];
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [192];
  ulong local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined1 local_70;
  
  puVar4 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  local_220 = (long)&local_240 + lVar3;
  _swift_beginAccess(param_1 + 0x10,auStack_190,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  if (param_1 == 0) {
    return;
  }
  local_1c0 = 0;
  local_1b8 = 0xe000000000000000;
  local_1b0 = 0;
  local_1a8 = 0xe000000000000000;
  uStack_198 = 0xc000000000000000;
  local_1a0 = 0;
  lVar13 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  local_228 = param_2;
  _swift_weakLoadStrong();
  if (lVar13 != 0) {
    uVar9 = *(undefined8 *)(lVar13 + 0x30);
    uVar10 = *(undefined8 *)(lVar13 + 0x38);
    lVar7 = *(long *)(lVar13 + 0x40);
    uVar1 = *(undefined8 *)(lVar13 + 0x48);
    uVar11 = *(undefined8 *)(lVar13 + 0x50);
    FUN_100139c68(uVar9,uVar10,lVar7,uVar1,uVar11);
    _swift_release(lVar13);
    if (lVar7 != 0) {
      FUN_100139ca0(uVar9,uVar10,lVar7,uVar1,uVar11);
      goto LAB_100136a48;
    }
    FUN_100139ca0(uVar9,uVar10,0,uVar1,uVar11);
  }
  uVar9 = 0;
LAB_100136a48:
  local_1c8[0] = (uint)uVar9;
  lVar13 = param_1 + lVar5;
  _swift_weakLoadStrong();
  if (lVar13 == 0) {
    uVar9 = 0;
    lVar13 = -0x2000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x30);
    uVar1 = *(undefined8 *)(lVar13 + 0x38);
    lVar7 = *(long *)(lVar13 + 0x40);
    uVar11 = *(undefined8 *)(lVar13 + 0x48);
    uVar12 = *(undefined8 *)(lVar13 + 0x50);
    FUN_100139c68(uVar10,uVar1,lVar7,uVar11,uVar12);
    _swift_release(lVar13);
    if (lVar7 == 0) {
      uVar9 = 0;
      lVar13 = -0x2000000000000000;
    }
    else {
      _swift_bridgeObjectRetain(lVar7);
      uVar9 = uVar1;
      lVar13 = lVar7;
    }
    FUN_100139ca0(uVar10,uVar1,lVar7,uVar11,uVar12);
  }
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar5 = param_1 + lVar5;
  local_1b0 = uVar9;
  local_1a8 = lVar13;
  _swift_weakLoadStrong();
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_1c0 = 0;
    local_1b8 = -0x2000000000000000;
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    lVar13 = *(long *)(lVar5 + 0x28);
    _swift_bridgeObjectRetain(lVar13);
    _swift_release(lVar5);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_1c0 = 0;
    if (lVar13 != 0) {
      local_1c0 = uVar9;
    }
    local_1b8 = -0x2000000000000000;
    if (lVar13 != 0) {
      local_1b8 = lVar13;
    }
  }
  local_b8 = (ulong)local_1c8[0];
  local_1d0 = 0;
  uStack_a0 = local_1b0;
  local_98 = local_1a8;
  uStack_88 = uStack_198;
  local_90 = local_1a0;
  local_78 = 0x1000000000000000;
  local_70 = 0;
  uStack_b0 = local_1c0;
  local_a8 = local_1b8;
  FUN_100193a8c(auStack_178,&local_b8);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)alStack_250 + lVar3) = param_1;
  *(uint **)((long)alStack_250 + lVar3 + 8) = local_1c8;
  FUN_1003fb45c(FUN_100139cd8,auStack_260 + lVar3,0xd0000000000000b1,0x80000001008900b0,
                &DAT_d000000000000010,0x80000001008904e0,0x3c,7);
  lVar5 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    FUN_1000914e4(auStack_178);
  }
  else {
    puVar6 = auStack_178;
    FUN_1001bd040(puVar6,0,0);
    local_240 = puVar6;
    _swift_unknownObjectRelease(lVar5);
    lVar7 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar3 = local_220;
    local_238 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    (*local_238)(local_220,1,1,lVar7);
    lVar5 = local_228;
    lVar13 = local_228;
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar9 = *(undefined8 *)(lVar13 + 8);
    puVar4 = &DAT_100a79cf0;
    FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
    puVar8 = &DAT_100a79cf8;
    local_230 = param_1;
    FUN_10003f840(&DAT_100a79cf8,&DAT_100a79cf0,&DAT_10080fb50,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    puVar6 = local_240;
    FUN_1006170a4(uVar9,lVar3,FUN_100139ce0,lVar5,puVar4,puVar8);
    _swift_release(puVar6);
    _swift_release(lVar5);
    FUN_100040bb4(lVar3,&DAT_100a77040,&DAT_10080e910);
    (*local_238)(lVar3,1,1,lVar7);
    _swift_beginAccess(lVar13,auStack_200,0,0);
    uVar10 = *(undefined8 *)(lVar13 + 8);
    _swift_beginAccess(lVar13,auStack_218,0,0);
    uVar2 = *(undefined1 *)(lVar13 + 0x10);
    _swift_retain(lVar5);
    puVar4 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar8 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    FUN_10060913c(uVar10,lVar3,uVar2,FUN_100139cf8,lVar5,puVar4,puVar8);
    FUN_1000914e4(auStack_178);
    _swift_release(uVar10);
    _swift_release(uVar9);
    _swift_release(lVar5);
    FUN_100040bb4(lVar3,&DAT_100a77040,&DAT_10080e910);
  }
  uVar10 = uStack_198;
  uVar9 = local_1a0;
  lVar5 = local_1b8;
  _swift_bridgeObjectRelease(local_1a8);
  _swift_bridgeObjectRelease(lVar5);
  FUN_100006cdc(uVar9,uVar10);
  return;
}

