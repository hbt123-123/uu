// rea decompile_all
// name: FUN_10055bbf8
// address: 0x10055bbf8
// body: available
// range: 0x10055bbf8-0x10055bde7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055bbf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar8 = *unaff_x20;
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    FUN_100506f84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506f84(uVar8,uVar7 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5b;
  *unaff_x20 = uVar8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    bVar5 = *(char *)(param_1 + 0x20) == '\0';
    pcVar9 = "true";
    if (bVar5) {
      pcVar9 = "false";
    }
    uVar2 = 4;
    if (bVar5) {
      uVar2 = 5;
    }
    FUN_1004f9e80(pcVar9,uVar2);
    lVar10 = lVar10 + -1;
    if (lVar10 != 0) {
      pcVar9 = (char *)(param_1 + 0x21);
      do {
        cVar4 = *pcVar9;
        FUN_1004f9e80(", ",2);
        pcVar3 = "true";
        if (cVar4 == '\0') {
          pcVar3 = "false";
        }
        uVar2 = 4;
        if (cVar4 == '\0') {
          uVar2 = 5;
        }
        FUN_1004f9e80(pcVar3,uVar2);
        lVar10 = lVar10 + -1;
        pcVar9 = pcVar9 + 1;
      } while (lVar10 != 0);
    }
    uVar8 = *unaff_x20;
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    FUN_100506f84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  lVar10 = uVar7 + 1;
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506f84(uVar8,lVar10,1,uVar6);
  }
  *(long *)(uVar8 + 0x10) = lVar10;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5d;
  *unaff_x20 = uVar8;
  lVar1 = uVar7 + 2;
  uVar7 = uVar8;
  if ((long)(*(ulong *)(uVar8 + 0x18) >> 1) < lVar1) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_100506f84(uVar7,lVar1,1,uVar8);
  }
  *(long *)(uVar7 + 0x10) = lVar1;
  *(undefined1 *)(uVar7 + lVar10 + 0x20) = 10;
  *unaff_x20 = uVar7;
  return;
}

