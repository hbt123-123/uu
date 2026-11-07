// rea decompile_all
// name: FUN_10055b49c
// address: 0x10055b49c
// body: available
// range: 0x10055b49c-0x10055b657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055b49c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_100506f84(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5b;
  *unaff_x20 = uVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_100556288(*(undefined8 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar5 = *puVar7;
        FUN_1004f9e80(", ",2);
        FUN_100556288(uVar5);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar4 = *unaff_x20;
  }
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  lVar6 = uVar3 + 1;
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_100506f84(uVar4,lVar6,1,uVar2);
  }
  *(long *)(uVar4 + 0x10) = lVar6;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5d;
  *unaff_x20 = uVar4;
  lVar1 = uVar3 + 2;
  uVar3 = uVar4;
  if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar3,lVar1,1,uVar4);
  }
  *(long *)(uVar3 + 0x10) = lVar1;
  *(undefined1 *)(uVar3 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}

