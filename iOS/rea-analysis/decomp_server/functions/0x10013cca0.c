// rea decompile_all
// name: FUN_10013cca0
// address: 0x10013cca0
// body: available
// range: 0x10013cca0-0x10013d107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10013cca0(long *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_d0 [16];
  long alStack_c0 [5];
  undefined8 *local_98;
  undefined *local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  puVar14 = (undefined8 *)((long)alStack_c0 + lVar7 + 0x10);
  lVar11 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar9 = *(long *)(lVar11 + 0x10);
    pbVar10 = (byte *)(lVar11 + 0x20);
    do {
      if (lVar9 == 0) {
        uVar15 = param_3 & 0xffffffffffffff8;
        local_98 = puVar14;
        if (param_3 >> 0x3e == 0) {
          uVar17 = *(ulong *)(uVar15 + 0x10);
        }
        else {
          uVar17 = uVar15;
          if ((long)param_3 < 0) {
            uVar17 = param_3;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
        alStack_c0[4] = param_2;
        if (uVar17 != 0) {
          uVar12 = 0;
          alStack_c0[3] = param_4;
          do {
            if ((param_3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar15 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10013d0ec);
                (*pcVar3)();
              }
              uVar18 = *(ulong *)(param_3 + uVar12 * 8 + 0x20);
              _swift_retain(uVar18);
            }
            else {
              uVar18 = uVar12;
              FUN_10016a034(uVar12,param_3);
            }
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10013d0e8);
              (*pcVar3)();
            }
            uVar13 = uVar12 + 1;
            lVar11 = *(long *)(uVar18 + 0x88);
            if (((lVar11 == 0) ||
                ((*(byte *)(lVar11 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory
                           ) & 1) != 0)) ||
               (*(long *)(lVar11 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize) !=
                0)) {
              _swift_release(uVar18);
              param_4 = alStack_c0[3];
            }
            else {
              puVar5 = puVar4;
              _swift_isUniquelyReferenced_nonNull_native();
              local_90[0] = puVar4;
              if (((ulong)puVar5 & 1) == 0) {
                FUN_100070008(0,*(long *)(puVar4 + 0x10) + 1,1);
              }
              uVar1 = *(ulong *)(local_90[0] + 0x10);
              lVar11 = uVar1 + 1;
              if (*(ulong *)(local_90[0] + 0x18) >> 1 <= uVar1) {
                alStack_c0[2] = lVar11;
                FUN_100070008(1 < *(ulong *)(local_90[0] + 0x18),lVar11,1);
                lVar11 = alStack_c0[2];
              }
              *(long *)(local_90[0] + 0x10) = lVar11;
              *(ulong *)(local_90[0] + uVar1 * 8 + 0x20) = uVar18;
              param_4 = alStack_c0[3];
              puVar4 = local_90[0];
            }
            uVar12 = uVar12 + 1;
            alStack_c0[3] = param_4;
          } while (uVar13 != uVar17);
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)((long)alStack_c0 + lVar7) = alStack_c0[4];
        *(long *)((long)alStack_c0 + lVar7 + 8) = param_4;
        pcVar3 = FUN_1001455c0;
        FUN_100139d58(FUN_1001455c0,auStack_d0 + lVar7,puVar4);
        _swift_release(puVar4);
        puVar4 = &DAT_100a762e0;
        FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
        puVar5 = &DAT_100a7a048;
        FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        pcVar6 = pcVar3;
        FUN_10061dd54(pcVar3,puVar4,puVar5);
        _swift_bridgeObjectRelease(pcVar3);
        lVar7 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        puVar14 = local_98;
        puVar8 = local_98;
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_98,1,1,lVar7);
        FUN_10060edd8();
        _swift_beginAccess();
        uVar16 = *puVar8;
        puVar4 = &DAT_100a7a050;
        FUN_100004bb4(&DAT_100a7a050,&DAT_10080eb20);
        puVar5 = &DAT_100a7a058;
        FUN_10003f840(&DAT_100a7a058,&DAT_100a7a050,&DAT_10080eb20,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        FUN_100617950(uVar16,puVar14,FUN_10013d8dc,0,puVar4,PTR___sSbN_1009958c8,puVar5);
        _swift_release(pcVar6);
        FUN_100040bb4(puVar14,&DAT_100a77040,&DAT_10080e910);
        return;
      }
      bVar2 = *pbVar10;
      lVar9 = lVar9 + -1;
      pbVar10 = pbVar10 + 1;
    } while ((bVar2 & 1) != 0);
  }
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_10013d108,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000028,
                0x8000000100891250,0xcc,0);
  FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
  local_90[0] = (undefined *)((ulong)local_90[0] & 0xffffffffffffff00);
  FUN_100615420(local_90);
  return;
}

