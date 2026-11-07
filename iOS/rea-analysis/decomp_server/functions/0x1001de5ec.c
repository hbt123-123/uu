// rea decompile_all
// name: FUN_1001de5ec
// address: 0x1001de5ec
// body: available
// range: 0x1001de5ec-0x1001deccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001de5ec(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long local_88;
  undefined8 local_80 [4];
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar11 = 0;
    do {
      lVar20 = lVar11 + 1;
      if (lVar20 < lVar13) {
        lVar19 = *param_3;
        uVar14 = *(undefined8 *)(lVar19 + lVar20 * 8);
        lVar20 = *(long *)(lVar19 + lVar11 * 8);
        local_88 = lVar20;
        local_80[0] = uVar14;
        _swift_bridgeObjectRetain(uVar14);
        _swift_bridgeObjectRetain(lVar20);
        puVar3 = local_80;
        FUN_1001dc778(puVar3,&local_88);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(lVar20);
        if (unaff_x21 != 0) goto LAB_1001dec68;
        plVar22 = (long *)(lVar19 + lVar11 * 8 + 0x10);
        lVar19 = lVar11 + 2;
        do {
          lVar20 = lVar13;
          if (lVar13 == lVar19) break;
          lVar20 = plVar22[-1];
          lVar10 = *plVar22;
          lVar17 = *(long *)(lVar10 + 0x10);
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(lVar20);
          if (lVar17 == 0) {
LAB_1001de77c:
            lVar17 = 0;
            if (*(long *)(lVar20 + 0x10) == 0) goto LAB_1001de6b8;
LAB_1001de788:
            _swift_bridgeObjectRetain(lVar20);
            lVar15 = 0x5f64657461657263;
            uVar9 = 0xed0000736d5f7461;
            FUN_1001a2c70(0x5f64657461657263);
            if ((uVar9 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar10);
              _swift_bridgeObjectRelease_n(lVar20,2);
              goto LAB_1001de6c8;
            }
            FUN_10003e8bc(*(long *)(lVar20 + 0x38) + lVar15 * 0x20,local_80);
            _swift_bridgeObjectRelease(lVar20);
            plVar4 = &local_88;
            _swift_dynamicCast(plVar4,local_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                              );
            lVar15 = local_88;
            if (((ulong)plVar4 & 1) == 0) goto LAB_1001de6b8;
            _swift_bridgeObjectRelease(lVar10);
            _swift_bridgeObjectRelease(lVar20);
          }
          else {
            lVar17 = 0x5f64657461657263;
            uVar9 = 0xed0000736d5f7461;
            FUN_1001a2c70(0x5f64657461657263);
            if ((uVar9 & 1) == 0) goto LAB_1001de77c;
            FUN_10003e8bc(*(long *)(lVar10 + 0x38) + lVar17 * 0x20,local_80);
            plVar4 = &local_88;
            _swift_dynamicCast(plVar4,local_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                              );
            if ((int)plVar4 == 0) goto LAB_1001de77c;
            lVar17 = local_88;
            if (*(long *)(lVar20 + 0x10) != 0) goto LAB_1001de788;
LAB_1001de6b8:
            _swift_bridgeObjectRelease(lVar10);
            _swift_bridgeObjectRelease(lVar20);
LAB_1001de6c8:
            lVar15 = 0;
          }
          plVar22 = plVar22 + 1;
          lVar20 = lVar19;
          lVar19 = lVar19 + 1;
        } while ((((uint)puVar3 ^ (uint)(lVar17 <= lVar15)) & 1) != 0);
        if (((ulong)puVar3 & 1) != 0) {
          if (lVar20 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001decac);
            (*pcVar1)();
          }
          if (lVar11 < lVar20) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar20 * 8);
            puVar3 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar19 = lVar20;
            lVar13 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar19 = lVar19 + -1;
              if (lVar13 != lVar19) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001decc4);
                  (*pcVar1)();
                }
                uVar14 = *puVar3;
                *puVar3 = *puVar12;
                *puVar12 = uVar14;
              }
              lVar13 = lVar13 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar13 < lVar19);
          }
        }
      }
      lVar13 = param_3[1];
      lVar19 = lVar20;
      if (lVar20 < lVar13) {
        if (SBORROW8(lVar20,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001deca0);
          (*pcVar1)();
        }
        if (lVar20 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001deca4);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar13 <= lVar11 + param_4) {
            lVar10 = lVar13;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001deca8);
            (*pcVar1)();
          }
          if (lVar20 != lVar10) {
            lVar13 = *param_3;
            plVar22 = (long *)(lVar13 + lVar20 * 8 + -8);
            lVar17 = lVar11 - lVar20;
            do {
              lVar15 = *(long *)(lVar13 + lVar20 * 8);
              plVar4 = plVar22;
              lVar19 = lVar17;
              do {
                lVar21 = *plVar4;
                lVar18 = *(long *)(lVar15 + 0x10);
                _swift_bridgeObjectRetain(lVar15);
                _swift_bridgeObjectRetain(lVar21);
                if (lVar18 == 0) {
LAB_1001de9e8:
                  lVar18 = 0;
                  if (*(long *)(lVar21 + 0x10) == 0) goto LAB_1001de9d0;
LAB_1001de9f4:
                  _swift_bridgeObjectRetain(lVar21);
                  lVar16 = 0x5f64657461657263;
                  uVar9 = 0xed0000736d5f7461;
                  FUN_1001a2c70(0x5f64657461657263);
                  if ((uVar9 & 1) != 0) {
                    FUN_10003e8bc(*(long *)(lVar21 + 0x38) + lVar16 * 0x20,local_80);
                    _swift_bridgeObjectRelease(lVar21);
                    plVar5 = &local_88;
                    _swift_dynamicCast(plVar5,local_80,PTR___sypN_100995e88 + 8,
                                       PTR___ss5Int64VN_100995cc0,6);
                    lVar16 = local_88;
                    if (((ulong)plVar5 & 1) != 0) {
                      _swift_bridgeObjectRelease(lVar15);
                      _swift_bridgeObjectRelease(lVar21);
                      goto LAB_1001dea7c;
                    }
                    _swift_bridgeObjectRelease(lVar15);
                    _swift_bridgeObjectRelease(lVar21);
                    if (0 < lVar18) goto LAB_1001deac0;
                    break;
                  }
                  _swift_bridgeObjectRelease(lVar15);
                  _swift_bridgeObjectRelease_n(lVar21,2);
                  if (lVar18 < 1) break;
                }
                else {
                  lVar18 = 0x5f64657461657263;
                  uVar9 = 0xed0000736d5f7461;
                  FUN_1001a2c70(0x5f64657461657263);
                  if ((uVar9 & 1) == 0) goto LAB_1001de9e8;
                  FUN_10003e8bc(*(long *)(lVar15 + 0x38) + lVar18 * 0x20,local_80);
                  plVar5 = &local_88;
                  _swift_dynamicCast(plVar5,local_80,PTR___sypN_100995e88 + 8,
                                     PTR___ss5Int64VN_100995cc0,6);
                  if ((int)plVar5 == 0) goto LAB_1001de9e8;
                  lVar18 = local_88;
                  if (*(long *)(lVar21 + 0x10) != 0) goto LAB_1001de9f4;
LAB_1001de9d0:
                  _swift_bridgeObjectRelease(lVar15);
                  _swift_bridgeObjectRelease(lVar21);
                  lVar16 = 0;
LAB_1001dea7c:
                  if (lVar18 <= lVar16) break;
                }
LAB_1001deac0:
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001decb0);
                  (*pcVar1)();
                }
                lVar18 = *plVar4;
                lVar15 = plVar4[1];
                *plVar4 = lVar15;
                plVar4[1] = lVar18;
                bVar2 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                plVar4 = plVar4 + -1;
              } while (bVar2);
              lVar20 = lVar20 + 1;
              plVar22 = plVar22 + 1;
              lVar17 = lVar17 + -1;
              lVar19 = lVar10;
            } while (lVar20 != lVar10);
          }
        }
      }
      puVar8 = local_58;
      if (lVar19 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001dec94);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar9 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar9 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar9 + 1;
      *(long *)(puVar8 + uVar9 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar8 + uVar9 * 0x10 + 0x28) = lVar19;
      local_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001decc8);
        (*pcVar1)();
      }
      FUN_1001deee4(&local_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1001dec68;
      lVar13 = param_3[1];
      lVar11 = lVar19;
    } while (lVar19 < lVar13);
  }
  puVar8 = local_58;
  lVar13 = *param_1;
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001decd0);
    (*pcVar1)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10006f924();
  }
  uVar9 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar9) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001deccc);
      (*pcVar1)();
    }
    lVar10 = uVar9 - 1;
    lVar19 = *(long *)(puVar8 + uVar9 * 0x10);
    lVar20 = *(long *)(puVar8 + lVar10 * 0x10 + 0x28);
    FUN_1001df150(lVar11 + lVar19 * 8,lVar11 + *(long *)(puVar8 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar20 * 8,lVar13);
    if (unaff_x21 != 0) break;
    if (lVar20 < lVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001dec98);
      (*pcVar1)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001dec9c);
      (*pcVar1)();
    }
    *(long *)(puVar8 + uVar9 * 0x10) = lVar19;
    *(long *)((long)(puVar8 + uVar9 * 0x10) + 8) = lVar20;
    local_58 = puVar8;
    FUN_10005fd60(lVar10);
    puVar8 = local_58;
    uVar9 = *(ulong *)(local_58 + 0x10);
  }
LAB_1001dec68:
  _swift_bridgeObjectRelease(local_58);
  return;
}

