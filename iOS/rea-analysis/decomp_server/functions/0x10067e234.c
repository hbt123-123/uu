// rea decompile_all
// name: FUN_10067e234
// address: 0x10067e234
// body: available
// range: 0x10067e234-0x10067e83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10067e234(long param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  size_t sVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long local_68;
  
  if (*(long *)(param_1 + 0x10) != 0x20) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e838);
    (*pcVar2)();
  }
  if (*(long *)(param_2 + 0x10) != 0x10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e83c);
    (*pcVar2)();
  }
  lVar4 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss6UInt32VN_100995dc0);
  *(undefined8 *)(lVar4 + 0x10) = 0x10;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0x6b20657479622d32;
  *(undefined8 *)(lVar4 + 0x20) = 0x3320646e61707865;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  lVar12 = 0x30;
  uVar14 = 4;
  do {
    if (0x20 < lVar12 - 0x2cU) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e808);
      (*pcVar2)();
    }
    lVar6 = param_1;
    _swift_bridgeObjectRetain();
    uVar3 = (uint)lVar6;
    FUN_10067c25c();
    if (*(ulong *)(lVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e80c);
      (*pcVar2)();
    }
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(lVar4 + lVar12) = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar12 = lVar12 + 4;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0xc);
  lVar12 = param_2;
  _swift_bridgeObjectRetain();
  uVar3 = (uint)lVar12;
  FUN_10067c25c();
  if (0xc < *(ulong *)(lVar4 + 0x10)) {
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(lVar4 + 0x50) = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar12 = param_2;
    _swift_bridgeObjectRetain();
    uVar3 = (uint)lVar12;
    FUN_10067c25c();
    if (0xd < *(ulong *)(lVar4 + 0x10)) {
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *(uint *)(lVar4 + 0x54) = uVar3 >> 0x10 | uVar3 << 0x10;
      lVar12 = param_2;
      _swift_bridgeObjectRetain();
      uVar3 = (uint)lVar12;
      FUN_10067c25c();
      if (0xe < *(ulong *)(lVar4 + 0x10)) {
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        *(uint *)(lVar4 + 0x58) = uVar3 >> 0x10 | uVar3 << 0x10;
        _swift_bridgeObjectRetain();
        uVar3 = (uint)param_2;
        FUN_10067c25c();
        if (0xf < *(ulong *)(lVar4 + 0x10)) {
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          *(uint *)(lVar4 + 0x5c) = uVar3 >> 0x10 | uVar3 << 0x10;
          local_68 = lVar4;
          FUN_10067e0f8(&local_68,0,4,8,0xc);
          lVar12 = 9;
          FUN_10067e0f8(&local_68,1,5,9,0xd);
          FUN_10067e0f8(&local_68,2,6,10,0xe);
          FUN_10067e0f8(&local_68,3,7,0xb,0xf);
          FUN_10067e0f8(&local_68,0,5,10,0xf);
          FUN_10067e0f8(&local_68,1,6,0xb,0xc);
          FUN_10067e0f8(&local_68,2,7,8,0xd);
          FUN_10067e0f8(&local_68,3,4,9,0xe);
          do {
            FUN_10067e0f8(&local_68,0,4,8,0xc);
            FUN_10067e0f8(&local_68,1,5,9,0xd);
            FUN_10067e0f8(&local_68,2,6,10,0xe);
            FUN_10067e0f8(&local_68,3,7,0xb,0xf);
            FUN_10067e0f8(&local_68,0,5,10,0xf);
            FUN_10067e0f8(&local_68,1,6,0xb,0xc);
            FUN_10067e0f8(&local_68,2,7,8,0xd);
            FUN_10067e0f8(&local_68,3,4,9,0xe);
            lVar4 = local_68;
            puVar8 = PTR___ss5UInt8VN_100995d40;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          if (*(ulong *)(local_68 + 0x10) < 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e840);
            (*pcVar2)();
          }
          lVar12 = 0x20;
          puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
          do {
            uVar3 = (*(uint *)(lVar4 + lVar12) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar4 + lVar12) & 0xff00ff) << 8;
            puVar5 = (uint *)0x4;
            _swift_slowAlloc(4,0xffffffffffffffff);
            *puVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
            lVar6 = 4;
            __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(4,puVar8);
            *(undefined8 *)(lVar6 + 0x10) = 4;
            puVar13 = (undefined4 *)(lVar6 + 0x20);
            *puVar13 = 0;
            *(char *)(lVar6 + 0x23) = (char)*puVar5;
            *(undefined1 *)(lVar6 + 0x22) = *(undefined1 *)((long)puVar5 + 1);
            *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)((long)puVar5 + 2);
            *(undefined1 *)puVar13 = *(undefined1 *)((long)puVar5 + 3);
            _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
            sVar11 = *(size_t *)(lVar6 + 0x10);
            lVar15 = *(long *)(puVar10 + 0x10);
            if (SCARRY8(lVar15,sVar11)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e810);
              (*pcVar2)();
            }
            puVar7 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((int)puVar7 == 0) ||
               ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < (long)(lVar15 + sVar11))) {
              FUN_1006295a0();
              puVar10 = puVar7;
              if (*(long *)(lVar6 + 0x10) != 0) goto LAB_10067e654;
LAB_10067e580:
              _swift_bridgeObjectRelease(lVar6);
              puVar7 = puVar10;
              if (sVar11 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e814);
                (*pcVar2)();
              }
            }
            else {
              puVar7 = puVar10;
              if (*(long *)(lVar6 + 0x10) == 0) goto LAB_10067e580;
LAB_10067e654:
              if ((long)((*(ulong *)(puVar7 + 0x18) >> 1) - *(long *)(puVar7 + 0x10)) < (long)sVar11
                 ) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e824);
                (*pcVar2)();
              }
              _memcpy(puVar7 + *(long *)(puVar7 + 0x10) + 0x20,puVar13,sVar11);
              _swift_bridgeObjectRelease(lVar6);
              if (sVar11 != 0) {
                if (SCARRY8(*(long *)(puVar7 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e82c);
                  (*pcVar2)();
                }
                *(size_t *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + sVar11;
              }
            }
            puVar1 = PTR___ss5UInt8VN_100995d40;
            lVar12 = lVar12 + 4;
            puVar10 = puVar7;
          } while (lVar12 != 0x30);
          lVar12 = 0x14;
          do {
            if (*(ulong *)(lVar4 + 0x10) <= lVar12 - 8U) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e818);
              (*pcVar2)();
            }
            uVar3 = *(uint *)(lVar4 + lVar12 * 4);
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            puVar5 = (uint *)0x4;
            _swift_slowAlloc(4,0xffffffffffffffff);
            *puVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
            lVar6 = 4;
            __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(4,puVar1);
            *(undefined8 *)(lVar6 + 0x10) = 4;
            puVar13 = (undefined4 *)(lVar6 + 0x20);
            *puVar13 = 0;
            *(char *)(lVar6 + 0x23) = (char)*puVar5;
            *(undefined1 *)(lVar6 + 0x22) = *(undefined1 *)((long)puVar5 + 1);
            *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)((long)puVar5 + 2);
            *(undefined1 *)puVar13 = *(undefined1 *)((long)puVar5 + 3);
            _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
            sVar11 = *(size_t *)(lVar6 + 0x10);
            uVar9 = *(ulong *)(puVar7 + 0x10);
            uVar14 = uVar9 + sVar11;
            if (SCARRY8(uVar9,sVar11)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e81c);
              (*pcVar2)();
            }
            if ((long)(*(ulong *)(puVar7 + 0x18) >> 1) < (long)uVar14) {
              if (uVar9 <= uVar14) {
                uVar9 = uVar14;
              }
              puVar8 = (undefined *)0x1;
              FUN_1006295a0(1,uVar9,1,puVar7);
              uVar9 = *(ulong *)(puVar8 + 0x10);
              if (*(long *)(lVar6 + 0x10) == 0) goto LAB_10067e6b0;
LAB_10067e764:
              if ((long)((*(ulong *)(puVar8 + 0x18) >> 1) - uVar9) < (long)sVar11) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e828);
                (*pcVar2)();
              }
              _memcpy(puVar8 + uVar9 + 0x20,puVar13,sVar11);
              _swift_bridgeObjectRelease(lVar6);
              if (sVar11 != 0) {
                if (SCARRY8(*(long *)(puVar8 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e830);
                  (*pcVar2)();
                }
                *(size_t *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + sVar11;
              }
            }
            else {
              puVar8 = puVar7;
              if (sVar11 != 0) goto LAB_10067e764;
LAB_10067e6b0:
              _swift_bridgeObjectRelease(lVar6);
              if (sVar11 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e820);
                (*pcVar2)();
              }
            }
            lVar12 = lVar12 + 1;
            puVar7 = puVar8;
            if (lVar12 == 0x18) {
              _swift_bridgeObjectRelease(lVar4);
              return puVar8;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e834);
  (*pcVar2)();
}

