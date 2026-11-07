// rea decompile_all
// name: FUN_10055b928
// address: 0x10055b928
// body: available
// range: 0x10055b928-0x10055bbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055b928(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_100506f84(uVar3,uVar2 + 1,1,uVar1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5b;
  *unaff_x20 = uVar3;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 < 0) {
      uVar2 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
        FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar2 = *(ulong *)(uVar1 + 0x10);
      uVar3 = uVar1;
      if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
        FUN_100506f84(uVar3,uVar2 + 1,1,uVar1);
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
      *unaff_x20 = uVar3;
      lVar4 = -lVar4;
    }
    FUN_100556288(lVar4);
    lVar5 = lVar5 + -1;
    if (lVar5 != 0) {
      plVar6 = (long *)(param_1 + 0x28);
      do {
        lVar4 = *plVar6;
        FUN_1004f9e80(", ",2);
        if (lVar4 < 0) {
          uVar3 = *unaff_x20;
          uVar2 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar1 = uVar3;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
            FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar2 = *(ulong *)(uVar1 + 0x10);
          uVar3 = uVar1;
          if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
            FUN_100506f84(uVar3,uVar2 + 1,1,uVar1);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
          *unaff_x20 = uVar3;
          lVar4 = -lVar4;
        }
        FUN_100556288(lVar4);
        lVar5 = lVar5 + -1;
        plVar6 = plVar6 + 1;
      } while (lVar5 != 0);
    }
    uVar3 = *unaff_x20;
  }
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  lVar5 = uVar2 + 1;
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_100506f84(uVar3,lVar5,1,uVar1);
  }
  *(long *)(uVar3 + 0x10) = lVar5;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  lVar4 = uVar2 + 2;
  uVar2 = uVar3;
  if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar2,lVar4,1,uVar3);
  }
  *(long *)(uVar2 + 0x10) = lVar4;
  *(undefined1 *)(uVar2 + lVar5 + 0x20) = 10;
  *unaff_x20 = uVar2;
  return;
}

