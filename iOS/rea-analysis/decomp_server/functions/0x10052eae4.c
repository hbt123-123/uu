// rea decompile_all
// name: FUN_10052eae4
// address: 0x10052eae4
// body: available
// range: 0x10052eae4-0x10052eccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052eae4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 *puVar6;
  
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      FUN_10052badc(*(undefined4 *)(param_1 + 0x20));
      lVar5 = lVar5 + -1;
      if (lVar5 != 0) {
        puVar6 = (undefined4 *)(param_1 + 0x24);
        do {
          uVar1 = *puVar6;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_100506f84(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          FUN_10052badc(uVar1);
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar4,uVar2 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

