// rea decompile_all
// name: FUN_100189010
// address: 0x100189010
// body: available
// range: 0x100189010-0x1001893df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100189010(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong self;
  ID IVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x12;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_d0 [16];
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  char *local_a8;
  char *pcStack_a0;
  ulong local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_b0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12;
  local_88 = lVar10;
  uVar4 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"pasteboardItems");
  local_78 = (undefined *)0x0;
  if (uVar4 != 0) {
    uVar5 = 0;
    FUN_10004003c(0,&DAT_100a762b8,&PTR__OBJC_CLASS___NSPasteboardItem_100a65848);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar4 & 0xffffffffffffff8;
      if ((long)uVar4 < 0) {
        uVar15 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar15 == 0) {
      _swift_bridgeObjectRelease(uVar4);
      local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1001893e0);
        (*pcVar13)();
      }
      uVar14 = 0;
      local_68 = *(undefined8 *)PTR__NSPasteboardTypeFileURL_100995438;
      local_70 = uVar4 & 0xc000000000000001;
      local_a8 = s___100898650 + 0x20;
      pcStack_a0 = s_____100893bb0;
      local_98 = uVar15;
      local_90 = puVar11;
      local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        if (local_70 == 0) {
          self = *(ID *)(uVar4 + uVar14 * 8 + 0x20);
        }
        else {
          self = uVar14;
          FUN_10016a020(uVar14,uVar4);
        }
        pcVar9 = "stringForType:";
        IVar6 = _objc_msgSend(self,"stringForType:",local_68);
        if (IVar6 != 0) {
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          __s10Foundation3URLV6stringACSgSSh_tcfC(puVar11,IVar6,pcVar9);
          _swift_bridgeObjectRelease(pcVar9);
          puVar7 = puVar11;
          (**(code **)(lVar12 + 0x30))(puVar11,1,lVar3);
          lVar1 = local_88;
          if ((int)puVar7 == 1) {
            FUN_1000ef618(puVar11);
          }
          else {
            pcVar13 = *(code **)(lVar12 + 0x20);
            (*pcVar13)(local_88,puVar11,lVar3);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)(lVar10 + -0x10) = lVar1;
            FUN_1003fb48c(FUN_10018b788,lVar10 + -0x20,0xd0000000000000a2,
                          (ulong)pcStack_a0 | 0x8000000000000000,&DAT_d000000000000010,
                          (ulong)local_a8 | 0x8000000000000000,0x3a,7);
            (**(code **)(lVar12 + 0x10))(local_80,lVar1,lVar3);
            puVar2 = local_78;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = local_78;
            if (((ulong)puVar2 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_100033f0c(0,*(long *)(local_78 + 0x10) + 1,1);
            }
            puVar11 = local_90;
            uVar15 = *(ulong *)(puVar8 + 0x10);
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_100033f0c(puVar8,uVar15 + 1,1);
            }
            *(ulong *)(puVar8 + 0x10) = uVar15 + 1;
            local_78 = puVar8;
            (*pcVar13)(puVar8 + *(long *)(lVar12 + 0x48) * uVar15 +
                                ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),local_80,
                       lVar3);
            (**(code **)(lVar12 + 8))(local_88,lVar3);
            uVar15 = local_98;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar15 != uVar14);
      _swift_bridgeObjectRelease(uVar4);
    }
  }
  return local_78;
}

