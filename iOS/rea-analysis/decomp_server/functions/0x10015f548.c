// rea decompile_all
// name: FUN_10015f548
// address: 0x10015f548
// body: available
// range: 0x10015f548-0x10015fb8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10015f548(ulong param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_110 [16];
  ulong uStack_100;
  int aiStack_f8 [2];
  long lStack_f0;
  int aiStack_e8 [2];
  ulong local_e0;
  int local_d4;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  int local_98;
  byte local_94;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&local_e0 - extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar17 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
  _swift_beginAccess(lVar8,auStack_78,0,0);
  uVar4 = param_1;
  FUN_100152fd0(param_1,*(undefined8 *)(lVar8 + 8));
  lVar8 = _TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
  iVar15 = (int)param_1;
  if ((uVar4 & 1) == 0) {
    uVar13 = *(ulong *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
    uVar14 = 0;
    if (uVar13 != 0) {
      _swift_retain(uVar13);
      puVar2 = &DAT_100a75aa8;
      FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
      FUN_100407cdc(&local_98,FUN_10016c5cc,uVar13,puVar2);
      _swift_release(uVar13);
      uVar14 = 0;
      uVar4 = uVar13;
      if (((local_94 & 1) == 0) && (local_98 == iVar15)) {
        uVar14 = *(ulong *)(unaff_x20 + lVar8);
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          _swift_retain_n(uVar14,2);
          __s10Foundation4DateVACycfC(lVar17);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)(lVar17 + -0x20) = uVar14;
          *(int *)(lVar17 + -0x18) = iVar15;
          *(long *)(lVar17 + -0x10) = lVar17;
          FUN_100407cdc(&local_98,FUN_10016bec4,lVar17 + -0x30,PTR___sSbN_1009958c8);
          (**(code **)(lVar11 + 8))(lVar17,lVar3);
          if (((byte)local_98 & 1) == 0) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(int *)(lVar17 + -0x10) = iVar15;
            FUN_1003fb48c(FUN_10016bee4,lVar17 + -0x20,0xd0000000000000a4,0x800000010088d870,
                          0xd000000000000020,0x80000001008945d0,0x25f,0);
            _swift_release_n(uVar14,2);
            return;
          }
          uVar4 = uVar14;
          _swift_release(uVar14);
        }
      }
    }
    local_e0 = uVar14;
    FUN_1001533d4();
    puVar2 = &DAT_10099f868;
    _swift_allocObject(&DAT_10099f868,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,uVar4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined **)(lVar17 + -0x10) = puVar2;
    *(int *)(lVar17 + -8) = iVar15;
    puVar5 = &DAT_100a762e0;
    FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
    puVar6 = puVar5;
    _swift_allocObject();
    pcVar7 = FUN_10016be4c;
    FUN_100615648(FUN_10016be4c,lVar17 + -0x20,puVar6);
    _swift_release(puVar2);
    lVar8 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    pcVar16 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    local_d4 = iVar15;
    (*pcVar16)(lVar18,1,1,lVar8);
    puVar2 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar6 = &DAT_10099fbd8;
    _swift_allocObject(&DAT_10099fbd8,0x24,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    *(ulong *)(puVar6 + 0x18) = uVar14;
    *(int *)(puVar6 + 0x20) = iVar15;
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar10 = *(undefined8 *)(uVar14 + 8);
    puVar2 = &DAT_100a7a048;
    FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_1006170a4(uVar10,lVar18,FUN_10016be70,puVar6,puVar5,puVar2);
    _swift_release(pcVar7);
    _swift_release(puVar6);
    FUN_100040bb4(lVar18,&DAT_100a77040,&DAT_10080e910);
    (*pcVar16)(lVar18,1,1,lVar8);
    puVar2 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,unaff_x20);
    puVar5 = &DAT_10099fc00;
    _swift_allocObject(&DAT_10099fc00,0x28,7);
    uVar4 = local_e0;
    *(int *)(puVar5 + 0x10) = local_d4;
    *(ulong *)(puVar5 + 0x18) = local_e0;
    *(undefined **)(puVar5 + 0x20) = puVar2;
    _swift_beginAccess(uVar14,auStack_b0,0,0);
    uVar12 = *(undefined8 *)(uVar14 + 8);
    _swift_beginAccess(uVar14,auStack_c8,0,0);
    uVar1 = *(undefined1 *)(uVar14 + 0x10);
    _swift_retain(uVar4);
    _swift_retain(puVar2);
    puVar6 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar9 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    FUN_10060913c(uVar12,lVar18,uVar1,FUN_10016beb8,puVar5,puVar6,puVar9);
    _swift_release(uVar4);
    _swift_release(uVar12);
    _swift_release(uVar10);
    _swift_release(puVar5);
    FUN_100040bb4(lVar18,&DAT_100a77040,&DAT_10080e910);
    _swift_release(puVar2);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar17 + -0x10) = iVar15;
    FUN_1003fb48c(FUN_10016beec,lVar17 + -0x20,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000020,0x80000001008945d0,0x25a,0);
  }
  return;
}

