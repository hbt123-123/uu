// rea decompile_all
// name: FUN_10066f114
// address: 0x10066f114
// body: available
// range: 0x10066f114-0x10066fa7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066f114(undefined1 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined8 uVar29;
  undefined1 *local_88;
  undefined8 uStack_80;
  byte local_78;
  long local_70;
  
  lVar20 = *(long *)(unaff_x20 + 0x68);
  if (lVar20 == 0) {
    uVar17 = 0;
  }
  else {
    lVar28 = *(long *)(unaff_x20 + 0x98);
    if (lVar28 == 0) {
      uVar17 = 4;
    }
    else {
      puVar19 = *(undefined1 **)(unaff_x20 + 0x50);
      uVar21 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar17 = *(undefined1 *)(unaff_x20 + 0x60);
      puVar16 = *(undefined1 **)(unaff_x20 + 0x80);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x88);
      bVar2 = *(byte *)(unaff_x20 + 0x90);
      uVar11 = (ulong)bVar2;
      puVar15 = *(undefined1 **)(unaff_x20 + 0xa0);
      uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
      bVar3 = *(byte *)(unaff_x20 + 0xb0);
      uVar22 = *(undefined8 *)(unaff_x20 + 0xb8);
      param_1 = puVar16;
      uVar9 = uVar24;
      lVar12 = lVar28;
      FUN_100650d48();
      if (lVar12 != 0) {
        uVar14 = *(ulong *)(unaff_x20 + 0x78);
        lVar13 = *(long *)(unaff_x20 + 0x10);
        uVar23 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar4 = *(undefined1 *)(unaff_x20 + 0x20);
        uVar29 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar6 = lVar13;
        uVar8 = uVar23;
        FUN_10065f798(lVar13,uVar23,uVar4,uVar29);
        if (SCARRY8(lVar6,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa58);
          (*pcVar5)();
        }
        if ((long)(lVar6 + 7U) < 8) {
          puVar26 = (undefined1 *)0x0;
          uVar23 = 0xc000000000000000;
        }
        else {
          puVar25 = (undefined1 *)(lVar6 + 7U >> 3);
          puVar26 = puVar25;
          FUN_10009a308();
          local_88 = puVar26;
          uStack_80 = uVar8;
          _swift_bridgeObjectRetain(uVar29);
          FUN_10064c1f8(&local_88,puVar25,lVar13,uVar23,uVar4,uVar29);
          uVar23 = uStack_80;
          puVar26 = local_88;
        }
        puVar7 = &DAT_100ab7e18;
        FUN_100004bb4(&DAT_100ab7e18,&DAT_100848cd0);
        _swift_allocObject();
        *(undefined8 *)(puVar7 + 0x18) = 0x12;
        *(undefined8 *)(puVar7 + 0x10) = 9;
        uVar8 = 0x30307830;
        uVar10 = 0xe400000000000000;
        FUN_100630930();
        thunk_FUN_1006654ec();
        *(undefined8 *)(puVar7 + 0x20) = uVar8;
        *(ulong *)(puVar7 + 0x28) = uVar10 | 0x1000000000000000;
        puVar7[0x30] = 0;
        puVar25 = puVar26;
        FUN_100665cbc(puVar26,uVar23);
        puVar27 = puVar25;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar25);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0x38) = puVar27;
        *(ulong *)(puVar7 + 0x40) = uVar10 | 0x1000000000000000;
        puVar7[0x48] = 0;
        lVar13 = *(long *)(unaff_x20 + 0x30);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar4 = *(undefined1 *)(unaff_x20 + 0x40);
        uVar18 = *(undefined8 *)(unaff_x20 + 0x48);
        lVar6 = lVar13;
        uVar29 = uVar8;
        FUN_10065f798(lVar13,uVar8,uVar4,uVar18);
        if (SCARRY8(lVar6,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa5c);
          (*pcVar5)();
        }
        if ((long)(lVar6 + 7U) < 8) {
          puVar25 = (undefined1 *)0x0;
          uVar8 = 0xc000000000000000;
        }
        else {
          puVar27 = (undefined1 *)(lVar6 + 7U >> 3);
          puVar25 = puVar27;
          FUN_10009a308();
          local_88 = puVar25;
          uStack_80 = uVar29;
          _swift_bridgeObjectRetain(uVar18);
          FUN_10064c1f8(&local_88,puVar27,lVar13,uVar8,uVar4,uVar18);
          puVar25 = local_88;
          uVar8 = uStack_80;
        }
        puVar27 = puVar25;
        FUN_100665cbc(puVar25,uVar8);
        FUN_100006cdc(puVar25,uVar8);
        uVar10 = 3;
        puVar25 = puVar27;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar27);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0x50) = puVar25;
        *(ulong *)(puVar7 + 0x58) = uVar10 | 0x1000000000000000;
        puVar7[0x60] = 0;
        puVar25 = puVar19;
        uVar8 = uVar21;
        FUN_10065f798(puVar19,uVar21,uVar17,lVar20);
        if (SCARRY8((long)puVar25,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa60);
          (*pcVar5)();
        }
        if ((long)(puVar25 + 7) < 8) {
          puVar25 = (undefined1 *)0x0;
          uVar8 = 0xc000000000000000;
        }
        else {
          puVar27 = (undefined1 *)((ulong)(puVar25 + 7) >> 3);
          puVar25 = puVar27;
          FUN_10009a308();
          local_88 = puVar25;
          uStack_80 = uVar8;
          _swift_bridgeObjectRetain(lVar20);
          FUN_10064c1f8(&local_88,puVar27,puVar19,uVar21,uVar17,lVar20);
          puVar25 = local_88;
          uVar8 = uStack_80;
        }
        puVar27 = puVar25;
        FUN_100665cbc(puVar25,uVar8);
        FUN_100006cdc(puVar25,uVar8);
        puVar25 = puVar27;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar27);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0x68) = puVar25;
        *(ulong *)(puVar7 + 0x70) = uVar10 | 0x1000000000000000;
        puVar7[0x78] = 0;
        puVar25 = puVar16;
        uVar8 = uVar24;
        FUN_10065f798(puVar16,uVar24,bVar2,lVar28);
        if (SCARRY8((long)puVar25,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa64);
          (*pcVar5)();
        }
        uVar14 = (long)uVar14 / 2;
        if ((long)(puVar25 + 7) < 8) {
          puVar25 = (undefined1 *)0x0;
          uVar8 = 0xc000000000000000;
        }
        else {
          puVar27 = (undefined1 *)((ulong)(puVar25 + 7) >> 3);
          puVar25 = puVar27;
          FUN_10009a308();
          local_88 = puVar25;
          uStack_80 = uVar8;
          _swift_bridgeObjectRetain(lVar28);
          FUN_10064c1f8(&local_88,puVar27,puVar16,uVar24,bVar2,lVar28);
          puVar25 = local_88;
          uVar8 = uStack_80;
        }
        puVar27 = puVar25;
        FUN_100665cbc(puVar25,uVar8);
        FUN_100006cdc(puVar25,uVar8);
        puVar25 = puVar27;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar27);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0x80) = puVar25;
        *(ulong *)(puVar7 + 0x88) = uVar10 | 0x1000000000000000;
        puVar7[0x90] = 0;
        puVar25 = puVar15;
        uVar8 = uVar1;
        FUN_10065f798(puVar15,uVar1,bVar3,uVar22);
        if (SCARRY8((long)puVar25,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa68);
          (*pcVar5)();
        }
        if ((long)(puVar25 + 7) < 8) {
          puVar25 = (undefined1 *)0x0;
          uVar8 = 0xc000000000000000;
        }
        else {
          puVar27 = (undefined1 *)((ulong)(puVar25 + 7) >> 3);
          puVar25 = puVar27;
          FUN_10009a308();
          local_88 = puVar25;
          uStack_80 = uVar8;
          _swift_bridgeObjectRetain(uVar22);
          FUN_10064c1f8(&local_88,puVar27,puVar15,uVar1,bVar3,uVar22);
          puVar25 = local_88;
          uVar8 = uStack_80;
        }
        puVar27 = puVar25;
        FUN_100665cbc(puVar25,uVar8);
        FUN_100006cdc(puVar25,uVar8);
        puVar25 = puVar27;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar27);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0x98) = puVar25;
        *(ulong *)(puVar7 + 0xa0) = uVar10 | 0x1000000000000000;
        puVar7[0xa8] = 0;
        local_88 = puVar16;
        uStack_80 = uVar24;
        local_78 = bVar2;
        local_70 = lVar28;
        _swift_bridgeObjectRetain(lVar28);
        uVar10 = 1;
        FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
        lVar28 = local_70;
        uVar24 = uStack_80;
        puVar16 = local_88;
        if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa6c);
          (*pcVar5)();
        }
        uVar10 = (ulong)local_78;
        puVar25 = local_88;
        local_88 = puVar19;
        uStack_80 = uVar21;
        local_78 = uVar17;
        local_70 = lVar20;
        FUN_10065fef8(puVar16,uVar24,uVar10,lVar28);
        _swift_bridgeObjectRetain(lVar20);
        lVar13 = lVar28;
        FUN_10064fbe0(puVar16,uVar24,uVar10,lVar28,puVar25);
        _swift_bridgeObjectRelease(lVar28);
        FUN_10064d170(puVar16,uVar24,uVar10,lVar13,puVar25);
        _swift_bridgeObjectRelease(lVar13);
        lVar28 = local_70;
        bVar2 = local_78;
        uVar24 = uStack_80;
        puVar16 = local_88;
        puVar25 = local_88;
        uVar8 = uStack_80;
        FUN_10065f798(local_88,uStack_80,local_78,local_70);
        if (SCARRY8((long)puVar25,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa70);
          (*pcVar5)();
        }
        if ((long)(puVar25 + 7) < 8) {
          _swift_bridgeObjectRelease(lVar28);
          puVar16 = (undefined1 *)0x0;
          uVar24 = 0xc000000000000000;
        }
        else {
          puVar27 = (undefined1 *)((ulong)(puVar25 + 7) >> 3);
          puVar25 = puVar27;
          FUN_10009a308();
          local_88 = puVar25;
          uStack_80 = uVar8;
          FUN_10064c1f8(&local_88,puVar27,puVar16,uVar24,bVar2,lVar28);
          puVar16 = local_88;
          uVar24 = uStack_80;
        }
        puVar25 = puVar16;
        FUN_100665cbc(puVar16,uVar24);
        FUN_100006cdc(puVar16,uVar24);
        puVar16 = puVar25;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar25);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 0xb0) = puVar16;
        *(ulong *)(puVar7 + 0xb8) = uVar10 | 0x1000000000000000;
        puVar7[0xc0] = 0;
        local_88 = puVar15;
        uStack_80 = uVar1;
        local_78 = bVar3;
        local_70 = uVar22;
        _swift_bridgeObjectRetain();
        uVar10 = 1;
        FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
        lVar28 = local_70;
        uVar24 = uStack_80;
        puVar16 = local_88;
        if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa74);
          (*pcVar5)();
        }
        uVar10 = (ulong)local_78;
        puVar15 = local_88;
        local_88 = puVar19;
        uStack_80 = uVar21;
        local_78 = uVar17;
        local_70 = lVar20;
        FUN_10065fef8(puVar16,uVar24,uVar10,lVar28);
        _swift_bridgeObjectRetain(lVar20);
        lVar20 = lVar28;
        FUN_10064fbe0(puVar16,uVar24,uVar10,lVar28,puVar15);
        _swift_bridgeObjectRelease(lVar28);
        FUN_10064d170(puVar16,uVar24,uVar10,lVar20,puVar15);
        _swift_bridgeObjectRelease(lVar20);
        lVar20 = local_70;
        bVar2 = local_78;
        uVar21 = uStack_80;
        puVar19 = local_88;
        puVar16 = local_88;
        uVar24 = uStack_80;
        FUN_10065f798(local_88,uStack_80,local_78,local_70);
        if (SCARRY8((long)puVar16,7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa78);
          (*pcVar5)();
        }
        if ((long)(puVar16 + 7) < 8) {
          _swift_bridgeObjectRelease(lVar20);
          puVar19 = (undefined1 *)0x0;
          uVar21 = 0xc000000000000000;
        }
        else {
          puVar15 = (undefined1 *)((ulong)(puVar16 + 7) >> 3);
          puVar16 = puVar15;
          FUN_10009a308();
          local_88 = puVar16;
          uStack_80 = uVar24;
          FUN_10064c1f8(&local_88,puVar15,puVar19,uVar21,bVar2,lVar20);
          puVar19 = local_88;
          uVar21 = uStack_80;
        }
        puVar16 = puVar19;
        FUN_100665cbc(puVar19,uVar21);
        FUN_100006cdc(puVar19,uVar21);
        puVar19 = puVar16;
        uVar10 = uVar14;
        FUN_100669664();
        _swift_bridgeObjectRelease(puVar16);
        thunk_FUN_1006654ec();
        *(undefined1 **)(puVar7 + 200) = puVar19;
        *(ulong *)(puVar7 + 0xd0) = uVar10 | 0x1000000000000000;
        puVar7[0xd8] = 0;
        puVar19 = param_1;
        uVar21 = uVar9;
        FUN_10065f798(param_1,uVar9,uVar11,lVar12);
        if (!SCARRY8((long)puVar19,7)) {
          if ((long)(puVar19 + 7) < 8) {
            _swift_bridgeObjectRelease(lVar12);
            puVar19 = (undefined1 *)0x0;
            uVar21 = 0xc000000000000000;
          }
          else {
            puVar16 = (undefined1 *)((ulong)(puVar19 + 7) >> 3);
            puVar19 = puVar16;
            FUN_10009a308();
            local_88 = puVar19;
            uStack_80 = uVar21;
            FUN_10064c1f8(&local_88,puVar16,param_1,uVar9,uVar11,lVar12);
            puVar19 = local_88;
            uVar21 = uStack_80;
          }
          puVar16 = puVar19;
          FUN_100665cbc(puVar19,uVar21);
          FUN_100006cdc(puVar19,uVar21);
          puVar19 = puVar16;
          FUN_100669664();
          _swift_bridgeObjectRelease(puVar16);
          thunk_FUN_1006654ec();
          *(undefined1 **)(puVar7 + 0xe0) = puVar19;
          *(ulong *)(puVar7 + 0xe8) = uVar14 | 0x1000000000000000;
          puVar7[0xf0] = 0;
          FUN_10062f234(puVar7,0,0);
          _swift_bridgeObjectRelease(puVar7);
          FUN_100006cdc(puVar26,uVar23);
          return;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10066fa7c);
        (*pcVar5)();
      }
      uVar17 = 5;
    }
  }
  FUN_10066cb9c();
  _swift_allocError(&DAT_1009e5530,param_1,0,0);
  *param_1 = uVar17;
  _swift_willThrow();
  return;
}

