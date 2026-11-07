// rea decompile_all
// name: FUN_1001a5ae4
// address: 0x1001a5ae4
// body: available
// range: 0x1001a5ae4-0x1001a60cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a5b90 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a5ae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  long extraout_x8;
  undefined8 uVar24;
  code *pcVar25;
  undefined1 *puVar26;
  long *plVar27;
  long unaff_x20;
  undefined8 *puVar28;
  long lVar29;
  undefined8 auStack_160 [2];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar17 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = -extraout_x8;
  puVar26 = &stack0xfffffffffffffeb0 + lVar23;
  if (*(char *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::isUpdatingRemote) != '\x01') {
    *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::isUpdatingRemote) = 1;
    lVar29 = *(long *)(param_1 + 0x10);
    puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar29 != 0) {
      local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100070154(0,lVar29,0);
      puVar28 = (undefined8 *)(param_1 + 0x48);
      puVar17 = local_80;
      do {
        uVar18 = puVar28[-5];
        uVar8 = puVar28[-4];
        uVar1 = puVar28[-3];
        uVar9 = puVar28[-2];
        uVar2 = puVar28[-1];
        uVar10 = *puVar28;
        uVar3 = puVar28[1];
        uVar11 = puVar28[2];
        uVar4 = puVar28[3];
        uVar12 = puVar28[4];
        uVar5 = puVar28[5];
        uVar13 = puVar28[6];
        uVar6 = puVar28[7];
        uVar14 = puVar28[8];
        uVar24 = puVar28[9];
        uVar7 = *(ulong *)(puVar17 + 0x10);
        uVar15 = *(ulong *)(puVar17 + 0x18);
        local_80 = puVar17;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        if (uVar15 >> 1 <= uVar7) {
          FUN_100070154(1 < uVar15,uVar7 + 1,1);
          puVar17 = local_80;
        }
        puVar28 = puVar28 + 0x1a;
        *(ulong *)(puVar17 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x20) = uVar18;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x28) = uVar8;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x30) = uVar1;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x38) = uVar9;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x40) = uVar2;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x48) = uVar10;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x50) = uVar3;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x58) = uVar11;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x60) = uVar4;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x68) = uVar12;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x70) = uVar5;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x78) = uVar13;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x80) = uVar6;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x88) = uVar14;
        *(undefined8 *)(puVar17 + uVar7 * 0x78 + 0x90) = uVar24;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    uStack_78 = 2;
    local_70 = 2;
    puVar19 = &DAT_100a7caa8;
    local_80 = puVar17;
    FUN_100004bb4(&DAT_100a7caa8,&DAT_100811538);
    puVar20 = &DAT_100a7cab0;
    FUN_10003f840(&DAT_100a7cab0,&DAT_100a7caa8,&DAT_100811538,
                  &TargetProtocolConformanceDescriptor_100820bb0);
    puVar21 = &DAT_100a7cab8;
    FUN_10003f840(&DAT_100a7cab8,&DAT_100a7caa8,&DAT_100811538,
                  &TargetProtocolConformanceDescriptor_100820bd8);
    *(undefined **)((long)auStack_160 + lVar23) = puVar20;
    *(undefined **)((long)auStack_160 + lVar23 + 8) = puVar21;
    ppuVar22 = &local_80;
    FUN_10039e070(ppuVar22,puVar19,0,0,0,&DAT_1009b82f0,puVar19,&PTR_PTR_100a8bc30);
    _swift_bridgeObjectRelease(puVar17);
    lVar29 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    pcVar25 = *(code **)(*(long *)(lVar29 + -8) + 0x38);
    (*pcVar25)(puVar26,1,1);
    puVar17 = &DAT_1009a2188;
    _swift_allocObject(&DAT_1009a2188,0x20,7);
    *(long *)(puVar17 + 0x10) = unaff_x20;
    *(long *)(puVar17 + 0x18) = param_1;
    _swift_bridgeObjectRetain(param_1);
    lVar23 = unaff_x20;
    FUN_10060edd8();
    _swift_beginAccess();
    uVar18 = *(undefined8 *)(lVar23 + 8);
    puVar19 = &DAT_100a7cac0;
    FUN_100004bb4(&DAT_100a7cac0,&DAT_100811540);
    puVar20 = &DAT_100a7cac8;
    FUN_10003f840(&DAT_100a7cac8,&DAT_100a7cac0,&DAT_100811540,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_1006170a4(uVar18,puVar26,FUN_1001ac17c,puVar17,puVar19,puVar20);
    _swift_release(ppuVar22);
    _swift_release(puVar17);
    FUN_100040bb4(puVar26,&DAT_100a77040,&DAT_10080e910);
    (*pcVar25)(puVar26,1,1,lVar29);
    _swift_beginAccess(lVar23,auStack_98,0,0);
    plVar27 = *(long **)(lVar23 + 8);
    _swift_beginAccess(lVar23,auStack_b0,0,0);
    uVar16 = *(undefined1 *)(lVar23 + 0x10);
    puVar17 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar19 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    FUN_10060913c(plVar27,puVar26,uVar16,FUN_1001a708c,0,puVar17,puVar19);
    _swift_release(uVar18);
    FUN_100040bb4(puVar26,&DAT_100a77040,&DAT_10080e910);
    (*pcVar25)(puVar26,1,1,lVar29);
    puVar17 = &DAT_1009a21b0;
    _swift_allocObject(&DAT_1009a21b0,0x18,7);
    *(long *)(puVar17 + 0x10) = unaff_x20;
    _swift_beginAccess(lVar23,auStack_c8,0,0);
    (**(code **)(*plVar27 + 0x58))(*(undefined8 *)(lVar23 + 8),puVar26,FUN_1001ac194,puVar17);
    _swift_release(plVar27);
    _swift_release(puVar17);
    FUN_100040bb4(puVar26,&DAT_100a77040,&DAT_10080e910);
    return;
  }
  uVar18 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::nextUpdateRemoteApps);
  *(long *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::nextUpdateRemoteApps) = param_1;
  _swift_bridgeObjectRelease(uVar18);
  _swift_bridgeObjectRetain(param_1);
  return;
}

