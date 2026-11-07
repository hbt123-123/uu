// rea decompile_all
// name: FUN_1005594b4
// address: 0x1005594b4
// body: available
// range: 0x1005594b4-0x10055966b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005594b4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  
  uVar8 = unaff_x20[1];
  FUN_100557a54(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pfVar5 = (float *)(param_1 + 0x20);
    do {
      fVar9 = *pfVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_1004fa13c();
      _swift_bridgeObjectRetain(param_2);
      FUN_1004fa13c();
      FUN_1004f9e80(": ",2);
      if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar9 & 0x7fffff) == 0) {
          if (0.0 <= fVar9) {
            pcVar1 = "inf";
            goto LAB_1005595b0;
          }
          pcVar1 = "-inf";
          uVar4 = 4;
        }
        else {
          pcVar1 = "nan";
LAB_1005595b0:
          uVar4 = 3;
        }
        FUN_1004f9e80(pcVar1,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg(fVar9);
        FUN_1004fa030();
      }
      uVar6 = *unaff_x20;
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_100506f84(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar6 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar6;
      pfVar5 = pfVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}

