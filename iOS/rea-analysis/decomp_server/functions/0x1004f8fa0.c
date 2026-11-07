// rea decompile_all
// name: FUN_1004f8fa0
// address: 0x1004f8fa0
// body: available
// range: 0x1004f8fa0-0x1004f96fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f95ac) */
/* WARNING: Removing unreachable block (ram,0x0001004f9434) */
/* WARNING: Removing unreachable block (ram,0x0001004f941c) */

void FUN_1004f8fa0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long unaff_x21;
  long lVar14;
  bool bVar15;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined1 local_a0;
  undefined1 local_88;
  undefined1 auStack_78 [24];
  undefined8 *local_58;
  
  puVar5 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar13 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f9698);
      (*pcVar4)();
    }
    param_1[0xb] = lVar13;
    if (lVar13 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
      puVar5[1] = 0x13;
      *puVar5 = 0;
      _swift_willThrow();
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
      _swift_bridgeObjectRelease(uVar6);
      puStack_a8 = (undefined8 *)0xc000000000000000;
      local_b0 = (undefined8 *)0x0;
      local_88 = 0;
      _swift_beginAccess(unaff_x20 + 0x20,&local_c8,0x21,0);
      puVar5 = (undefined8 *)(unaff_x20 + 0x20);
      FUN_1004f99e8(&local_b0);
      puVar7 = &local_c8;
      _swift_endAccess();
      FUN_10053320c();
      if (((ulong)puVar7 & 1) == 0) {
        uVar3 = 0;
        local_58 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
        bVar15 = true;
LAB_1004f90d8:
        FUN_100535660();
        lVar13 = param_1[1];
        lVar12 = param_1[2];
        lVar14 = *param_1;
        puVar8 = puVar7;
        if (lVar14 == 0) {
          if (lVar12 != 0) goto LAB_1004f9100;
        }
        else {
          if (lVar12 == lVar13 - lVar14) goto LAB_1004f93c0;
LAB_1004f9100:
          if ((*(char *)(lVar14 + lVar12) != '\"') ||
             (puVar8 = puVar5, FUN_100535e6c(), puVar8 == (undefined8 *)0x0)) {
LAB_1004f93b8:
            uVar6 = 5;
            goto LAB_1004f93c4;
          }
          puVar9 = puVar8;
          FUN_1005363c8(0x3a);
          if (((puVar7 != (undefined8 *)0x6570797440) ||
              (puVar8 != (undefined8 *)0xe500000000000000)) &&
             (puVar5 = puVar7, puVar9 = puVar8,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (puVar7,puVar8,0x6570797440,0xe500000000000000,0), ((ulong)puVar5 & 1) == 0))
          {
            if (!bVar15) {
              puVar5 = local_58;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar9 = local_58;
              if (((ulong)puVar5 & 1) == 0) {
                puVar9 = (undefined8 *)0x0;
                FUN_100506f84(0,local_58[2] + 1,1,local_58);
              }
              uVar1 = puVar9[2];
              local_58 = puVar9;
              if ((ulong)puVar9[3] >> 1 <= uVar1) {
                local_58 = (undefined8 *)(ulong)(1 < (ulong)puVar9[3]);
                FUN_100506f84(local_58,uVar1 + 1,1,puVar9);
              }
              local_58[2] = uVar1 + 1;
              *(undefined1 *)((long)local_58 + uVar1 + 0x20) = uVar3;
            }
            puVar5 = local_58;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = local_58;
            if (((ulong)puVar5 & 1) == 0) {
              puVar9 = (undefined8 *)0x0;
              FUN_100506f84(0,local_58[2] + 1,1,local_58);
            }
            uVar1 = puVar9[2];
            local_58 = puVar9;
            if ((ulong)puVar9[3] >> 1 <= uVar1) {
              local_58 = (undefined8 *)(ulong)(1 < (ulong)puVar9[3]);
              FUN_100506f84(local_58,uVar1 + 1,1,puVar9);
            }
            local_58[2] = uVar1 + 1;
            *(undefined1 *)((long)local_58 + uVar1 + 0x20) = 0x22;
            _swift_bridgeObjectRetain(puVar8);
            FUN_1004fa030(puVar7,puVar8);
            FUN_1004f9e80("\":",2);
            _swift_bridgeObjectRelease(puVar8);
            FUN_100535660();
            lVar13 = param_1[2];
            FUN_100536528();
            lVar14 = *param_1;
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f96a8);
              (*pcVar4)();
            }
            puVar5 = (undefined8 *)(param_1[2] - lVar13);
            if (SBORROW8(param_1[2],lVar13)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f969c);
              (*pcVar4)();
            }
            puVar7 = (undefined8 *)(lVar14 + lVar13);
            FUN_10054c680();
            if (puVar5 == (undefined8 *)0x0) {
              FUN_1004f98e4();
              _swift_allocError(&DAT_1009d03a0,puVar7,0,0);
              puVar7[1] = 6;
              *puVar7 = 0;
              goto LAB_1004f93e8;
            }
            FUN_1004fa030();
            bVar15 = false;
            uVar3 = 0x2c;
LAB_1004f9314:
            FUN_100535660();
            lVar13 = param_1[2];
            if (lVar14 == 0) {
              if (lVar13 != 0) goto LAB_1004f90b8;
            }
            else if (lVar13 != param_1[1] - lVar14) {
LAB_1004f90b8:
              if (*(char *)(lVar14 + lVar13) == '}') {
                lVar12 = 0;
                if (lVar14 != 0) {
                  lVar12 = param_1[1] - lVar14;
                }
                if ((lVar13 < 0) || (lVar12 <= lVar13)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f96a0);
                  (*pcVar4)();
                }
                param_1[2] = lVar13 + 1;
                lVar13 = param_1[0xb] + 1;
                if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f96a4);
                  (*pcVar4)();
                }
                param_1[0xb] = lVar13;
                if (param_1[4] < lVar13) {
                  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                            ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                             "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f96fc);
                  (*pcVar4)();
                }
                uVar1 = *(ulong *)(unaff_x20 + 0x10) & 0xffffffffffff;
                if ((*(ulong *)(unaff_x20 + 0x18) & 0x2000000000000000) != 0) {
                  uVar1 = *(ulong *)(unaff_x20 + 0x18) >> 0x38 & 0xf;
                }
                if (uVar1 != 0) {
                  local_a0 = (undefined1)param_1[5];
                  local_b0 = local_58;
                  local_88 = 2;
                  puStack_a8 = (undefined8 *)lVar13;
                  _swift_beginAccess(unaff_x20 + 0x20,&local_c8,0x21,0);
                  FUN_1004f99e8(&local_b0,unaff_x20 + 0x20);
                  _swift_endAccess(&local_c8);
                  return;
                }
                _swift_bridgeObjectRelease(local_58);
                plVar10 = (long *)0x0;
                FUN_10054df34();
                _swift_allocObject();
                *(undefined1 *)(plVar10 + 2) = 2;
                plVar10[3] = -0x2fffffffffffffb2;
                plVar10[4] = -0x7ffffffeff743970;
                plVar10[5] = -0x2fffffffffffffef;
                plVar10[6] = -0x7ffffffeff7439c0;
                plVar10[7] = -0x2fffffffffffffdb;
                plVar10[8] = -0x7ffffffeff7439a0;
                lVar13 = 0x208;
