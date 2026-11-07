// rea decompile_all
// name: FUN_10052e7d8
// address: 0x10052e7d8
// body: available
// range: 0x10052e7d8-0x10052ea93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052e7d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      dVar8 = *(double *)(param_1 + 0x20);
      if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar8) {
            pcVar2 = "\"Infinity\"";
            uVar4 = 10;
          }
          else {
            pcVar2 = "\"-Infinity\"";
            uVar4 = 0xb;
          }
        }
        else {
          pcVar2 = "\"NaN\"";
          uVar4 = 5;
        }
        FUN_1004f9e80(pcVar2,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg();
        FUN_1004fa030();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pdVar7 = (double *)(param_1 + 0x28);
        do {
          dVar8 = *pdVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_100506f84(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
            if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
              if (0.0 <= dVar8) {
                FUN_1004f9e80("\"Infinity\"",10);
              }
              else {
                FUN_1004f9e80("\"-Infinity\"",0xb);
              }
            }
            else {
              FUN_1004f9e80("\"NaN\"",5);
            }
          }
          else {
            __sSd16debugDescriptionSSvg(dVar8);
            FUN_1004fa030();
          }
          pdVar7 = pdVar7 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

