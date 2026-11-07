// rea decompile_all
// name: FUN_10013c308
// address: 0x10013c308
// body: available
// range: 0x10013c308-0x10013c743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10013c308(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  ulong uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  
  lVar5 = 0;
  local_b0 = param_2;
  __s10Foundation3URLVMa();
  local_98 = *(long *)(lVar5 + -8);
  local_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar6 = &DAT_100a77040;
  local_a8 = extraout_x12;
  local_a0 = auStack_c0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)(auStack_c0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  puVar16 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
  local_88 = lVar5;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar14 = (undefined8 *)puVar16[2];
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar14 = puVar16;
    if ((long)param_1 < 0) {
      puVar14 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar6;
  if (puVar14 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((undefined8 *)puVar16[2] <= puVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10013c4e4);
            (*pcVar4)();
          }
          puVar17 = (undefined8 *)param_1[(long)puVar18 + 4];
          _swift_retain(puVar17);
        }
        else {
          puVar17 = puVar18;
          FUN_10016a034(puVar18,param_1);
        }
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10013c4e0);
          (*pcVar4)();
        }
        puVar15 = (undefined8 *)((long)puVar18 + 1);
        if ((puVar17[0x11] == 0) ||
           ((*(byte *)(puVar17[0x11] +
                      _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory) & 1) == 0))
        break;
        puVar7 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          FUN_100070008(0,*(long *)(puVar6 + 0x10) + 1,1);
        }
        uVar11 = *(ulong *)(local_80 + 0x10);
        local_b8 = (undefined *)unaff_x20;
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
          FUN_100070008(1 < *(ulong *)(local_80 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(local_80 + 0x10) = uVar11 + 1;
        *(undefined8 **)(local_80 + uVar11 * 8 + 0x20) = puVar17;
        unaff_x20 = local_b8;
        puVar6 = local_80;
        puVar18 = puVar15;
        if (puVar15 == puVar14) goto LAB_10013c500;
      }
      _swift_release(puVar17);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
    } while (puVar15 != puVar14);
  }
LAB_10013c500:
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar13 = local_b0;
  *(undefined8 *)(lVar5 + -0x10) = unaff_x20;
  *(undefined8 *)(lVar5 + -8) = uVar13;
  pcVar4 = FUN_1001454e4;
  FUN_100139d58(FUN_1001454e4,lVar5 + -0x20,puVar6);
  _swift_release(puVar6);
  puVar6 = &DAT_100a762e0;
  FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
  puVar7 = &DAT_100a7a048;
  local_b8 = puVar6;
  FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar8 = pcVar4;
  FUN_10061dd54(pcVar4,puVar6,puVar7);
  _swift_bridgeObjectRelease(pcVar4);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar3 = local_88;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(local_88,1,1,lVar5);
  puVar6 = &DAT_10099e8f0;
  _swift_allocObject(&DAT_10099e8f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,unaff_x20);
  lVar2 = local_90;
  lVar5 = local_98;
  puVar1 = local_a0;
  (**(code **)(local_98 + 0x10))(local_a0,uVar13,local_90);
  uVar11 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar12 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  puVar9 = &DAT_10099e968;
  _swift_allocObject(&DAT_10099e968,uVar12 + local_a8,uVar11 | 7);
  *(undefined **)(puVar9 + 0x10) = puVar6;
  *(undefined8 **)(puVar9 + 0x18) = param_1;
  (**(code **)(lVar5 + 0x20))(puVar9 + uVar12,puVar1,lVar2);
  _swift_bridgeObjectRetain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar13 = *param_1;
  puVar6 = &DAT_100a7a050;
  FUN_100004bb4(&DAT_100a7a050,&DAT_10080eb20);
  puVar10 = &DAT_100a7a058;
  FUN_10003f840(&DAT_100a7a058,&DAT_100a7a050,&DAT_10080eb20,
                &TargetProtocolConformanceDescriptor_1008488a0);
  FUN_1006177ec(uVar13,lVar3,FUN_100145574,puVar9,puVar6,local_b8,puVar10,puVar7);
  _swift_release(pcVar8);
  _swift_release(puVar9);
  FUN_100040bb4(lVar3,&DAT_100a77040,&DAT_10080e910);
  return uVar13;
}