LAB_1004f965c:
                plVar10[9] = lVar13;
                plVar11 = plVar10;
                FUN_1004f9a1c();
                _swift_allocError(&DAT_1009d16f0,plVar11,0,0);
                *plVar11 = (long)plVar10;
                _swift_willThrow();
                return;
              }
            }
            puVar7 = (undefined8 *)0x2c;
            FUN_1005363c8();
            goto LAB_1004f90d8;
          }
          _swift_bridgeObjectRelease();
          FUN_100535660();
          lVar12 = param_1[2];
          if (lVar14 == 0) {
            if (lVar12 == 0) goto LAB_1004f93c0;
LAB_1004f91a8:
            puVar7 = puVar8;
            if ((*(char *)(lVar14 + lVar12) != '\"') ||
               (FUN_100535e6c(), puVar7 = puVar8, puVar9 == (undefined8 *)0x0)) goto LAB_1004f93b8;
            uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
            *(undefined8 **)(unaff_x20 + 0x10) = puVar8;
            *(undefined8 **)(unaff_x20 + 0x18) = puVar9;
            _swift_bridgeObjectRetain(puVar9);
            _swift_bridgeObjectRelease(uVar6);
            local_c8 = 0x2f;
            local_c0 = 0xe100000000000000;
            local_b0 = puVar8;
            puStack_a8 = puVar9;
            FUN_1004f9a5c();
            puVar7 = &local_c8;
            puVar5 = (undefined8 *)PTR___sSSN_1009957f8;
            __sSy10FoundationE8containsySbqd__SyRd__lF
                      (puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar6,uVar6);
            _swift_bridgeObjectRelease(puVar9);
            if (((ulong)puVar7 & 1) != 0) goto LAB_1004f9314;
            _swift_bridgeObjectRelease(local_58);
            uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
            uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
            local_b0 = (undefined8 *)0x0;
            puStack_a8 = (undefined8 *)0xe000000000000000;
            _swift_bridgeObjectRetain(uVar2);
            __ss11_StringGutsV4growyySiF(0x2c);
            _swift_bridgeObjectRelease(puStack_a8);
            local_b0 = (undefined8 *)0xd000000000000029;
            puStack_a8 = (undefined8 *)0x80000001008bc740;
            __sSS6appendyySSF(uVar6,uVar2);
            _swift_bridgeObjectRelease(uVar2);
            __sSS6appendyySSF(0x2e,0xe100000000000000);
            puVar7 = puStack_a8;
            puVar5 = local_b0;
            plVar10 = (long *)0x0;
            FUN_10054df34();
            _swift_allocObject();
            *(undefined1 *)(plVar10 + 2) = 2;
            plVar10[3] = (long)puVar5;
            plVar10[4] = (long)puVar7;
            plVar10[5] = -0x2fffffffffffffef;
            plVar10[6] = -0x7ffffffeff7439c0;
            plVar10[7] = -0x2fffffffffffffdb;
            plVar10[8] = -0x7ffffffeff7439a0;
            lVar13 = 0x1ff;
            goto LAB_1004f965c;
          }
          if (lVar12 != lVar13 - lVar14) goto LAB_1004f91a8;
        }
LAB_1004f93c0:
        uVar6 = 0xd;
        puVar7 = puVar8;
LAB_1004f93c4:
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,puVar7,0,0);
        *puVar7 = 0;
        puVar7[1] = uVar6;
LAB_1004f93e8:
        _swift_willThrow();
        _swift_bridgeObjectRelease(local_58);
      }
    }
  }
  return;
}

