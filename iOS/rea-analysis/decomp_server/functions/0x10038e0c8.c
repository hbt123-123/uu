// rea decompile_all
// name: FUN_10038e0c8
// address: 0x10038e0c8
// body: available
// range: 0x10038e0c8-0x10038e303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10038e0c8(long *param_1,ID *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID IVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ID unaff_x26;
  undefined2 uVar11;
  undefined1 auVar12 [16];
  
  IVar2 = objc_stub::hash(*param_2);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar3 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar10 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar10))))
                                               ))));
    uVar11 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x26 = uVar10 - 1 & IVar2;
    }
    else {
      unaff_x26 = IVar2;
      if (uVar10 <= IVar2) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = IVar2 / uVar10;
        }
        unaff_x26 = IVar2 - uVar1 * uVar10;
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar4 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar4, plVar9 != (long *)0x0)) {
      do {
        IVar5 = plVar9[1];
        if (IVar5 == IVar2) {
          if ((plVar9[2] == *param_2) ||
             (IVar5 = objc_stub::isEqualToString_(plVar9[2]), (IVar5 & 1) != 0)) {
            uVar3 = 0;
            goto LAB_10038e2dc;
          }
        }
        else {
          if (uVar6 < 2) {
            IVar5 = IVar5 & uVar10 - 1;
          }
          else if (uVar10 <= IVar5) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = IVar5 / uVar10;
            }
            IVar5 = IVar5 - uVar1 * uVar10;
          }
          if (IVar5 != unaff_x26) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  plVar9 = operator_new(0x28);
  *plVar9 = 0;
  plVar9[1] = IVar2;
  lVar8 = *param_4;
  plVar9[2] = *param_3;
  plVar9[3] = lVar8;
  *(int *)(plVar9 + 4) = (int)param_4[1];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar10) {
      uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar6 = uVar6 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    FUN_100385a7c(param_1,uVar6);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & IVar2;
    }
    else {
      unaff_x26 = IVar2;
      if (uVar10 <= IVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = IVar2 / uVar10;
        }
        unaff_x26 = IVar2 - uVar6 * uVar10;
      }
    }
  }
  lVar8 = *param_1;
  plVar7 = *(long **)(lVar8 + unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar8 + unaff_x26 * 8) = plVar7;
    if (*plVar9 == 0) goto LAB_10038e2cc;
    uVar6 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar6 = uVar6 & uVar10 - 1;
    }
    else if (uVar10 <= uVar6) {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar6 / uVar10;
      }
      uVar6 = uVar6 - uVar1 * uVar10;
    }
    plVar7 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar9 = *plVar7;
  }
  *plVar7 = (long)plVar9;
LAB_10038e2cc:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10038e2dc:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}

