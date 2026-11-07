// rea decompile_all
// name: FUN_10055affc
// address: 0x10055affc
// body: available
// range: 0x10055affc-0x10055b28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055affc(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  double dVar9;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar6,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_10055b0e4;
  dVar9 = *(double *)(param_1 + 0x20);
  if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    if (((ulong)dVar9 & 0xfffffffffffff) == 0) {
      if (0.0 <= dVar9) {
        pcVar2 = "inf";
        goto LAB_10055b0d0;
      }
      pcVar2 = "-inf";
      uVar5 = 4;
    }
    else {
      pcVar2 = "nan";
LAB_10055b0d0:
      uVar5 = 3;
    }
    FUN_1004f9e80(pcVar2,uVar5);
  }
  else {
    __sSd16debugDescriptionSSvg();
    FUN_1004fa030();
  }
  if (lVar7 != 1) {
    lVar7 = lVar7 + -1;
    pdVar8 = (double *)(param_1 + 0x28);
    do {
      dVar9 = *pdVar8;
      FUN_1004f9e80(", ",2);
      if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        pcVar2 = "nan";
        if ((((ulong)dVar9 & 0xfffffffffffff) != 0) || (pcVar2 = "inf", 0.0 <= dVar9)) {
          FUN_1004f9e80(pcVar2,3);
        }
        else {
          FUN_1004f9e80("-inf",4);
        }
      }
      else {
        __sSd16debugDescriptionSSvg(dVar9);
        FUN_1004fa030();
      }
      pdVar8 = pdVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar6 = *unaff_x20;
LAB_10055b0e4:
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar7 = uVar4 + 1;
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar6,lVar7,1,uVar3);
  }
  *(long *)(uVar6 + 0x10) = lVar7;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar6;
  lVar1 = uVar4 + 2;
  uVar4 = uVar6;
  if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506f84(uVar4,lVar1,1,uVar6);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar7 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}

