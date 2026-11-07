// rea decompile_all
// name: FUN_10052bbb0
// address: 0x10052bbb0
// body: available
// range: 0x10052bbb0-0x10052bd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052bbb0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar1 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar5,lVar1,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar5;
  if (param_1 < 0) {
    lVar2 = uVar4 + 2;
    uVar4 = uVar5;
    if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100506f84(uVar4,lVar2,1,uVar5);
    }
    *(long *)(uVar4 + 0x10) = lVar2;
    *(undefined1 *)(uVar4 + lVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar4;
    param_1 = -param_1;
  }
  FUN_10052badc(param_1);
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
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar5;
  return;
}

