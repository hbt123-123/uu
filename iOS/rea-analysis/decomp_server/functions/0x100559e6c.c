// rea decompile_all
// name: FUN_100559e6c
// address: 0x100559e6c
// body: available
// range: 0x100559e6c-0x100559fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100559e6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  
  uVar9 = unaff_x20[1];
  FUN_100557a54(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pcVar8 = (char *)(param_1 + 0x20);
    do {
      cVar3 = *pcVar8;
      _swift_bridgeObjectRetain(uVar9);
      FUN_1004fa13c();
      _swift_bridgeObjectRetain(param_2);
      FUN_1004fa13c();
      FUN_1004f9e80(": ",2);
      pcVar2 = "true";
      if (cVar3 == '\0') {
        pcVar2 = "false";
      }
      uVar1 = 4;
      if (cVar3 == '\0') {
        uVar1 = 5;
      }
      FUN_1004f9e80(pcVar2,uVar1);
      uVar6 = *unaff_x20;
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_100506f84(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined1 *)(uVar6 + uVar4 + 0x20) = 10;
      *unaff_x20 = uVar6;
      pcVar8 = pcVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}

