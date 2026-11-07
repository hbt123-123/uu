// rea decompile_all
// name: FUN_10003de64
// address: 0x10003de64
// body: available
// range: 0x10003de64-0x10003df6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003de64(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (param_4 != param_3) {
    lVar7 = *param_5;
    piVar8 = (int *)(lVar7 + param_4 * 0x30 + -0x30);
    param_2 = param_2 - param_4;
    lVar10 = param_2;
    piVar9 = piVar8;
LAB_10003deac:
    do {
      piVar11 = piVar8 + 0xc;
      iVar1 = piVar8[0xf];
      iVar3 = piVar8[0x10];
      iVar2 = piVar8[3];
      iVar4 = piVar8[4];
      if ((long)iVar3 * (long)iVar1 - (long)iVar4 * (long)iVar2 == 0) {
        if (iVar1 == iVar2) {
          if (iVar3 == iVar4) {
            if (ABS(*(double *)(piVar8 + 0x12) - param_1) == ABS(*(double *)(piVar8 + 6) - param_1))
            {
              if (*piVar11 < *piVar8) {
LAB_10003df2c:
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10003df70);
                  (*pcVar5)();
                }
                uStack_18 = (undefined1)*(undefined8 *)(piVar8 + 0x12);
                uStack_17 = (undefined7)*(undefined8 *)((long)piVar8 + 0x49);
                uVar13 = *(undefined8 *)(piVar8 + 2);
                uVar12 = *(undefined8 *)piVar8;
                uVar15 = *(undefined8 *)(piVar8 + 6);
                uVar14 = *(undefined8 *)(piVar8 + 4);
                *(undefined8 *)((long)piVar8 + 0x21) = *(undefined8 *)((long)piVar8 + 0x51);
                *(undefined8 *)((long)piVar8 + 0x19) = *(undefined8 *)((long)piVar8 + 0x49);
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 0xe);
                *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
                *(ulong *)(piVar8 + 6) = CONCAT71(uStack_17,uStack_18);
                *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 0x10);
                *(undefined8 *)(piVar8 + 0xe) = uVar13;
                *(undefined8 *)piVar11 = uVar12;
                *(undefined8 *)(piVar8 + 0x12) = uVar15;
                *(undefined8 *)(piVar8 + 0x10) = uVar14;
                *(undefined8 *)(piVar8 + 0x16) = *(undefined8 *)(piVar8 + 10);
                *(undefined8 *)(piVar8 + 0x14) = *(undefined8 *)(piVar8 + 8);
                bVar6 = param_2 != -1;
                param_2 = param_2 + 1;
                piVar8 = piVar8 + -0xc;
                if (bVar6) goto LAB_10003deac;
              }
            }
            else if (ABS(*(double *)(piVar8 + 0x12) - param_1) <
                     ABS(*(double *)(piVar8 + 6) - param_1)) goto LAB_10003df2c;
          }
          else if (iVar4 < iVar3) goto LAB_10003df2c;
        }
        else if (iVar2 < iVar1) goto LAB_10003df2c;
      }
      else if ((long)iVar4 * (long)iVar2 < (long)iVar3 * (long)iVar1) goto LAB_10003df2c;
      param_4 = param_4 + 1;
      piVar8 = piVar9 + 0xc;
      param_2 = lVar10 + -1;
      lVar10 = param_2;
      piVar9 = piVar8;
    } while (param_4 != param_3);
  }
  return;
}

