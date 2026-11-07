// rea decompile_all
// name: FUN_100522110
// address: 0x100522110
// body: available
// range: 0x100522110-0x1005226af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100522110(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  int iVar15;
  ulong unaff_x22;
  ulong uVar16;
  ushort uVar17;
  undefined1 auVar18 [16];
  
  FUN_100521ec0();
  uVar16 = param_1[2];
  if (uVar16 < 0x14) {
LAB_100522178:
    _swift_bridgeObjectRelease();
  }
  else {
    plVar4 = param_1 + 4;
    uVar17 = NEON_umaxv(CONCAT26(-(ushort)(param_1[7] - 0x3a < 0xfffffffffffffff6),
                                 CONCAT24(-(ushort)(param_1[6] - 0x3a < 0xfffffffffffffff6),
                                          CONCAT22(-(ushort)(param_1[5] - 0x3a < 0xfffffffffffffff6)
                                                   ,-(ushort)(*plVar4 - 0x3aU < 0xfffffffffffffff6))
                                         )),2);
    if (((uVar17 & 1) != 0) || (param_1[8] != 0x2d)) goto LAB_100522178;
    uVar10 = *plVar4 * 1000 + param_1[5] * 100 + param_1[6] * 10 + param_1[7];
    lVar6 = uVar10 - 0xd050;
    if ((((lVar6 == 0) ||
         (((param_1[9] - 0x3a < 0xfffffffffffffff6 || (param_1[10] - 0x3a < 0xfffffffffffffff6)) ||
          (param_1[0xb] != 0x2d)))) ||
        ((((lVar13 = param_1[10] + param_1[9] * 10, lVar13 - 0x21dU < 0xfffffffffffffff4 ||
           (param_1[0xc] - 0x3a < 0xfffffffffffffff6)) || (param_1[0xd] - 0x3a < 0xfffffffffffffff6)
          ) || ((param_1[0xe] != 0x54 ||
                (lVar9 = param_1[0xd] + param_1[0xc] * 10, lVar9 - 0x230U < 0xffffffffffffffe1))))))
       || (((param_1[0xf] - 0x3a < 0xfffffffffffffff6 ||
            ((((param_1[0x10] - 0x3a < 0xfffffffffffffff6 || (param_1[0x11] != 0x3a)) ||
              (uVar8 = (param_1[0x10] + param_1[0xf] * 10) - 0x210, 0x17 < uVar8)) ||
             ((param_1[0x12] - 0x3a < 0xfffffffffffffff6 ||
              (param_1[0x13] - 0x3a < 0xfffffffffffffff6)))))) ||
           (((param_1[0x14] != 0x3a ||
             ((uVar11 = (param_1[0x13] + param_1[0x12] * 10) - 0x210, 0x3b < uVar11 ||
              (param_1[0x15] - 0x3a < 0xfffffffffffffff6)))) ||
            ((param_1[0x16] - 0x3a < 0xfffffffffffffff6 ||
             (uVar12 = (param_1[0x16] + param_1[0x15] * 10) - 0x210, 0x3d < uVar12))))))))
    goto LAB_100522178;
    lVar14 = *(long *)(&DAT_100aa7bd8 + lVar13 * 8);
    uVar5 = (uint)lVar6 & 0xffff;
    if ((((uVar5 * -0x3d70a3d7 >> 4 | uVar5 * -0x70000000) < 0xa3d70b) ||
        (((uVar10 & 3) == 0 && (uVar5 % 100 != 0)))) &&
       ((2 < lVar13 - 0x210U && (bVar3 = SCARRY8(lVar14,1), lVar14 = lVar14 + 1, bVar3)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522690);
      (*pcVar2)();
    }
    lVar9 = lVar9 + -0x211;
    lVar13 = lVar14 + lVar9;
    if (SCARRY8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522670);
      (*pcVar2)();
    }
    lVar9 = lVar6 * 0x16d + -0xafaa7;
    lVar6 = lVar13 + lVar9;
    if (SCARRY8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522674);
      (*pcVar2)();
    }
    uVar1 = uVar10 - 0xd051 >> 2;
    lVar13 = lVar6 + uVar1;
    if (SCARRY8(lVar6,uVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522678);
      (*pcVar2)();
    }
    uVar5 = (uint)(uVar10 - 0xd051);
    uVar10 = (ulong)((uVar5 >> 2 & 0x3fff) / 0x19);
    lVar6 = lVar13 - uVar10;
    if (SBORROW8(lVar13,uVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10052267c);
      (*pcVar2)();
    }
    uVar10 = (ulong)((uVar5 >> 4 & 0xfff) / 0x19);
    lVar13 = lVar6 + uVar10;
    if (SCARRY8(lVar6,uVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522680);
      (*pcVar2)();
    }
    lVar6 = lVar13 * 0x15180;
    if (SUB168(SEXT816(lVar13) * SEXT816(0x15180),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522684);
      (*pcVar2)();
    }
    lVar13 = uVar12 + (uVar11 + uVar8 * 0x3c) * 0x3c;
    unaff_x20 = lVar6 + lVar13;
    if (SCARRY8(lVar6,lVar13)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100522688);
      (*pcVar2)();
    }
    if (param_1[0x17] == 0x2e) {
      if (uVar16 != 0x14) {
        unaff_x22 = 0;
        plVar7 = param_1 + 0x18;
        uVar10 = 0x14;
        lVar6 = 100000000;
        do {
          if (uVar16 == uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100522660);
            (*pcVar2)();
          }
          if (*plVar7 - 0x3aU < 0xfffffffffffffff6) goto LAB_1005224f8;
          lVar13 = (*plVar7 + -0x30) * lVar6;
          if (lVar13 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100522664);
            (*pcVar2)();
          }
          if (0x7fffffff < lVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100522668);
            (*pcVar2)();
          }
          iVar15 = (int)unaff_x22;
          unaff_x22 = (ulong)(uint)(iVar15 + (int)lVar13);
          if (SCARRY4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10052266c);
            (*pcVar2)();
          }
          lVar6 = lVar6 / 10;
          uVar10 = uVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar16 != uVar10);
      }
      goto LAB_100522178;
    }
    unaff_x22 = 0;
    uVar10 = 0x13;
