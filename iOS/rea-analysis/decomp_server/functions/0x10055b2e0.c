// rea decompile_all
// name: FUN_10055b2e0
// address: 0x10055b2e0
// body: available
// range: 0x10055b2e0-0x10055b49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055b2e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_100556288(*(undefined4 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined4 *)(param_1 + 0x24);
      do {
        uVar2 = *puVar7;
        FUN_1004f9e80(", ",2);
        FUN_100556288(uVar2);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar5 = *unaff_x20;
  }
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar1 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100506f84(uVar4,lVar1,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}

