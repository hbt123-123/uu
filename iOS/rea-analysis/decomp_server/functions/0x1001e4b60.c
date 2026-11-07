// rea decompile_all
// name: FUN_1001e4b60
// address: 0x1001e4b60
// body: available
// range: 0x1001e4b60-0x1001e4f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001e4b60(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar8 = _TtC14UURemoteServer15TerminalManager::sessions;
  ppuVar4 = &local_a0;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_78,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  puVar6 = *(undefined **)(lVar8 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar6 != (undefined *)0x0) {
    puVar9 = puVar6;
    FUN_10006d7bc(puVar6,0);
    FUN_10007451c(&local_a0,puVar9 + 0x20,puVar6,lVar8);
    puVar7 = local_a0;
    _swift_bridgeObjectRetain(lVar8);
    FUN_10003f638(puVar7,uStack_98,local_90,uStack_88,local_80);
    if (ppuVar4 != (undefined **)puVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e4f04);
      (*pcVar3)();
    }
  }
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar6 = puVar9;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    puVar6 = *(undefined **)(puVar9 + 0x10);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar6 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar9 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e4eac);
            (*pcVar3)();
          }
          puVar12 = *(undefined **)(puVar9 + (long)puVar10 * 8 + 0x20);
          _swift_retain(puVar12);
        }
        else {
          puVar12 = puVar10;
          FUN_10016a520(puVar10,puVar9);
        }
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e4ea8);
          (*pcVar3)();
        }
        puVar11 = puVar10 + 1;
        if (*(long *)(puVar12 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0) break;
LAB_1001e4c80:
        _swift_release(puVar12);
LAB_1001e4c88:
        puVar10 = puVar10 + 1;
        if (puVar11 == puVar6) goto LAB_1001e4da0;
      }
      if (puVar12[0x14] != '\0') {
        if (puVar12[0x14] == '\x01') {
          uVar13 = 0xe800000000000000;
          uVar5 = 0x6465686361746564;
          goto LAB_1001e4c54;
        }
        _swift_release(puVar12);
        _swift_bridgeObjectRelease(0xe600000000000000);
        goto LAB_1001e4c88;
      }
      uVar13 = 0xe700000000000000;
      uVar5 = 0x676e696e6e7572;
LAB_1001e4c54:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,uVar13,0x646574697865,0xe600000000000000,0);
      _swift_bridgeObjectRelease(uVar13);
      if ((uVar5 & 1) != 0) goto LAB_1001e4c80;
      puVar10 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      local_a0 = puVar7;
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10006fec0(0,*(long *)(puVar7 + 0x10) + 1,1);
      }
      uVar5 = *(ulong *)(local_a0 + 0x10);
      if (*(ulong *)(local_a0 + 0x18) >> 1 <= uVar5) {
        FUN_10006fec0(1 < *(ulong *)(local_a0 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(local_a0 + 0x10) = uVar5 + 1;
      *(undefined **)(local_a0 + uVar5 * 8 + 0x20) = puVar12;
      puVar7 = local_a0;
      puVar10 = puVar11;
    } while (puVar11 != puVar6);
  }
LAB_1001e4da0:
  _swift_release(puVar9);
  if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
    puVar9 = puVar7;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    puVar9 = *(undefined **)(puVar7 + 0x10);
  }
  if (puVar9 == (undefined *)0x0) {
    _swift_release(puVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fea4(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e4f08);
      (*pcVar3)();
    }
    puVar10 = (undefined *)0x0;
    do {
      puVar6 = local_a0;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(puVar7 + (long)puVar10 * 8 + 0x20);
        _swift_retain(puVar12);
      }
      else {
        puVar12 = puVar10;
        FUN_10016a520(puVar10,puVar7);
      }
      uVar2 = *(undefined4 *)(puVar12 + 0x10);
      uVar13 = *(undefined8 *)(puVar12 + _TtC14UURemoteServer15TerminalSession::name);
      uVar1 = *(undefined8 *)((long)(puVar12 + _TtC14UURemoteServer15TerminalSession::name) + 8);
      _swift_bridgeObjectRetain(uVar1);
      _swift_release(puVar12);
      uVar5 = *(ulong *)(puVar6 + 0x10);
      local_a0 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar5) {
        FUN_10006fea4(1 < *(ulong *)(puVar6 + 0x18),uVar5 + 1,1);
      }
      puVar6 = local_a0;
      *(ulong *)(local_a0 + 0x10) = uVar5 + 1;
      *(undefined4 *)(local_a0 + uVar5 * 0x18 + 0x20) = uVar2;
      puVar10 = puVar10 + 1;
      *(undefined8 *)(local_a0 + uVar5 * 0x18 + 0x28) = uVar13;
      *(undefined8 *)(local_a0 + uVar5 * 0x18 + 0x30) = uVar1;
    } while (puVar9 != puVar10);
    _swift_release(puVar7);
  }
  return puVar6;
}

