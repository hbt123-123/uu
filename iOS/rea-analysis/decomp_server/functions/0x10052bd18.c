// rea decompile_all
// name: FUN_10052bd18
// address: 0x10052bd18
// body: available
// range: 0x10052bd18-0x10052be8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052bd18(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar6 = *unaff_x20;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lVar1 = uVar5 + 1;
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar6,lVar1,1,uVar4);
  }
  *(long *)(uVar6 + 0x10) = lVar1;
  *(undefined1 *)(uVar6 + uVar5 + 0x20) = 0x22;
  *unaff_x20 = uVar6;
  lVar3 = (long)param_1;
  if (param_1 < 0) {
    lVar2 = uVar5 + 2;
    uVar5 = uVar6;
    if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100506f84(uVar5,lVar2,1,uVar6);
    }
    *(long *)(uVar5 + 0x10) = lVar2;
    *(undefined1 *)(uVar5 + lVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar5;
    lVar3 = -lVar3;
  }
  FUN_10052badc(lVar3);
  uVar6 = *unaff_x20;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar6,uVar5 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
  *(undefined1 *)(uVar6 + uVar5 + 0x20) = 0x22;
  *unaff_x20 = uVar6;
  return;
}

