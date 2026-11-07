// rea decompile_all
// name: FUN_10067a5ac
// address: 0x10067a5ac
// body: available
// range: 0x10067a5ac-0x10067ab77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined *
FUN_10067a5ac(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  size_t sVar15;
  long unaff_x21;
  ulong uVar16;
  ulong uVar17;
  long local_138;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  uVar14 = param_4 >> 1;
  if ((param_4 & 1) == 0) {
LAB_10067a5e8:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    local_58 = param_1;
  }
  else {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(uVar14,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab50);
      (*pcVar2)();
    }
    if (lVar9 != uVar14 - param_3) {
      _swift_unknownObjectRelease();
      goto LAB_10067a5e8;
    }
    local_58 = param_1;
    _swift_dynamicCastClass(param_1,uVar8);
    if (local_58 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  if ((param_5 & 1) != 0) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x40);
    lVar9 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_128,0,0);
    if (SBORROW8(lVar9,*(long *)(unaff_x20 + 0x48))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab54);
      (*pcVar2)();
    }
    puVar3 = local_58;
    FUN_10066add0(local_58,lVar9 - *(long *)(unaff_x20 + 0x48),uVar1);
    _swift_release(local_58);
    local_58 = puVar3;
  }
  if (SBORROW8(uVar14,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab44);
    (*pcVar2)();
  }
  puVar3 = (undefined *)0x0;
  FUN_1006295a0(0,uVar14 - param_3 & ((long)(uVar14 - param_3) >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  uVar17 = *(ulong *)(unaff_x20 + 0x10);
  uVar10 = *(ulong *)(local_58 + 0x10);
  uVar14 = uVar17;
  if ((long)uVar17 < 1) {
    if (uVar10 != 0) {
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab48);
        (*pcVar2)();
      }
      goto LAB_10067a734;
    }
  }
  else if ((uVar17 <= uVar10) || (uVar14 = uVar10, uVar10 != 0)) {
LAB_10067a734:
    local_138 = unaff_x20 + 0x18;
    puVar5 = puVar3;
    uVar11 = 0;
    do {
      uVar16 = uVar14;
      if (((long)uVar10 < (long)uVar11) || (uVar11 = uVar10 - uVar16, (long)uVar10 < (long)uVar16))
      {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab28);
        (*pcVar2)();
      }
      uVar14 = uVar10;
      if ((long)uVar17 < 1) {
        if ((0 < (long)uVar11) || ((long)uVar11 <= (long)uVar17)) goto LAB_10067a7a8;
      }
      else if (uVar17 <= uVar11) {
LAB_10067a7a8:
        uVar14 = uVar16 + uVar17;
        if (SCARRY8(uVar16,uVar17)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab3c);
          (*pcVar2)();
        }
      }
      if ((long)uVar14 < (long)uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab2c);
        (*pcVar2)();
      }
      _swift_beginAccess(local_138,auStack_a8,0x21,0);
      lVar9 = *(long *)(unaff_x20 + 0x38);
      FUN_1000ce034(local_138,*(undefined8 *)(unaff_x20 + 0x30));
      pcVar2 = *(code **)(lVar9 + 0x18);
      puVar4 = local_58;
      _swift_bridgeObjectRetain();
      (*pcVar2)();
      _swift_endAccess(auStack_a8);
      sVar15 = *(size_t *)(puVar4 + 0x10);
      uVar11 = *(ulong *)(puVar5 + 0x10);
      uVar10 = uVar11 + sVar15;
      if (SCARRY8(uVar11,sVar15)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab30);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(puVar5 + 0x18) >> 1;
      if ((long)uVar13 < (long)uVar10) {
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        puVar3 = (undefined *)0x1;
        FUN_1006295a0(1,uVar11,1,puVar5);
        uVar11 = *(ulong *)(puVar3 + 0x10);
        uVar13 = *(ulong *)(puVar3 + 0x18) >> 1;
        if (*(long *)(puVar4 + 0x10) != 0) goto LAB_10067a854;
LAB_10067a740:
        _swift_bridgeObjectRelease(puVar4);
        if (sVar15 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab34);
          (*pcVar2)();
        }
      }
      else {
        puVar3 = puVar5;
        if (sVar15 == 0) goto LAB_10067a740;
LAB_10067a854:
        if ((long)(uVar13 - uVar11) < (long)sVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab38);
          (*pcVar2)();
        }
        _memcpy(puVar3 + uVar11 + 0x20,puVar4 + 0x20,sVar15);
        _swift_bridgeObjectRelease(puVar4);
        if (sVar15 != 0) {
          if (SCARRY8(*(long *)(puVar3 + 0x10),sVar15)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab40);
            (*pcVar2)();
          }
          *(size_t *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + sVar15;
        }
      }
      _swift_bridgeObjectRelease(local_58);
      uVar10 = *(ulong *)(local_58 + 0x10);
      puVar5 = puVar3;
      uVar11 = uVar16;
    } while (uVar16 != uVar10);
    param_5 = param_5 & 0xffffffff;
  }
  local_138 = unaff_x20 + 0x18;
  _swift_bridgeObjectRelease(local_58);
  if (*(char *)(unaff_x20 + 0x40) != '\0') {
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab4c);
      (*pcVar2)();
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    lVar9 = 0;
    if (uVar17 != 0) {
      lVar9 = lVar12 / (long)uVar17;
    }
    _swift_beginAccess(unaff_x20 + 0x48,auStack_80,1,0);
    *(ulong *)(unaff_x20 + 0x48) = lVar12 - lVar9 * uVar17;
  }
  _swift_beginAccess(local_138,auStack_c0,0,0);
  FUN_1000b142c(local_138,auStack_e8);
  puVar5 = &DAT_100ab7f00;
  FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
  puVar4 = &DAT_100ab8378;
  FUN_100004bb4(&DAT_100ab8378,&DAT_100849580);
  puVar6 = &local_110;
  _swift_dynamicCast(puVar6,auStack_e8,puVar5,puVar4,6);
  if (((ulong)puVar6 & 1) == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_10063554c(&local_110);
    return puVar3;
  }
  FUN_1000a0074(&local_110,auStack_a8);
  if ((param_5 & 1) == 0) {
    FUN_10003f094(auStack_a8);
    return puVar3;
  }
  uVar14 = *(long *)(puVar3 + 0x10) << 1 | 1;
  FUN_1000ce034(auStack_a8,local_90);
  puVar5 = puVar3 + 0x20;
  lVar9 = 0;
  puVar4 = puVar3;
  (**(code **)(lStack_88 + 0x10))(puVar3,puVar5,0,uVar14,local_90,lStack_88);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(puVar3);
    FUN_10003f094(auStack_a8);
    return puVar3;
  }
  _swift_bridgeObjectRelease(puVar3);
  if ((uVar14 & 1) == 0) {
LAB_10067aa78:
    puVar7 = puVar4;
    thunk_FUN_100629d98(puVar4,puVar5,lVar9,uVar14);
  }
  else {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = puVar4;
    _swift_unknownObjectRetain_n(puVar4,3);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar4);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(uVar14 >> 1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ab6c);
      (*pcVar2)();
    }
    if (lVar12 != (uVar14 >> 1) - lVar9) {
      _swift_unknownObjectRelease_n(puVar4,2);
      goto LAB_10067aa78;
    }
    puVar3 = puVar4;
    _swift_dynamicCastClass(puVar4,uVar8);
    _swift_unknownObjectRelease_n(puVar4,2);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar3 != (undefined *)0x0) goto LAB_10067ab14;
  }
  _swift_unknownObjectRelease(puVar4);
  puVar3 = puVar7;
LAB_10067ab14:
  FUN_10003f094(auStack_a8);
  return puVar3;
}

