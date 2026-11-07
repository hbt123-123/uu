// rea decompile_all
// name: FUN_100558f84
// address: 0x100558f84
// body: available
// range: 0x100558f84-0x10055905f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100558f84(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  bVar3 = (param_1 & 1) == 0;
  pcVar2 = "true";
  if (bVar3) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar3) {
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
  return;
}

