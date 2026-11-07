// rea decompile_all
// name: FUN_100142198
// address: 0x100142198
// body: available
// range: 0x100142198-0x1001425d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100142198(undefined4 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  code *pcVar15;
  long unaff_x20;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_f0 [16];
  long alStack_e0 [4];
  char *local_c0;
  char *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  local_a0 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = (long)&local_c0 + lVar6;
  lVar18 = *(long *)(unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  local_80 = CONCAT44(local_80._4_4_,param_1);
  _swift_retain(lVar18);
  FUN_1003e37e8(&local_70,&local_80);
  _swift_release();
  lVar4 = local_70;
  if (local_70 != 0) {
    FUN_1001913d0();
    local_a8 = lVar18;
    local_90 = param_2;
    if (param_2 != 0) {
      FUN_10018c878();
      plVar16 = *(long **)(lVar4 + 0x10);
      pcVar15 = *(code **)(*plVar16 + 0xa8);
      plVar7 = plVar16;
      _swift_retain();
      (*pcVar15)();
      _swift_release(plVar16);
      if ((long)plVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1001425d4);
        (*pcVar15)();
      }
      puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (plVar7 != (long *)0x0) {
        plVar16 = (long *)0x0;
        local_b8 = "allTakProcessData";
        local_c0 = s____count__100890be0 + 0x10;
        local_b0 = plVar7;
        do {
          plVar17 = *(long **)(lVar4 + 0x10);
          pcVar15 = *(code **)(*plVar17 + 0x90);
          _swift_retain(plVar17);
          (*pcVar15)(&local_70,plVar16);
          _swift_release(plVar17);
          lVar18 = local_70;
          if (local_70 != 0) {
            plVar1 = (long *)(local_70 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
            local_70 = *plVar1;
            lStack_68 = plVar1[1];
            local_80 = 0x2f;
            uStack_78 = 0xe100000000000000;
            FUN_10009ff0c();
            puVar8 = &local_80;
            __sSy10FoundationE8containsySbqd__SyRd__lF
                      (puVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,plVar17,plVar17);
            if (((ulong)puVar8 & 1) == 0) {
              local_70 = local_a8;
              lStack_68 = local_90;
              _swift_bridgeObjectRetain();
              __sSS6appendyySSF(0x2f,0xe100000000000000);
              lVar5 = lStack_68;
              lVar9 = *plVar1;
              lVar3 = plVar1[1];
              _swift_bridgeObjectRetain(lStack_68);
              __sSS6appendyySSF(lVar9,lVar3);
              _swift_bridgeObjectRelease(lVar5);
              lVar3 = lStack_68;
              lVar9 = local_70;
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(long *)((long)alStack_e0 + lVar6) = lVar9;
              *(long *)((long)alStack_e0 + lVar6 + 8) = lVar3;
              *(long *)((long)alStack_e0 + lVar6 + 0x10) = lVar18;
              FUN_1003fb45c(FUN_1001452f0,auStack_f0 + lVar6,0xd0000000000000ad,
                            (ulong)local_b8 | 0x8000000000000000,0xd00000000000001b,
                            (ulong)local_c0 | 0x8000000000000000,0x20a,7);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar9,lVar3);
              _swift_bridgeObjectRelease(lVar3);
              IVar10 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",lVar9);
              __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
                        (local_88,IVar10);
              puVar11 = puVar12;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puVar12;
              if (((ulong)puVar11 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_100033f0c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
              }
              uVar2 = *(ulong *)(puVar13 + 0x10);
              puVar12 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_100033f0c(puVar12,uVar2 + 1,1,puVar13);
              }
              *(ulong *)(puVar12 + 0x10) = uVar2 + 1;
              (**(code **)(local_a0 + 0x20))
                        (puVar12 + *(long *)(local_a0 + 0x48) * uVar2 +
                                   ((ulong)*(byte *)(local_a0 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(local_a0 + 0x50) ^ 0xffffffffffffffff)),
                         local_88,lStack_98);
              lVar9 = *plVar1;
              lVar3 = plVar1[1];
              _swift_bridgeObjectRetain(lVar3);
              puVar11 = puVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puVar14;
              if (((ulong)puVar11 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_100033898(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
              }
              uVar2 = *(ulong *)(puVar13 + 0x10);
              puVar14 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_100033898(puVar14,uVar2 + 1,1,puVar13);
              }
              *(ulong *)(puVar14 + 0x10) = uVar2 + 1;
              *(long *)(puVar14 + uVar2 * 0x10 + 0x20) = lVar9;
              *(long *)(puVar14 + uVar2 * 0x10 + 0x28) = lVar3;
              _swift_release(lVar18);
              plVar7 = local_b0;
            }
            else {
              _swift_release(lVar18);
            }
          }
          plVar16 = (long *)((long)plVar16 + 1);
        } while (plVar7 != plVar16);
      }
      _swift_release(lVar4);
      _swift_bridgeObjectRelease(local_90);
      goto LAB_1001425a8;
    }
    _swift_release(lVar4);
  }
  puVar12 = (undefined *)0x0;
  puVar14 = (undefined *)0x0;
LAB_1001425a8:
  auVar19._8_8_ = puVar14;
  auVar19._0_8_ = puVar12;
  return auVar19;
}

