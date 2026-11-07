// rea decompile_all
// name: FUN_10052fb84
// address: 0x10052fb84
// body: available
// range: 0x10052fb84-0x10052fda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052fb84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      FUN_10052aec8(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x38);
        do {
          uVar1 = puVar7[-1];
          uVar2 = *puVar7;
          uVar5 = *unaff_x20;
          _swift_bridgeObjectRetain(uVar2);
          uVar3 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          FUN_10052aec8(uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          puVar7 = puVar7 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

