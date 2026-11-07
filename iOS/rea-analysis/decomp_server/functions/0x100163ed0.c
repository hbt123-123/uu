// rea decompile_all
// name: FUN_100163ed0
// address: 0x100163ed0
// body: available
// range: 0x100163ed0-0x10016425f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100163ed0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long unaff_x20;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  long lStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  long local_a0;
  long local_78;
  long local_68;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_78 = -0x53ffffff6062196d;
    uVar7 = 0xbbe78ba8e781b5e6;
  }
  else if (*(char *)(param_1 + 0x18) == '\x01') {
    local_78 = -0x7ffffffeff76c830;
    uVar7 = 0x1000000000000013;
  }
  else {
    local_78 = -0x56ffffffffffff7a;
    uVar7 = 0xbae4a5b4e8b1a4e5;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(lVar8 + 0x14);
  uVar1 = *(undefined8 *)(lVar8 + 0x30);
  uVar4 = *(undefined8 *)(lVar8 + 0x38);
  lVar2 = *(long *)(lVar8 + 0x40);
  uVar13 = *(undefined8 *)(lVar8 + 0x48);
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  uVar5 = *(undefined8 *)(lVar8 + 0x58);
  uVar9 = 0;
  if (lVar2 != 0) {
    uVar9 = (undefined4)uVar1;
  }
  FUN_100139c68(uVar1,uVar4,lVar2,uVar13,uVar3);
  FUN_100139ca0(uVar1,uVar4,lVar2,uVar13,uVar3);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  lVar2 = *(long *)(lVar8 + 0x40);
  uVar4 = *(undefined8 *)(lVar8 + 0x48);
  uVar13 = *(undefined8 *)(lVar8 + 0x50);
  if (lVar2 == 0) {
    FUN_100139c68(uVar1,uVar3,0,uVar4,uVar13);
    uVar12 = 0;
    lVar8 = -0x2000000000000000;
  }
  else {
    FUN_100139c68(uVar1,uVar3,lVar2,uVar4,uVar13);
    _swift_bridgeObjectRetain(lVar2);
    lVar8 = lVar2;
    uVar12 = uVar3;
  }
  FUN_100139ca0(uVar1,uVar3,lVar2,uVar4,uVar13);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lStack_c8 = local_78;
  local_d0 = uVar7;
  local_c0 = uVar6;
  local_b8 = uVar5;
  local_b0[0] = uVar9;
  local_a8 = uVar12;
  local_a0 = lVar8;
  FUN_1003fb45c(FUN_10016b8fc,auStack_e0,0xd0000000000000a4,0x800000010088d870,0xd00000000000001a,
                0x80000001008936e0,0x340,7);
  _swift_bridgeObjectRelease(lVar8);
  _swift_bridgeObjectRelease();
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf)) {
    FUN_100153530();
    FUN_1003fb45c(FUN_10016b914,param_1,0xd0000000000000a9,0x8000000100893700,0xd00000000000001a,
                  0x80000001008937b0,0x38,7);
    plVar10 = *(long **)(local_78 + 0x20);
    pcVar11 = *(code **)(*plVar10 + 0x88);
    local_68 = param_1;
    _swift_retain(plVar10);
    (*pcVar11)(&local_68);
    _swift_release(plVar10);
    _swift_release(local_78);
    uVar7 = *(undefined8 *)
             (unaff_x20 +
             _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___receiveCopyModel);
    _swift_retain(uVar7);
    FUN_10016ec04();
    _swift_release(uVar7);
    if (param_1 != 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar11 = FUN_10016b91c;
      local_a0 = param_1;
      FUN_1003fb45c(FUN_10016b91c,local_b0,0xd0000000000000a4,0x800000010088d870,0xd00000000000001a,
                    0x80000001008936e0,0x347,7);
      FUN_100153164();
      FUN_100189bc4(param_1);
      _swift_bridgeObjectRelease(param_1);
      _swift_release(pcVar11);
    }
  }
  return 0;
}

