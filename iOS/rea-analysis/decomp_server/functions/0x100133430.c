// rea decompile_all
// name: FUN_100133430
// address: 0x100133430
// body: available
// range: 0x100133430-0x10013376f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100133430(undefined4 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  long local_88;
  long local_80 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar9 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar16 - extraout_x12;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  local_68 = param_1;
  _swift_retain(uVar11);
  FUN_1003e37e8(local_80,&local_68);
  _swift_release(uVar11);
  if (local_80[0] != 0) {
    plVar12 = *(long **)(local_80[0] + 0x10);
    pcVar15 = *(code **)(*plVar12 + 0xb8);
    plVar5 = plVar12;
    _swift_retain();
    (*pcVar15)();
    _swift_release(plVar12);
    if (((ulong)plVar5 & 1) == 0) {
      plVar12 = *(long **)(local_80[0] + 0x10);
      pcVar15 = *(code **)(*plVar12 + 0xa8);
      plVar5 = plVar12;
      _swift_retain();
      (*pcVar15)();
      _swift_release(plVar12);
      if ((long)plVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100133770);
        (*pcVar15)();
      }
      local_88 = local_80[0];
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (plVar5 != (long *)0x0) {
        plVar12 = (long *)0x0;
        local_98 = lVar17;
        local_90 = lVar16;
        do {
          plVar13 = *(long **)(local_88 + 0x10);
          pcVar15 = *(code **)(*plVar13 + 0x90);
          _swift_retain(plVar13);
          (*pcVar15)(&local_68,plVar12);
          _swift_release(plVar13);
          lVar3 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
          lVar2 = CONCAT44(uStack_64,local_68);
          if (lVar2 == 0) {
            (**(code **)(lVar14 + 0x38))(puVar10,1,1,lVar4);
LAB_1001335a0:
            FUN_100040bb4(puVar10,&DAT_100a766c8,&DAT_10080b1d0);
          }
          else {
            _swift_beginAccess(lVar2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,
                               local_80,0,0);
            FUN_1000e3888(lVar2 + lVar3,puVar10);
            puVar6 = puVar10;
            (**(code **)(lVar14 + 0x30))(puVar10,1,lVar4);
            if ((int)puVar6 == 1) {
              _swift_release(lVar2);
              goto LAB_1001335a0;
            }
            pcVar15 = *(code **)(lVar14 + 0x20);
            (*pcVar15)(lVar17,puVar10,lVar4);
            (**(code **)(lVar14 + 0x10))(lVar16,lVar17,lVar4);
            puVar7 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_100033f0c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_100033f0c(puVar9,uVar1 + 1,1,puVar8);
            }
            lVar16 = local_90;
            *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
            (*pcVar15)(puVar9 + *(long *)(lVar14 + 0x48) * uVar1 +
                                ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)),local_90,
                       lVar4);
            _swift_release(lVar2);
            lVar17 = local_98;
            (**(code **)(lVar14 + 8))(local_98,lVar4);
          }
          plVar12 = (long *)((long)plVar12 + 1);
        } while (plVar5 != plVar12);
      }
      lVar17 = *(long *)(puVar9 + 0x10);
      _swift_release(local_88);
      if (lVar17 != 0) {
        return puVar9;
      }
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      _swift_release(local_80[0]);
    }
  }
  return (undefined *)0x0;
}

