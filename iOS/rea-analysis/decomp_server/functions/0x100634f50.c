// rea decompile_all
// name: FUN_100634f50
// address: 0x100634f50
// body: available
// range: 0x100634f50-0x100635497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100634f50(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong in_x4;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  size_t sVar14;
  long unaff_x21;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_58;
  
  _swift_unknownObjectRetain();
  FUN_100628bc8();
  if ((in_x4 & 1) != 0) {
    bVar1 = *(byte *)(unaff_x20 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(uVar13);
    uVar5 = uVar13;
    if (bVar1 < 4) {
      if (1 < bVar1) {
        FUN_10066ad14(uVar13,uVar15);
        goto LAB_10063502c;
      }
      if (bVar1 != 0) {
        FUN_10067e95c(uVar13,uVar15);
        goto LAB_10063502c;
      }
    }
    else {
      if (bVar1 < 6) {
        if (bVar1 == 4) {
          FUN_10066a9e8();
        }
        else {
          FUN_10066abd0();
        }
      }
      else if (bVar1 == 6) {
        FUN_100668ba0();
      }
      else {
        FUN_100668a40(uVar13,uVar15);
      }
LAB_10063502c:
      _swift_bridgeObjectRelease(uVar13);
    }
    uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
    _swift_bridgeObjectRelease(uVar13);
  }
  local_58 = (undefined *)0x0;
  FUN_1006295a0(0,*(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x10),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  lVar19 = *(long *)(unaff_x20 + 0x48);
  uVar11 = *(ulong *)(unaff_x20 + 0x10);
  uVar18 = *(ulong *)(lVar19 + 0x10);
  if ((long)uVar11 < 1) {
    if (uVar18 != 0 && uVar11 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10063547c);
      (*pcVar8)();
    }
    uVar17 = 0;
  }
  else {
    uVar17 = uVar18;
    if (uVar11 <= uVar18) {
      uVar17 = uVar11;
    }
  }
  _swift_bridgeObjectRetain(lVar19);
  uVar20 = 0;
  while (uVar16 = uVar17, uVar20 != uVar18) {
    uVar17 = *(ulong *)(lVar19 + 0x10);
    if ((long)uVar17 < (long)uVar20 || (long)uVar17 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100635468);
      (*pcVar8)();
    }
    uVar7 = uVar17 - uVar16;
    if ((long)uVar11 < 1) {
      if (0 < (long)uVar7 || (long)uVar7 <= (long)uVar11) goto LAB_1006350ec;
    }
    else if (uVar11 <= uVar7) {
LAB_1006350ec:
      uVar17 = uVar16 + uVar11;
      if (SCARRY8(uVar16,uVar11)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100635470);
        (*pcVar8)();
      }
    }
    if ((long)uVar17 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10063546c);
      (*pcVar8)();
    }
    if ((uVar16 - uVar20 == uVar11) || (uVar20 = uVar16, (in_x4 & 1) != 0)) {
      _swift_beginAccess(unaff_x20 + 0x18,auStack_90,0x21,0);
      lVar12 = *(long *)(unaff_x20 + 0x38);
      FUN_1000ce034(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x30));
      pcVar8 = *(code **)(lVar12 + 0x18);
      lVar12 = lVar19;
      _swift_bridgeObjectRetain();
      (*pcVar8)();
      _swift_endAccess(auStack_90);
      sVar14 = *(size_t *)(lVar12 + 0x10);
      uVar7 = *(ulong *)(local_58 + 0x10);
      uVar20 = uVar7 + sVar14;
      if (SCARRY8(uVar7,sVar14)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100635474);
        (*pcVar8)();
      }
      uVar9 = *(ulong *)(local_58 + 0x18) >> 1;
      sVar10 = sVar14;
      if ((long)uVar9 < (long)uVar20) {
        if (uVar7 <= uVar20) {
          uVar7 = uVar20;
        }
        puVar2 = (undefined *)0x1;
        FUN_1006295a0(1,uVar7,1,local_58);
        uVar7 = *(ulong *)(puVar2 + 0x10);
        uVar9 = *(ulong *)(puVar2 + 0x18) >> 1;
        local_58 = puVar2;
        sVar10 = *(size_t *)(lVar12 + 0x10);
      }
      if (sVar10 == 0) {
        _swift_bridgeObjectRelease(lVar12);
        if (sVar14 != 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100635478);
          (*pcVar8)();
        }
      }
      else {
        if ((long)(uVar9 - uVar7) < (long)sVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100635484);
          (*pcVar8)();
        }
        _memcpy(local_58 + uVar7 + 0x20,(void *)(lVar12 + 0x20),sVar14);
        _swift_bridgeObjectRelease(lVar12);
        if (sVar14 != 0) {
          if (SCARRY8(*(long *)(local_58 + 0x10),sVar14)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100635488);
            (*pcVar8)();
          }
          *(size_t *)(local_58 + 0x10) = *(long *)(local_58 + 0x10) + sVar14;
        }
      }
      _swift_bridgeObjectRelease(lVar19);
      uVar20 = uVar16;
    }
  }
  _swift_bridgeObjectRelease(lVar19);
  if (*(ulong *)(local_58 + 0x10) != 0) {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x48) + 0x10) < *(ulong *)(local_58 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100635480);
      (*pcVar8)();
    }
    FUN_100634d84(0);
  }
  _swift_beginAccess(unaff_x20 + 0x18,auStack_a8,0,0);
  FUN_1000b142c(unaff_x20 + 0x18,auStack_d0);
  puVar2 = &DAT_100ab7f00;
  FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
  puVar3 = &DAT_100ab8378;
  FUN_100004bb4(&DAT_100ab8378,&DAT_100849580);
  puVar4 = &local_100;
  _swift_dynamicCast(puVar4,auStack_d0,puVar2,puVar3,6);
  if (((ulong)puVar4 & 1) == 0) {
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    FUN_10063554c(&local_100);
    return;
  }
  FUN_1000a0074(&local_100,auStack_90);
  if ((in_x4 & 1) == 0) {
    FUN_10003f094(auStack_90);
    return;
  }
  uVar11 = *(long *)(local_58 + 0x10) << 1 | 1;
  FUN_1000ce034(auStack_90,local_78);
  puVar2 = local_58 + 0x20;
  lVar19 = 0;
  puVar3 = local_58;
  (**(code **)(lStack_70 + 0x10))(local_58,puVar2,0,uVar11,local_78,lStack_70);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(local_58);
    FUN_10003f094(auStack_90);
    return;
  }
  _swift_bridgeObjectRelease(local_58);
  if ((uVar11 & 1) == 0) {
LAB_1006353b4:
    thunk_FUN_100629d98(puVar3,puVar2,lVar19,uVar11);
  }
  else {
    uVar5 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar6 = puVar3;
    _swift_unknownObjectRetain_n(puVar3,3);
    _swift_dynamicCastClass();
    if (puVar6 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar3);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar12 = *(long *)(puVar6 + 0x10);
    _swift_release();
    if (SBORROW8(uVar11 >> 1,lVar19)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10063548c);
      (*pcVar8)();
    }
    if (lVar12 != (uVar11 >> 1) - lVar19) {
      _swift_unknownObjectRelease_n(puVar3,2);
      goto LAB_1006353b4;
    }
    puVar2 = puVar3;
    _swift_dynamicCastClass(puVar3,uVar5);
    _swift_unknownObjectRelease_n(puVar3,2);
    if (puVar2 != (undefined *)0x0) goto LAB_100635454;
  }
  _swift_unknownObjectRelease(puVar3);
LAB_100635454:
  FUN_10003f094(auStack_90);
  return;
}

