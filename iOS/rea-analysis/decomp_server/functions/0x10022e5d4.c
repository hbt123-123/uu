// rea decompile_all
// name: FUN_10022e5d4
// address: 0x10022e5d4
// body: available
// range: 0x10022e5d4-0x10022ebd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010022ea68) */
/* WARNING: Removing unreachable block (ram,0x00010022eaa0) */
/* WARNING: Removing unreachable block (ram,0x00010022eb80) */
/* WARNING: Removing unreachable block (ram,0x00010022eb88) */
/* WARNING: Removing unreachable block (ram,0x00010022eaac) */
/* WARNING: Removing unreachable block (ram,0x00010022eab8) */
/* WARNING: Removing unreachable block (ram,0x00010022ebd4) */
/* WARNING: Removing unreachable block (ram,0x00010022eac0) */
/* WARNING: Removing unreachable block (ram,0x00010022eac8) */
/* WARNING: Removing unreachable block (ram,0x00010022eae0) */
/* WARNING: Removing unreachable block (ram,0x00010022eb94) */

void FUN_10022e5d4(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *local_b0 [4];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_90,1,0);
    uVar14 = *(ulong *)(param_1 + 0x10);
    uVar12 = uVar14 & 0xffffffffffffff8;
    if (uVar14 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar15 = uVar12;
      if ((long)uVar14 < 0) {
        uVar15 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(uVar14);
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar15 != 0) {
      uVar7 = 0;
      do {
        while( true ) {
          if ((uVar14 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar12 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10022e918);
              (*pcVar2)();
            }
            uVar3 = *(ulong *)(uVar14 + uVar7 * 8 + 0x20);
          }
          else {
            uVar3 = uVar7;
            FUN_10016a54c(uVar7,uVar14,FUN_100232e2c,0x746e657645,0xe500000000000000);
          }
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10022e914);
            (*pcVar2)();
          }
          uVar16 = uVar7 + 1;
          if (*(char *)(uVar3 + FCountEvent::status) == '\x02') break;
          puVar5 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          local_b0[0] = puVar13;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100230a18(0,*(long *)(puVar13 + 0x10) + 1,1);
          }
          uVar7 = *(ulong *)(local_b0[0] + 0x10);
          if (*(ulong *)(local_b0[0] + 0x18) >> 1 <= uVar7) {
            FUN_100230a18(1 < *(ulong *)(local_b0[0] + 0x18),uVar7 + 1,1);
          }
          *(ulong *)(local_b0[0] + 0x10) = uVar7 + 1;
          *(ulong *)(local_b0[0] + uVar7 * 8 + 0x20) = uVar3;
          puVar13 = local_b0[0];
          uVar7 = uVar16;
          if (uVar16 == uVar15) goto LAB_10022e77c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar16 != uVar15);
    }
LAB_10022e77c:
    _swift_bridgeObjectRelease(uVar14);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar13;
    _swift_bridgeObjectRelease(uVar4);
    uVar12 = *(ulong *)(param_1 + 0x10);
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12 & 0xffffffffffffff8;
      if ((long)uVar12 < 0) {
        uVar14 = uVar12;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if ((long)uVar14 < 1) {
      _objc_msgSend(*(ID *)(param_1 + 0x18),"invalidate");
      *(undefined8 *)(param_1 + 0x18) = 0;
      _swift_release(param_1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x10);
      if (uVar12 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        uVar14 = uVar12 & 0xffffffffffffff8;
        if ((long)uVar12 < 0) {
          uVar14 = uVar12;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      PTR___swiftEmptyArrayStorage_100995ea0 = puVar13;
      if (uVar14 != 0) {
        if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10022eb80);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain(uVar12);
        uVar15 = 0;
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        do {
          if ((uVar12 & 0xc000000000000001) == 0) {
            uVar7 = *(ulong *)(uVar12 + uVar15 * 8 + 0x20);
          }
          else {
            uVar7 = uVar15;
            FUN_10016a54c(uVar15,uVar12,FUN_100232e2c,0x746e657645,0xe500000000000000);
          }
          lVar1 = FCountEvent::status;
          if (*(char *)(uVar7 + FCountEvent::status) == '\x03' ||
              *(char *)(uVar7 + FCountEvent::status) == '\0') {
            puVar5 = puVar13;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)puVar5 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0))
            {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((long)puVar13 < 0) {
                  puVar5 = puVar13;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_1002422b8(0,puVar5 + 1,1,puVar13);
              puVar13 = puVar6;
            }
            uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
            uVar3 = *(ulong *)(uVar16 + 0x10);
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar3) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_1002422b8(puVar5,uVar3 + 1,1,puVar13);
              uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
              puVar13 = puVar5;
            }
            *(ulong *)(uVar16 + 0x10) = uVar3 + 1;
            *(ulong *)(uVar16 + uVar3 * 8 + 0x20) = uVar7;
            *(undefined1 *)(uVar7 + lVar1) = 1;
          }
          uVar15 = uVar15 + 1;
        } while (uVar14 != uVar15);
        _swift_bridgeObjectRelease(uVar12);
      }
      FUN_10023a78c(0);
      lVar1 = DAT_100a7dde0;
      _swift_bridgeObjectRetain(puVar13);
      if (lVar1 != -1) {
        _swift_once(&DAT_100a7dde0,FUN_100223714);
      }
      uVar4 = DAT_100b362e0;
      puVar5 = &DAT_1009a65b0;
      _swift_allocObject(&DAT_1009a65b0,0x18,7);
      _swift_weakInit(puVar5 + 0x10,param_1);
      puVar6 = &DAT_1009a6650;
      _swift_allocObject(&DAT_1009a6650,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + 0x18) = puVar13;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      _swift_bridgeObjectRetain(puVar13);
      puVar8 = puVar5;
      _swift_retain(puVar5);
      __s10Foundation11JSONEncoderCACycfc();
      puVar9 = &DAT_100a7f150;
      local_b0[0] = puVar13;
      FUN_100004bb4(&DAT_100a7f150,&DAT_100813c90);
      puVar10 = puVar9;
      FUN_1002315e8();
      ppuVar11 = local_b0;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar11,puVar9,puVar10);
      _swift_bridgeObjectRelease_n(puVar13,2);
      _swift_release(puVar8);
      FUN_100238588(ppuVar11,puVar9,uVar4,FUN_1002315e0,puVar6);
      _swift_release(puVar6);
      _swift_release(param_1);
      FUN_100006cdc(ppuVar11,puVar9);
      _swift_release(puVar5);
    }
  }
  return;
}

