// rea decompile_all
// name: FUN_100338f28
// address: 0x100338f28
// body: available
// range: 0x100338f28-0x100339307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100338f28(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  code *pcStack_88;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar14 = auStack_c0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100277ad0();
  lVar11 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  lVar8 = *(long *)(lVar2 + -8);
  lVar16 = (long)puVar14 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire17MultipartFormData::bodyPartError,auStack_78,0,0);
  FUN_10033b0b0(unaff_x20 + lVar11,puVar14);
  puVar3 = puVar14;
  (**(code **)(lVar8 + 0x30))(puVar14,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_100040bb4(puVar14,&DAT_100a82460,&DAT_1008175c0);
    pcStack_88 = (code *)0xc000000000000000;
    local_90 = 0;
    pcVar7 = (code *)auStack_a8;
    _swift_beginAccess(unaff_x20 + 0x38,pcVar7,0,0);
    pcVar9 = *(code **)(unaff_x20 + 0x38);
    if ((ulong)pcVar9 >> 0x3e == 0) {
      pcVar4 = *(code **)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pcVar4 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
      if ((long)pcVar9 < 0) {
        pcVar4 = pcVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (pcVar4 != (code *)0x0) {
      if (((ulong)pcVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1003392dc);
          (*pcVar9)();
        }
        lVar11 = *(long *)(pcVar9 + 0x20);
        _swift_retain(lVar11);
      }
      else {
        _swift_bridgeObjectRetain(pcVar9);
        lVar11 = 0;
        pcVar7 = pcVar9;
        FUN_1002d3c7c(0,pcVar9);
        _swift_bridgeObjectRelease(pcVar9);
      }
      *(undefined1 *)(lVar11 + 0x28) = 1;
      _swift_release(lVar11);
    }
    pcVar9 = *(code **)(unaff_x20 + 0x38);
    if ((ulong)pcVar9 >> 0x3e == 0) {
      pcVar4 = *(code **)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pcVar4 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
      if ((long)pcVar9 < 0) {
        pcVar4 = pcVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (pcVar4 != (code *)0x0) {
      pcVar12 = pcVar4 + -1;
      if (SBORROW8((long)pcVar4,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003392d8);
        (*pcVar9)();
      }
      if (((ulong)pcVar9 & 0xc000000000000001) == 0) {
        if ((long)pcVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100339304);
          (*pcVar9)();
        }
        if (*(code **)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10) <= pcVar12) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100339308);
          (*pcVar9)();
        }
        pcVar12 = *(code **)(pcVar9 + (long)pcVar12 * 8 + 0x20);
        _swift_retain(pcVar12);
      }
      else {
        _swift_bridgeObjectRetain(pcVar9);
        pcVar7 = pcVar9;
        FUN_1002d3c7c(pcVar12,pcVar9);
        _swift_bridgeObjectRelease(pcVar9);
      }
      pcVar12[0x29] = (code)0x1;
      _swift_release(pcVar12);
    }
    pcVar4 = *(code **)(unaff_x20 + 0x38);
    if ((ulong)pcVar4 >> 0x3e == 0) {
      pcVar12 = *(code **)(((ulong)pcVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pcVar12 = (code *)((ulong)pcVar4 & 0xffffffffffffff8);
      if ((long)pcVar4 < 0) {
        pcVar12 = pcVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(pcVar4);
    if (pcVar12 == (code *)0x0) {
      lVar11 = 0;
      pcVar10 = (code *)0xc000000000000000;
    }
    else {
      uVar15 = 0;
      local_b0 = (ulong)pcVar4 & 0xc000000000000001;
      local_b8 = (ulong)pcVar4 & 0xffffffffffffff8;
      do {
        if (local_b0 == 0) {
          if (*(ulong *)(local_b8 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100339268);
            (*pcVar9)();
          }
          uVar17 = *(ulong *)(pcVar4 + uVar15 * 8 + 0x20);
          _swift_retain(uVar17);
        }
        else {
          uVar17 = uVar15;
          pcVar7 = pcVar4;
          FUN_1002d3c7c(uVar15,pcVar4);
        }
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10033919c);
          (*pcVar9)();
        }
        pcVar13 = (code *)(uVar15 + 1);
        uVar5 = uVar17;
        FUN_100339a68(uVar17);
        if (unaff_x21 != 0) {
          FUN_100006cdc(local_90,pcStack_88);
          _swift_bridgeObjectRelease(pcVar4);
          _swift_release(uVar17);
          goto LAB_100339238;
        }
        __s10Foundation4DataV6appendyyACF();
        FUN_100006cdc(uVar5,pcVar7);
        _swift_release(uVar17);
        uVar15 = uVar15 + 1;
        lVar11 = local_90;
        pcVar10 = pcStack_88;
        pcVar9 = pcVar4;
      } while (pcVar13 != pcVar12);
    }
    _swift_bridgeObjectRelease(pcVar4);
    unaff_x20 = lVar11;
    pcVar9 = pcVar10;
  }
  else {
    FUN_10026531c(puVar14,lVar16);
    puVar6 = &DAT_100a824a8;
    pcVar9 = FUN_100277ad0;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar2,puVar6,0,0);
    FUN_100082394(lVar16);
    _swift_willThrow();
    FUN_1000d27dc(lVar16,FUN_100277ad0);
  }
LAB_100339238:
  auVar18._8_8_ = pcVar9;
  auVar18._0_8_ = unaff_x20;
  return auVar18;
}