LAB_1005224f8:
    if (uVar16 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10052268c);
      (*pcVar2)();
    }
    lVar6 = plVar4[uVar10];
    if ((lVar6 == 0x2d) || (lVar6 == 0x2b)) {
      uVar8 = uVar10 + 6;
      if (SCARRY8(uVar10,6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100522694);
        (*pcVar2)();
      }
      if ((long)uVar8 <= (long)uVar16) {
        if (uVar16 <= uVar10 + 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100522698);
          (*pcVar2)();
        }
        if (uVar16 <= uVar10 + 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10052269c);
          (*pcVar2)();
        }
        if ((0xfffffffffffffff5 < plVar4[uVar10 + 1] - 0x3aU) &&
           (0xfffffffffffffff5 < plVar4[uVar10 + 2] - 0x3aU)) {
          if (uVar16 <= uVar10 + 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005226a4);
            (*pcVar2)();
          }
          if (uVar16 <= uVar10 + 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005226a8);
            (*pcVar2)();
          }
          if ((((0xfffffffffffffff5 < plVar4[uVar10 + 4] - 0x3aU) &&
               (0xfffffffffffffff5 < plVar4[uVar10 + 5] - 0x3aU)) &&
              (uVar11 = (plVar4[uVar10 + 2] + plVar4[uVar10 + 1] * 10) - 0x210, uVar11 < 0xe)) &&
             (uVar12 = (plVar4[uVar10 + 5] + plVar4[uVar10 + 4] * 10) - 0x210, uVar12 < 0x3c)) {
            lVar13 = (plVar4 + uVar10)[3];
            _swift_bridgeObjectRelease();
            if (lVar13 == 0x3a) {
              lVar13 = uVar11 * 0xe10;
              if (lVar6 == 0x2b) {
                lVar6 = unaff_x20 + uVar11 * -0xe10;
                if (SBORROW8(unaff_x20,lVar13)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005226ac);
                  (*pcVar2)();
                }
                unaff_x20 = lVar6 + uVar12 * -0x3c;
                if (SBORROW8(lVar6,uVar12 * 0x3c)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005225fc);
                  (*pcVar2)();
                }
              }
              else {
                lVar6 = unaff_x20 + lVar13;
                if (SCARRY8(unaff_x20,lVar13)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005226b0);
                  (*pcVar2)();
                }
                unaff_x20 = lVar6 + uVar12 * 0x3c;
                if (SCARRY8(lVar6,uVar12 * 0x3c)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10052265c);
                  (*pcVar2)();
                }
              }
              goto LAB_100522610;
            }
            goto LAB_10052217c;
          }
        }
      }
      goto LAB_100522178;
    }
    _swift_bridgeObjectRelease();
    if (lVar6 == 0x5a) {
      uVar8 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005226a0);
        (*pcVar2)();
      }
LAB_100522610:
      if ((uVar8 == uVar16) && (0xffffffb68879c77f < unaff_x20 - 0x3afff44180U)) goto LAB_1005221b0;
    }
  }
LAB_10052217c:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  param_1[1] = 0xf;
  *param_1 = 0;
  _swift_willThrow();
LAB_1005221b0:
  auVar18._8_8_ = unaff_x22;
  auVar18._0_8_ = unaff_x20;
  return auVar18;
}

