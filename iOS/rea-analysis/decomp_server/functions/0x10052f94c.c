// rea decompile_all
// name: FUN_10052f94c
// address: 0x10052f94c
// body: available
// range: 0x10052f94c-0x10052fb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052f94c(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar7 = *unaff_x20;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100506f84(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        pcVar3 = "false";
        uVar6 = 5;
      }
      else {
        pcVar3 = "true";
        uVar6 = 4;
      }
      FUN_1004f9e80(pcVar3,uVar6);
      lVar8 = lVar8 + -1;
      if (lVar8 != 0) {
        pcVar3 = (char *)(param_1 + 0x21);
        do {
          cVar1 = *pcVar3;
          uVar7 = *unaff_x20;
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar5 + 0x10);
          uVar7 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_100506f84(uVar7,uVar2 + 1,1,uVar5);
          }
          *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar7;
          if (cVar1 == '\0') {
            uVar6 = 5;
            pcVar4 = "false";
          }
          else {
            uVar6 = 4;
            pcVar4 = "true";
          }
          FUN_1004f9e80(pcVar4,uVar6);
          pcVar3 = pcVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar7 = *unaff_x20;
    }
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100506f84(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

