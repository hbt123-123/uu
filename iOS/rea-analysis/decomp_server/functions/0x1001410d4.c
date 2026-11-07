// rea decompile_all
// name: FUN_1001410d4
// address: 0x1001410d4
// body: available
// range: 0x1001410d4-0x1001416bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001410d4(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  long alStack_140 [2];
  ulong auStack_130 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined1 *local_f0;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined4 local_b0 [6];
  code *local_98;
  long lStack_90;
  undefined1 auStack_80 [32];
  
  puVar5 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = -extraout_x8;
  puVar12 = auStack_80;
  _swift_beginAccess(param_2 + 0x10,puVar12,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    local_98 = (code *)((ulong)local_98 & 0xffffffffffffff00);
    FUN_10061630c(&local_98);
    return;
  }
  uVar14 = *(undefined8 *)
            (param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  uVar15 = (undefined4)param_3;
  local_b0[0] = uVar15;
  _swift_retain(uVar14);
  FUN_1003e37e8(&local_98,local_b0);
  _swift_release(uVar14);
  pcVar3 = local_98;
  if (local_98 == (code *)0x0) {
    local_98 = (code *)0x0;
    FUN_10061630c(&local_98);
    return;
  }
  FUN_100142198();
  uVar14 = *(undefined8 *)
            (pcVar3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl);
  *(undefined8 *)
   (pcVar3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl) = param_3;
  _swift_bridgeObjectRelease(uVar14);
  uVar14 = *(undefined8 *)
            (pcVar3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName);
  *(undefined1 **)
   (pcVar3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName) = puVar12;
  _swift_bridgeObjectRelease(uVar14);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)alStack_140 + lVar9;
  *(undefined4 *)((long)auStack_130 + lVar9) = uVar15;
  *(code **)((long)auStack_130 + lVar9 + 8) = pcVar3;
  pcVar6 = FUN_10014579c;
  FUN_1003fb45c(FUN_10014579c,lVar13,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000018,
                0x80000001008915a0,0x1b6,7);
  FUN_1001913d0();
  if (lVar13 == 0) {
    local_98 = (code *)((ulong)local_98 & 0xffffffffffffff00);
    FUN_10061630c(&local_98);
    _swift_release(pcVar3);
    return;
  }
  uVar14 = *(undefined8 *)
            (param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
  local_f8 = param_1;
  local_f0 = auStack_120 + lVar9;
  local_98 = pcVar6;
  lStack_90 = lVar13;
  _swift_bridgeObjectRetain(lVar13);
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  _swift_bridgeObjectRelease(lVar13);
  lVar4 = lStack_90;
  pcVar6 = local_98;
  lVar13 = param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar13 != 0) {
    lVar7 = lVar13 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    lVar8 = _TtC14UURemoteServer16ClipboardHandler::ref;
    if (lVar7 != 0) {
      _swift_beginAccess(lVar7 + _TtC14UURemoteServer16ClipboardHandler::ref,&local_98,0,0);
      lVar8 = lVar7 + lVar8;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        FUN_1000c7b64();
        _swift_unknownObjectRelease(lVar7);
        _swift_unknownObjectRelease(lVar13);
        uVar16 = *(undefined8 *)(lVar8 + 0x30);
        lVar13 = *(long *)(lVar8 + 0x38);
        _swift_bridgeObjectRetain(lVar13);
        _swift_release(lVar8);
        if (lVar13 != 0) goto LAB_1001413bc;
        goto LAB_1001413ac;
      }
      _swift_unknownObjectRelease(lVar7);
    }
    _swift_unknownObjectRelease(lVar13);
  }
LAB_1001413ac:
  _swift_bridgeObjectRelease(0);
  uVar16 = 0;
  lVar13 = -0x2000000000000000;
LAB_1001413bc:
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)((long)&uStack_150 + lVar9) = uVar14;
  *(undefined4 *)((long)auStack_148 + lVar9) = uVar15;
  *(undefined8 *)((long)alStack_140 + lVar9) = uVar16;
  *(long *)((long)alStack_140 + lVar9 + 8) = lVar13;
  *(code **)((long)auStack_130 + lVar9) = pcVar6;
  *(long *)((long)auStack_130 + lVar9 + 8) = lVar4;
  puVar5 = &DAT_100a7a078;
  FUN_100004bb4(&DAT_100a7a078,&DAT_10080eb48);
  local_108 = puVar5;
  _swift_allocObject();
  pcVar6 = FUN_1001457a8;
  FUN_100615648(FUN_1001457a8,auStack_160 + lVar9,puVar5);
  _swift_bridgeObjectRelease(lVar13);
  _swift_bridgeObjectRelease(lVar4);
  lVar9 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar12 = local_f0;
  local_118 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  local_110 = lVar9;
  (*local_118)(local_f0,1,1,lVar9);
  puVar5 = &DAT_10099e9e0;
  _swift_allocObject(&DAT_10099e9e0,0x30,7);
  lVar9 = local_f8;
  *(long *)(puVar5 + 0x10) = param_2;
  *(undefined4 *)(puVar5 + 0x18) = uVar15;
  *(code **)(puVar5 + 0x20) = pcVar3;
  *(long *)(puVar5 + 0x28) = local_f8;
  local_100 = param_2;
  _swift_retain(pcVar3);
  lVar13 = lVar9;
  _swift_retain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar14 = *(undefined8 *)(lVar13 + 8);
  puVar10 = &DAT_100a7a080;
  FUN_10003f840(&DAT_100a7a080,&DAT_100a7a078,&DAT_10080eb48,
                &TargetProtocolConformanceDescriptor_1008488a0);
  FUN_1006170a4(uVar14,puVar12,FUN_100145800,puVar5,local_108,puVar10);
  local_108 = (undefined *)uVar14;
  _swift_release(pcVar6);
  _swift_release(puVar5);
  FUN_100040bb4(puVar12,&DAT_100a77040,&DAT_10080e910);
  (*local_118)(puVar12,1,1,local_110);
  puVar5 = &DAT_10099ea08;
  _swift_allocObject(&DAT_10099ea08,0x20,7);
  *(undefined4 *)(puVar5 + 0x10) = uVar15;
  *(long *)(puVar5 + 0x18) = lVar9;
  _swift_beginAccess(lVar13,auStack_c8,0,0);
  uVar14 = *(undefined8 *)(lVar13 + 8);
  _swift_beginAccess(lVar13,auStack_e0,0,0);
  uVar1 = *(undefined1 *)(lVar13 + 0x10);
  _swift_retain(lVar9);
  puVar10 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar11 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  puVar2 = local_108;
  FUN_10060913c(uVar14,puVar12,uVar1,FUN_100145844,puVar5,puVar10,puVar11);
  _swift_release(pcVar3);
  _swift_release(uVar14);
  _swift_release(puVar2);
  _swift_release(puVar5);
  FUN_100040bb4(puVar12,&DAT_100a77040,&DAT_10080e910);
  return;
}

